// addition of two 2d matric
import java.util.Scanner;
public class tdarray {

    public static void main(String[] args){
       Scanner sc =new Scanner(System.in);
       int a[][]= new int[3][3];
       for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            a[i][j]=sc.nextInt();
         }
        }
        System.out.println(" first matrix: ");
       for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            System.out.print(a[i][j]+" ");
        }
        System.out.println(" ");
       }

       int b[][]= new int[3][3];
       for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            b[i][j]=sc.nextInt();
         }
        }
        System.out.println("second matrix ");
       for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            System.out.print(b[i][j]+" ");
        }
        System.out.println(" ");
       }
       
       System.out.println(" addition matrix ");
       for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            System.out.print(a[i][j]+b[i][j]+" ");
        }
        System.out.println(" ");
       }
    }
}


