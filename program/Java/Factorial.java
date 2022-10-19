//importing Scanner class  
import java.util.Scanner;  
  
public class FactorialUsingWhileLoop {  
    public static void main(String[] args) {  
          
        //declaring and intializing variables   
        int fact = 1;  
        int i = 1;  
  
        //creating object of Scanner class  
        Scanner sc = new Scanner(System.in);  
  
        //accepting a number from the user  
        System.out.println("Enter a number whose factorial is to be found: ");  
        int num = sc.nextInt();  
          
        //counting the factorial using while loop  
        while( i <= num ){  
            fact = fact * i;   
            i++; //increment i by 1   
        }     
  
        //printing the result  
        System.out.println("\nFactorial of " + num + " is: " + fact);  
    }  
} 
