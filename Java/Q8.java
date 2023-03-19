import java.lang.*;
import java.util.*;
public class Q8{
	public static void main(String[] args){
		System.out.println("Hello World");
		int counts=0;
		String s;float f=0;int integer=0;int fn=0;int is=0;
		    int length;int counti=0;int countf;float fs=0;int bf=0;int bi=0;
		while(counts<3){
		    Scanner obj=new Scanner(System.in);
		    s=obj.next();
		    bf=0;bi=0;
		    length=s.length();
		    for(int i=0;i<length;i++){
		        if(s.charAt(i)==46){
		            fn=fn+1;
		            f=Float.parseFloat(s);
		            fs=fs+f;
		            bf=1;
		            break;}}
		    
		    if(bf==0){
		        for(int i=0;i<length;i++){
		            if((s.charAt(i)>=97 && s.charAt(i)<=122)||(s.charAt(i)>=65 && s.charAt(i)<=90)){
		                counts=counts+1;
		                bi=1;
		                break;}}}
		    if(bi==0 && bf==0){
		        counti=counti+1;
		        integer=Integer.parseInt(s);
		        is=is+integer;}}
		    System.out.println(fs);
		    System.out.println(is);}}
