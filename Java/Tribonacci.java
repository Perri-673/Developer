import java.lang.*;
import java.util.*;
public class Tribonacci{
    public static int t(int n){
        if (n==1){
            //System.out.println("1");
            return 1;}
        else if(n==2 || n==3){
            //System.out.println("1");
            return 1;}
        else{
            //System.out.println(t(n-1)+t(n-2)+t(n-3));
            return t(n-1)+t(n-2)+t(n-3);}}
    public static void main(String[] args){
		Scanner obj=new Scanner(System.in);
		int a=obj.nextInt();
		for(int i=1;i<=a;i++){
		    System.out.println(t(i));}}}
