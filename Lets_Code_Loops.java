import java.util.Scanner;

public class Lets_Code_Loops_1
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        // Part 1
        int age;
        System.out.print("Enter your Age : ");
        age = sc.nextInt();
        if(age >= 18)
            System.out.println("You are eligible to vote.");
        else if(age > 20)
            System.out.println("You are a Major.");
        else
            System.out.println("You are NOT a Major.");

        // Part 2
        int choice;
        System.out.println("\nChoices:\n1. Hi\n2. Hey\n3. Hello");
        System.out.print("Enter your choice : ");
        choice = sc.nextInt();
        switch(choice)
        {
            case 1:
                System.out.println("You said \"Hi\"");
                break;
            case 2:
                System.out.println("You said \"Hey\"");
                break;
            case 3:
                System.out.println("You said \"Hello\"");
                break;
            default:
                System.out.println("Invalid choice.");
        }
    }
}
