import java.util.Scanner;

public class Employee
{
    public static void main(String[] args)
    {
        Data d1 = new Data("Robert", 1994, "64C- WallsStreet");
        Data d2 = new Data("Sam", 2000, "68D- WallsStreet");
        Data d3 = new Data("John", 1999, "26B- WallsStreet");
        System.out.println(" Name \t   Year of Joining \t    Address");
        System.out.println(d1.getName() + "\t\t" + d1.getYear() + "\t\t" + d1.getAddress());
        System.out.println(d2.getName() + "\t\t" + d2.getYear() + "\t\t" + d2.getAddress());
        System.out.println(d3.getName() + "\t\t" + d3.getYear() + "\t\t" + d3.getAddress());
    }
}

class Data
{
    private String e_Name, e_Address;
    private int joinYear;
    Data(String name, int year, String add)
    {
        e_Name = name;
        joinYear = year;
        e_Address = add;
    }
    public String getName()
    {
        return e_Name;
    }
    public String getAddress()
    {
        return e_Address;
    }
    public int getYear()
    {
        return joinYear;
    }
}
