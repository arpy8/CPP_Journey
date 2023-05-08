import java.util.Scanner;

public class Loops {
    public static void main(String[] args) {
        System.out.print("Enter a digit: ");
        Scanner input = new Scanner(System.in);
        int digit = input.nextInt();
        /*
        Syntax of for loops
                for (initialization;condition;increment/decrement) {}
        */
        for (int num = 1; num <= digit; num++){
            System.out.println(num);
        }

        /*
        Syntax of while loops
                initialization;
                while (condition) {
                ->body of code
                increment/decrement}
        */
        int a = 1;
        while (a<=digit) {
            System.out.println(a);
            a++;
        }

        /*
        Syntax of do while loop

        do {
            -> body
        } while (condition);
        */
        int n = 1;
        do {
            System.out.println(n);
            n++;
        } while (n <= 5);

    }
}
