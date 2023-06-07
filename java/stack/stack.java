package stack;
public class stack{
    int stack[];
    int top=-1;
    int capacity;

    public stack(int size){
        stack=new int[size];
        top=-1;
        capacity=size;
    }
    public void push(int data){
        if(top==capacity-1){
            System.out.println("Stack is full");
        }
        else{
            stack[++top]=data;
            System.out.println("Data inserted: ");
        }
    }
    public void pop(){
        if(top==-1){
            System.out.println("Stack is empty");
        }
        else{
            top--;
        }
    }
    public void display(){
        if(top==-1){
            System.out.println("Stack empty");
        }
        else{
        System.out.println("Stack elements:");
        for(int i=0;i<=top;i++){
            System.out.println(stack[i]);
        }
        }
    }
}
