import java.util.*;

public class DateConversion
{
    public static void main(String[] args)
    {
        int days;
        short years;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Days : ");
        days = sc.nextInt();
        years = (short)(days/365);
        days = days%365;
        days = days-(int)(years/4);
        System.out.println(years + " years " + days + " days");
    }
}
