import java.util.Scanner;

public class Prime
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n, count=0;
        System.out.print("Enter a Number : ");
        n = sc.nextInt();
        for(int i=2; i<=n/2; i++)
        {
            if(n%i == 0)
            {
                count = 1;
                break;
            }
        }
        if(count == 0)
            System.out.println(n + " is a prime number.");
        else
            System.out.println(n + " isn't a prime number.");
    }
}
