import java.util.Scanner;

class program23
{
    public static void main(String A[]) 
    {
        Scanner scanner = null ;

        scanner = new Scanner(System.in);
        String sName = null ;

        System.out.println("Enter your Name : ");
        sName = scanner.nextLine();
        

        System.out.println("Welcome " + sName);
    }
}
