import java.util.Scanner;

public class Fibonacci
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n;
        int f_n2=0, f_n1=1, f_n;
        System.out.print("Enter N : ");
        n = sc.nextInt();
        System.out.print("Fibonacci Series : ");
        System.out.print(f_n2 + " " + f_n1);
        for(int i=2; i<n; i++)
        {
            f_n = f_n1 + f_n2;
            System.out.print(" " + f_n);
            f_n2 = f_n1;
            f_n1 = f_n;
        }
        System.out.println();
    }
}
