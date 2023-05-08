import javax.swing.*;
import java.sql.SQLOutput;
import java.util.Scanner;

public class Temprature {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System.out.print("C->F[0]/F->C[1]: ");
        int user_input = input.nextInt();
        System.out.print("Enter Temperature: ");
        int temp = input.nextInt();

        if (user_input==0) {
            float result = ((temp)*9/5)+32;
            System.out.println("It is " + result + " Fahrenheit.");
        }
        else if (user_input==1) {
            float result = (temp-32)*5/9;
            System.out.println("It is " + result + " Celsius.");
        }
    }

}
