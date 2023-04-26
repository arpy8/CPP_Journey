import java.util.Scanner;

public class IfElse {
    public static void main(String[] args) {
        System.out.print("Enter your salary: ");

        Scanner input = new Scanner(System.in);
        int salary = input.nextInt();
        int bonus = 0;
        System.out.println("Salary : " + salary);

        if (salary>10000){
            bonus = 2000;

        }
        else if (salary>20000){
            bonus = 3000;

        }
        else {
            bonus = 1000;
        }
        System.out.println("Bonus : " + bonus);
        System.out.println("Total : " + (salary+bonus));
    }
}