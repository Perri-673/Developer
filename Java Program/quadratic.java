import java.lang.*;
import java.util.*;
import Number.*;
public class quadratic{
    public static void main(String[] args){
        double a,b,c;
        formula o=new formula();
        Scanner obj=new Scanner(System.in);
        System.out.println("Enter a value:");
        a=obj.nextDouble();
        System.out.println("Enter b value:");
        b=obj.nextDouble();
        System.out.println("Enter c value:");
        c=obj.nextDouble();
        double d=o.difference(o.power(b,2),o.product(4,o.product(a,c)));
        double e=o.sqrt(d);
        double f=o.division(o.sum(-b,e),o.product(2,a));
        double g=o.division(o.difference(-b,e),o.product(2,a));
		System.out.println("The 2 roots are:");
		System.out.println(f);
		System.out.println(g);}}