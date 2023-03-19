import java.lang.*;
import java.util.*;
public class CS_2_Q2
{
	public static void main(String[] args) {
		System.out.println("Hello World");
		int b;
		Scanner sc=new Scanner(System.in);
		int arr[]=new int[4];
		for(int i=0;i<4;i++){
		    b=sc.nextInt();
		    arr[i]=b;}
		int a[][]=new int[4][];
		int m,n;
		int s=0;
		for(int i=0;i<4;i++){
		    m=arr[i]/4;
		    n=arr[i]%4;
		    if(n==0){
		        s=m;}
		    else{
		        s=m+1;}
		    for(int j=0;j<s;j++){
		        
                    a[i]=new int[s];
		           }}
		for(int i=0;i<4;i++){
		    m=arr[i]/4;
		    n=arr[i]%4;
		    if(n==0){
		        s=m;}
		    else{
		        s=m+1;}
		    for(int j=0;j<s;j++){
		        if(j!=s-1){
                    
		            a[i][j]=4;
		            
		        }
		        else{ 
		            
                    a[i][j]=n;}}}
		//System.out.print(a[0].length);
		for(int i=0;i<4;i++){
		    for(int j=0;j<a[i].length;j++){
		        System.out.print(a[i][j]);}
		    System.out.print("\n");
		}

		
	}
}







