import java.util.*;

public class lab2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("How many bits: ");
        int bit = sc.nextInt();

        System.out.print("Enter frame size: ");
        int frame_size = sc.nextInt();

        
        int no_of_frames = bit / frame_size;
        System.out.println("No. of frames: " + no_of_frames);

        System.out.print("Enter the bits (space separated): ");
        int[] data = new int[bit];
        for (int i = 0; i < bit; i++) {
            data[i] = sc.nextInt();
        }

        // Perform bit stuffing
        System.out.print("Bit stuffing 0/1: ");
        int bs = sc.nextInt();

        int[] stuffedData = new int[bit * 2]; 
        int[] stuffedSize = new int[1]; 

        if (bs == 1) {
            bitStuffingVariableSize.Stuffing(data, stuffedData, stuffedSize);

            int totalSize = stuffedSize[0];
            int frameSize = frame_size;
            int numberOfFrames = (int) Math.ceil((double) totalSize / frameSize);

            // Print stuffed data
            System.out.print("Stuffed Data: ");
            for (int i = 0; i < totalSize; i++) {
                System.out.print(stuffedData[i] + " ");
            }
            System.out.println();

            System.out.println("Number of frames required: " + numberOfFrames);

            System.out.println("Frame sizes:");
            for (int frame = 0; frame < numberOfFrames; frame++) {
                int start = frame * frameSize;
                int end = Math.min(start + frameSize, totalSize);
                int size = end - start;
                System.out.println("Frame " + (frame + 1) + " size: " + size);
            }
        } else {
            System.out.println("No bit stuffing performed.");
        }

        sc.close();
    }
}

class bitStuffingVariableSize {
    public static void Stuffing(int[] data, int[] stuffedData, int[] stuffedSize) {
        int count = 0;
        int j = 0;

        for (int i = 0; i < data.length; i++) {
            stuffedData[j++] = data[i];

            if (data[i] == 0) {
                count++;
            } else {
                count = 0;
            }

            if (count == 3) {
                stuffedData[j++] = 1; 
                count = 0; 
            }
        }

        stuffedSize[0] = j; 
    }
}
