import java.lang.*;
import java.util.*;
interface data{
    public int  prime(int n);}
class armstrong implements data{
    public int prime(int n){   
        int b=0;
        if(n==2)
            b=1;
        else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                    b=0;
			        break;}
            else{
                    b=1;}}}
		if(b==1){
            return 1;}
        else{
            return 0;}}
    int armstrong(int n){
        int a=n;
        int d=n;
        int sum=0;
        int count=0;
        while(d>0){
            d=d/10;
            count=count+1;}
        //System.out.println(count);
        while(n>0){
            int b=1;
            int l=n%10;
            for(int i=0;i<count;i++){
                    b=b*l;}
            sum=sum+b;
            n=n/10;}
        if(a==sum){
            //System.out.println(a);
            return 1;}
        else
            return 0;}
    void fun(){
        for(int i=1;i<=2000;i++){
            if(armstrong(i)==1)
                System.out.println(i);
            if(armstrong(i)==1){
                if(prime(i)==1){
                    //System.out.println(i);
                }
            }
        }
    }
}
class aa
{
	public static void main(String args[]) {
		System.out.println("Hello World");
		armstrong o=new armstrong();
		o.fun();
	}
}