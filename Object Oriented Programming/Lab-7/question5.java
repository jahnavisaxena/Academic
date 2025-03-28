/*Write a Java program that defines an interface StackInterface with three methods: push(), 
pop(), and display(). Implement this interface in a class called StackClass. The StackClass 
should also contain the main method, where a switch-case structure is used to allow users 
to select and perform stack operations */
public class question5 {

    public static void main(String[] args) {
        stackClass s = new stackClass();
        System.out.println("1. Push");
        System.out.println("2. Pop");
        System.out.println("3. Display");
        int choice;
        do{
            System.out.println("Enter your choice");
            choice = 1;
            switch(choice){
                case 1:
                    s.push();
                    break;
                case 2:
                    s.pop();
                    break;
                case 3:
                    s.display();
                    break;
                default:
                    System.out.println("Invalid choice");
            }
        }while(choice!=4);

    }
}
interface StackInterface{
    void push();
    void pop();
    void display();
}

class stackClass implements StackInterface{
    int arr[] = new int[10];
    int top = -1;
    @Override
    public void push(){
        if(top == 9){
            System.out.println("Stack is full");
        }
        else{
            System.out.println("Enter the element to push");
            int ele = 10;
            top++;
            arr[top] = ele;
        }
    }
    public void pop(){
        if(top == -1){
            System.out.println("Stack is empty");
        }
        else{
            System.out.println("Element popped is : "+arr[top]);
            top--;
        }
    }
    public void display(){
        if(top == -1){
            System.out.println("Stack is empty");
        }
        else{
            System.out.println("Elements in stack are : ");
            for(int i = 0; i<=top; i++){
                System.out.println(arr[i]);
            }
        }
    }
}
