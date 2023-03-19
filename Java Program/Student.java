import java.lang.*;
import java.util.*;
class Student{
    String Grade;
    int Regno;
    String Name;
    String Branch;
    int Year;
    int Semster;
    float Mark_1;
    float Mark_2;
    float Mark_3;
    float Mark_4;
    float Mark_5;
    void input(){
        Scanner o=new Scanner(System.in);
        System.out.println("Enter Reg No:");
        Regno=o.nextInt();
        System.out.println("Enter Name:");
        Name=o.next();
        System.out.println("Enter Branch:");
        Branch=o.next();
        System.out.println("Enter Year:");
        Year=o.nextInt();
        System.out.println("Enter Semster:");
        Semster=o.nextInt();
        System.out.println("Mark 1:");
        Mark_1=o.nextFloat();
        System.out.println("Mark 2:");
        Mark_2=o.nextFloat();
        System.out.println("Mark 3:");
        Mark_3=o.nextFloat();
        System.out.println("Mark 4:");
        Mark_4=o.nextFloat();
        System.out.println("Mark 5:");
        Mark_5=o.nextFloat();}
    void output(){
        System.out.println("************************");
        System.out.println("Reg No:"+Regno);
        System.out.println("Name:"+Name);
        System.out.println("Branch:"+Branch);
        System.out.println("Year:"+Year);
        System.out.println("Semster:"+Semster);
        System.out.println("Mark 1:"+Mark_1);
        System.out.println("Mark 2:"+Mark_2);
        System.out.println("Mark 3:"+Mark_3);
        System.out.println("Mark 4:"+Mark_4);
        System.out.println("Mark 5:"+Mark_5);
        System.out.println("Grade:"+Grade);
        System.out.println("************************");}
    void mark(){
        float avg;float sum;
        sum=Mark_1+Mark_2+Mark_3+Mark_4+Mark_5;
        avg=(Mark_1+Mark_2+Mark_3+Mark_4+Mark_5)/5;
        if(avg>=90)
            Grade="S";
        else if(avg<90 && avg>=80)
            Grade="A";
        else if(avg<80 && avg>=70)
            Grade="B";
        else if(avg<70 && avg>=60)
            Grade="C";
        else if(avg<60 && avg>=50)
            Grade="D";
        else if(avg<50 && avg>=40)
            Grade="E";
        else {
            Grade="F";}}
    void search(String n){
        if(n.equals(Name)){
            output();}
        else{
            System.out.println("Student Name Not Found.");}}
    void fy(){
        if(Year==4){
            output();}}
    static int j=0;
    static int arr[]=new int[100];
    void less(int no){
        String st[];
        float avg=(Mark_1+Mark_2+Mark_3+Mark_4+Mark_5)/5;
        if((avg<40)){
            arr[j]=no;
            j++;}}
    static Student obj[]=new Student[100];
    public static void main(String args[]){
        int n;
        String d[];
        System.out.println("Enter Number of Students:");
        Scanner o=new Scanner(System.in);
        n=o.nextInt();
        for(int i=0;i<n;i++){
            obj[i]=new Student(); 
            obj[i].input();}
        for(int i=0;i<n;i++){
            obj[i].mark();
            System.out.println("Student "+i+1+" Details:");
            obj[i].output();}
        System.out.println("Enter Student Name to Search:");
        String s;
        s=o.next();
        for(int i=0;i<n;i++){
            obj[i].search(s);}
        System.out.println("Final Year Students Details:");
        for(int i=0;i<n;i++){
            obj[i].fy();}
        for(int i=0;i<n;i++){
            obj[i].less(i);}
        for(int i=0;i<j;i++){
            System.out.println("Student Details who scored less than 40%:");
            obj[arr[i]].output();}}}

