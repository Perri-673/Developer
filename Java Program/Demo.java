import java.lang.*;
import java.util.*;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
class BookNotFoundException extends Exception{
    BookNotFoundException(String s){
        super(s);}}
class OutOfStockException extends Exception{
    OutOfStockException(String s){
        super(s);}}
class librarian{
    String name;
    String author;
    int price;
    int noc;
    void input(){
        Scanner o=new Scanner(System.in);
        System.out.println("Enter Name of Book:");
        name=o.next();
        System.out.println("Enter Author of Book:");
        author=o.next();
        System.out.println("Enter Price of Book:");
        price=o.nextInt();
        System.out.println("Enter Number of copies of Book:");
        noc=o.nextInt();}}
class sortbook implements Comparator<librarian>{
    public int compare(librarian s1, librarian s2){
        return (s1.name.compareTo(s2.name));}}
class sortbook1 implements Comparator<librarian>{
    public int compare(librarian s1, librarian s2){
        if(s1.price>s2.price)
            return 1;
        else if(s1.price==s2.price)
            return 0;
        else
            return -1;}}
class Demo extends librarian{
    static void search(LinkedList<librarian > ll){
        Scanner o=new Scanner(System.in);
        String n;
        System.out.println("Enter the name of the book that should be searched:");
        n=o.next();
        int b1=0;
        for (int i = 0;i<ll.size();i++){
            if(ll.get(i).name.equals(n)){
                System.out.println("Found!!!");
                b1=1;}}
            try{
                if(b1==0){
                    throw new BookNotFoundException("Book Not Found");}}
            catch(BookNotFoundException z){
                System.out.println("Exception:"+z);}}
    static void check(LinkedList<librarian > ll){
        Scanner o=new Scanner(System.in);
        String n;
        System.out.println("Enter the name of the book that should be checked for stock availability:");
        n=o.next();
        for(int i = 0;i<ll.size();i++){
            try{
                if(ll.get(i).name.equals(n)){
                    if(ll.get(i).noc!=0){
                    System.out.println("Stock Available!!!");}
                else{
                    throw new OutOfStockException("Stock Not Available");}}}
            catch(OutOfStockException z){
                System.out.println("Exception:"+z);}}}
    public static void main(String[] args){
        LinkedList<librarian > ll=new LinkedList<librarian>();
        librarian obj[]=new librarian[100];
        int n;
        Scanner o=new Scanner(System.in);
        System.out.println("Enter the Number of books data that should be stored:");
        n=o.nextInt();
        for(int i=0;i<n;i++){
            System.out.println("Enter Book "+(i+1)+" Details:");
            obj[i]=new librarian();
            obj[i].input();
            ll.add(obj[i]);}
        int boo=1;
        int n1;
        while(boo==1){
		    System.out.println("Enter your choice:");
		    System.out.println("Press 1 to search the book:");
		    System.out.println("Press 2 to check availability:");
		    System.out.println("Press 3 to sort:");
		    System.out.println("Press 4 to exit: ");
		    n1=o.nextInt();
		    if(n1==1){
		        search(ll);}
		    else if(n1==2){
		        check(ll);}
		    else if(n1==3){
		        int a;
		        System.out.println("Press 1:To sort using Name\nPress 2: to sort using price");
		        a=o.nextInt();
		        if(a==1){
		            Collections.sort(ll,new sortbook());
		            System.out.println("Sorted using name:");
		            for (int i = 0;i<ll.size();i++){
            			System.out.print(ll.get(i).name+" ");}}
		        else{
		            Collections.sort(ll,new sortbook1());
		            System.out.println("Sorted using price:");
		            for (int i = 0;i<ll.size();i++){
            			System.out.print(ll.get(i).price+" ");}}}
		    else{
                boo=0;}}}}