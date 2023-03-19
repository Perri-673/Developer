import java.lang.*;
import java.util.*;
public class hailstone
{
	public static void main(String[] args) {
		int n;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		while(n>1){
		if(n%2==0){
		    n=n/2;
		    System.out.print(n+"\t");}
		else{
		    n=(n*3)+1;
		    System.out.print(n+"\t");}}}}