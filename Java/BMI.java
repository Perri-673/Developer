import java.lang.*;
import java.util.*;
public class BMI
{public static void main(String[] args) {
		String a=args[0];
		String b=args[1];
		int c=Integer.parseInt(args[2]);
		int d=Integer.parseInt(args[3]);
		double m=c;
		double e=Math.pow(d,2);
		double B=m/e;
		System.out.println(a+" "+b);
		if(B<18.5)
		    System.out.println("Underweight");
		else if(B>=18.5 && B<25)
		    System.out.println("Normal(healthy weight");
		else if(B>=25 && B<30)
		    System.out.println("OverWeight");
		else 
		    System.out.println("Obeseweight");
		    
	}
}