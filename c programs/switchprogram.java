import java.util.*;
public class switchprogram{
    public static void main(String[] args) {
     Scanner scan = new Scanner (System.in);
        System.out.println("Enter the value of case:");
        int number = scan.nextInt();
         System.out.println("Enter first number:");
        int a = scan.nextInt();
        System.out.println("Enter second number:");
        int b = scan.nextInt();
        int num1;
        switch(number){
            case 1:  num1= a+b;
                     System.out.println("sum of two number is:"+num1);
                    break;
           case 2:  num1= a-b;
                     System.out.println("subtract of two number is:"+num1);
                    break; 
           case 3:  num1= a*b;
                     System.out.println("multiply of two number is:"+num1);
                    break;
            case 4:  num1= a/b;
                     System.out.println("Divid of two number is:"+num1);
                    break; 
            case 5:  num1= a%b;
                     System.out.println("sum of two number is:"+num1);
                    break;
            default: 
                     System.out.println("invalid case");
                    break;        
        }
}
}
    

