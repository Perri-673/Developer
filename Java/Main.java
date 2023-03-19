/*import java.lang.*;
class Test2{
	public static void main(String args[ ]){
		char char1 ;
		char1 = 'R';
		System.out.println("char1 contains " + char1 ); 
		char1++;
		System.out.println("char1 is now " + char1 ); }}*/

import java.lang.*;
import java.util.*;
public class Main{
	public static void main(String[] args) {
		System.out.println("Hello World");
		System.out.println("Enter the Opertation to be Done:");
		System.out.println("1.Square:");
		System.out.println("2.Square Root:");
		System.out.println("3.Cube:");
		Scanner obj=new Scanner(System.in);
		int n;
		n=obj.nextInt();
		System.out.println("Enter The Number:");
		int n1=obj.nextInt();
		switch(n){
		    case(1):
		        System.out.println(Math.pow(n1,2));
		        break;
		    case(2):
		        System.out.println(Math.pow(n1,0.5));
		        break;
		    case(3):
		        System.out.println(Math.pow(n1,3));
		        break;}}}