import java.util.Scanner;

class program28
{
    public static void main(String A[]) 
    {
        Scanner scanner = null ;

        scanner = new Scanner(System.in);
        String sName = null ;
        int iAge = 0;
        float fMarks = 0.0f;            


        System.out.println("Enter your Name : ");
        sName = scanner.next();                             // Exception

        System.out.println("Enter your Age : ");
        iAge = scanner.nextInt();

        System.out.println("Enter your Marks : ");
        fMarks = scanner.nextFloat();
        

        System.out.println("Welcome " + sName);
        System.out.println("Your Age : " + iAge);
        System.out.println("Your Marks are : " + fMarks);
    }
}
