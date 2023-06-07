package array;

import java.util.Scanner;

public class a2{
    public static void main(String[] args){
        Scanner sc =new Scanner(System.in);
        int size;
        //int[] a= new int[4];
        System.out.println("enter size: ");
        size=sc.nextInt();
        int a[]= new int[size];

       
       for(int i=0;i<5;i++){
        a[i]=sc.nextInt();
       }
       

    }
}
