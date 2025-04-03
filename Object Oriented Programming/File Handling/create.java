import java.io.File;
import java.io.IOException;
//if existing then delete if not create
public class create {
    public static void main(String[] args) throws IOException {

            File f = new File("C:\\Users\\JAHNAVI SAXENA\\OneDrive\\Desktop\\Academic\\SEM 4\\OOPS\\Class_Tasks\\File handling\\test.txt.txt");//path of file
            if(f.exists() == true){
                f.delete();
                System.out.println("File deleted successfully");
            }
            else{
                f.createNewFile();
                System.out.println("File created successfully");
            }
            //ishidden,canWrite,isWritable(true),isReadable(true),length,exists,delete,createNewFile
    }
}
