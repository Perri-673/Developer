import java.lang.*;
import java.util.*;
class Telephone{
    static TelephoneIndex obj[]=new TelephoneIndex[100];
    String name;
    long pn;
    Telephone(){
        name=" ";
        pn=0000000000;}
    void input(){
        Scanner obj=new Scanner(System.in);
        System.out.println("Enter Name:");
        name=obj.next();
        System.out.println("Enter Phone Number:");
        pn=obj.nextLong();}
    void display(){
        System.out.println("Customer Details:");
        System.out.println(name);
        System.out.println(pn);}
    public static void main(String[] args){
        Scanner o=new Scanner(System.in);
        System.out.print("Enter Number of Customer that should be stored in data base:");
        int n;
        n=o.nextInt();
		for(int i=0;i<n;i++){
		    System.out.println("Enter "+(i+1)+" Customer Details:");
		    obj[i]=new TelephoneIndex();
		    obj[i].input();}
		int boo=1;
		int n1;
		while(boo==1){
		    System.out.println("Enter your choice:");
		    System.out.println("Press 1 to change Number:");
		    System.out.println("Press 2 to change Name:");
		    System.out.println("Press 3 to search customer details with same name:");
		    System.out.println("Press 4 to see if name is present in data base or not: ");
		    System.out.println("Press 5 to display the data base: ");
		    System.out.println("Press 6 to exit: ");
		    n1=o.nextInt();
		    if(n1==1)
		        obj[0].changenumber(n);
		    else if(n1==2)
		        obj[0].changename(n);
		    else if(n1==3)
		        obj[0].displaynames(n);
		    else if(n1==4)
		        obj[0].searchname(n);
		    else if(n1==5){
		        for(int i=0;i<n;i++)
                obj[i].display();}
            else
                boo=0;}}}
class TelephoneIndex extends Telephone{
    void changenumber(int n){
        Scanner o=new Scanner(System.in);
        System.out.print("Enter old phone no.: ");
		long old=o.nextLong();
        int b=0;
        for(int i=0;i<n;i++){
            if(obj[i].pn==old){
                System.out.println("Enter the New Phone Number");
                long newpn=o.nextLong();
                obj[i].pn=newpn;
                b=1;
                break;}}
        if(b==0)
            System.out.println("Phone Number Not Found");}
    void displaynames(int n){
        Scanner o=new Scanner(System.in);
        String s;
        int b=0;
        System.out.println("Enter the name to be searched:");
        s=o.next();
        for(int i=0;i<n;i++){
            if(obj[i].name.equals(s)){
                System.out.println("The Customer Details Who Have Same Name:");
                System.out.println(obj[i].name);
                System.out.println(obj[i].pn);
                b=1;}}
        if(b==0){
                System.out.println("Customer Name Not found.");}}
    void searchname(int n){
        Scanner o=new Scanner(System.in);
        String s;
        int b=0;
        System.out.println("Enter the name to be searched or first few charcter of the name to be searched:");
        s=o.next();
        for(int i=0;i<n;i++){
            
            if(obj[i].name.contains(s)){
                System.out.println("The Customer Details Who Have Same Name or first few charcter of the name:");
                System.out.println(obj[i].name);
                b=1;}}
        if(b==0)
            System.out.println("Customer Name Not found.");}
    void changename(int n){
        Scanner o=new Scanner(System.in);
        System.out.print("Enter old name: ");
		String s=o.next();
        int b=0;
        for(int i=0;i<n;i++){
            if(obj[i].name.equals(s)){
                System.out.println("Enter the New Name:");
                String newname=o.next();
                obj[i].name=newname;
                b=1;}}
        if(b==0)
            System.out.println("Phone Number Not Found");}}
