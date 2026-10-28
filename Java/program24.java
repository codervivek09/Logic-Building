import java.util.Scanner;

class program24
{
    public static void main(String A[]) 
    {
        Scanner scanner = null ;

        scanner = new Scanner(System.in);
        String sName = null ;

        System.out.println("Enter your Name : ");
        sName = scanner.next();
        

        System.out.println("Welcome " + sName);
    }
}
