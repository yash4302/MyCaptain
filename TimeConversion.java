import java.util.*;

public class TimeConversion
{
    public static void main(String[] args)
    {
        int days, minutes;
        short years;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Minutes : ");
        minutes = sc.nextInt();
        days = (int)(minutes/(60*24));  // 1 day = 24*60 minutes
        years = (short)(days/365);      // 1 year = 365 day (normally) = 366 days (leap year)
        days = days%365;                // Remaining days after adding into years
        days = days-(int)(years/4);     // Counting for Leap years
        System.out.println(years + " years " + days + " days");
    }
}
