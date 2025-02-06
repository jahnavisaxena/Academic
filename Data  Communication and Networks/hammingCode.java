import java.util.*;

public class hamming {
    
    
    public static int[] generateHammingCode(int[] data, int r) {
        
        int[] hamming = new int[data.length + r];
        int d = 0;

        
        for (int i = 0; i < hamming.length; i++) {
            if (i == 0 || i == 1 || i == 3 || i == 7) { 
                hamming[i] = 0; 
            } else {
                hamming[i] = data[d];
                d++;
            }
        }

        
        for (int i = 0; i < r; i++) {
            int parityBitPos = (int) Math.pow(2, i); 
            int parity = 0;

           
            for (int j = parityBitPos - 1; j < hamming.length; j += (parityBitPos * 2)) {
                for (int k = j; k < j + parityBitPos && k < hamming.length; k++) {
                    parity ^= hamming[k]; 
                }
            }
            hamming[parityBitPos - 1] = parity; 
        }

        return hamming;
    }

    
    public static void receiveHammingCode(int[] received, int r) {
        
        int errorPosition = 0;

        
        for (int i = 0; i < r; i++) {
            int parityBitPos = (int) Math.pow(2, i); 
            int parity = 0;

            
            for (int j = parityBitPos - 1; j < received.length; j += (parityBitPos * 2)) {
                for (int k = j; k < j + parityBitPos && k < received.length; k++) {
                    parity ^= received[k]; 
                }
            }

            
            if (parity != 0) {
                errorPosition += parityBitPos;
            }
        }

        
        if (errorPosition != 0) {
            System.out.println("Error detected at position: " + errorPosition);
           
            received[errorPosition - 1] = (received[errorPosition - 1] == 0) ? 1 : 0;
            System.out.println("Corrected Hamming code: " + Arrays.toString(received));
        } else {
            System.out.println("No error detected.");
        }

        
        System.out.print("Original data bits: ");
        for (int i = 0; i < received.length; i++) {
            
            if (i != 0 && i != 1 && i != 3 && i != 7) {
                System.out.print(received[i] + " ");
            }
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Sender Side
        System.out.println("Enter data with space between each bit (4 data bits):");
        int[] data = new int[4];
        for (int i = 0; i < 4; i++) {
            data[i] = sc.nextInt();
        }

        
        int r = 0;
        while (Math.pow(2, r) < data.length + r + 1) {
            r++;
        }

        
        int[] hammingCode = generateHammingCode(data, r);

        
        System.out.println("Hamming code sent by sender: " + Arrays.toString(hammingCode));

        
        System.out.println("\nEnter received Hamming code (with possible errors), separated by space:");
        int[] received = new int[hammingCode.length];
        for (int i = 0; i < hammingCode.length; i++) {
            received[i] = sc.nextInt();
        }

        
        receiveHammingCode(received, r);
    }
}
