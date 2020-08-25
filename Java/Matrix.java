import java.util.Scanner;

public class Matrix
{
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args)
    {
        int row, column;
        double a[][], b[][], result[][];
        // Input for Rows and Columns
        System.out.print("Enter Rows : ");
        row = sc.nextInt();
        System.out.print("Enter Columns : ");
        column = sc.nextInt();
        // Declaring Matrices
        a = new double[row][column];
        b = new double[row][column];
        result = new double[row][column];
        // Matrix Input
        System.out.println("\nEnter Matrix-1 : ");
        scanMatrix(a);
        System.out.println("\nEnter Matrix-2 : ");
        scanMatrix(b);
        // Addition
        result = addMatrix(a, b);
        System.out.println("\nAddition of Matrices : ");
        printMatrix(result);
        // Multiplication
        if(row != column) // A's columns and B's Rows // a[0].length != b.length
            System.out.println("\nMultiplication NOT POSSIBLE !!");
        else
        {
            result = mulMatrix(a, b);
            System.out.println("\nMultiplicatin of Matrices : ");
            printMatrix(result);
        }
    }

    static void scanMatrix(double a[][])
    {
        for(int i=0; i<a.length; i++)
            for(int j=0; j<a[0].length; j++)
                a[i][j] = sc.nextDouble();
    }

    static void initMatrix(double a[][])
    {
        for(int i=0; i<a.length; i++)
            for(int j=0; j<a[0].length; j++)
                a[i][j] = 0;
    }

    static void printMatrix(double a[][])
    {
        for(int i=0; i<a.length; i++)
        {
            for(int j=0; j<a[0].length; j++)
                System.out.print(a[i][j] + " ");
            System.out.print("\n");
        }
    }

    static double[][] addMatrix(double a[][], double b[][])
    {
        double temp[][] = new double[a.length][a[0].length];
        for(int i=0; i<a.length; i++)
            for(int j=0; j<a[0].length; j++)
                temp[i][j] = a[i][j] + b[i][j];
        return temp;
    }

    static double[][] mulMatrix(double a[][], double b[][])
    {
        double temp[][] = new double[a.length][a[0].length];
        initMatrix(temp);
        for(int i=0; i<a.length; i++)
            for(int j=0; j<a.length; j++)
                for(int k=0; k<a.length; k++)
                    temp[i][j] += a[i][k]*b[k][j];
        return temp;
    }
}
