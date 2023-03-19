import java.lang.*;
import java.util.*;
public class NumberGuess
{public static void main(String[] args) {
		System.out.println("Hello World");
		Random Obj=new Random();
		int n=Obj.nextInt(100);
		if(n>=80)
		    System.out.println("Too higher");
		else if(n<80 && n>=50)
		    System.out.println("Congratulations! You got it..");
		else
		    System.out.println("Too lower");
	}
}