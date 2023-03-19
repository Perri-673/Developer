import java.util.*;
import java.io.*;
import java.io.Serializable;
import java.text.SimpleDateFormat;  
import java.text.ParseException; 
class Donor implements java.io.Serializable{  
    public String name;
    public int age;
    public String address;
    public String number;
    public String bg;
    public String date2;
    public Donor(String name,int age,String address,String number,String bg,String date2){
        this.name=name;
        this.age=age;
        this.address=address;
        this.number=number;
        this.bg=bg;
        this.date2=date2;}}
class Serial{
    public static void main(String[] args) throws ParseException{
        Donor obj[]=new Donor[100];
        Scanner o=new Scanner(System.in).useDelimiter("\n");
        System.out.println("Enter Number of Details That Should be stored in Database:");
        int n=o.nextInt();
        try{
            String name;
            int age;
            String address;
            String number;
            String bg;
            String date2;
            for(int i=0;i<n;i++){
                System.out.println("Donor "+(i+1)+" Details:");
                System.out.println("Donor Name:");
                name=o.next();
                System.out.println("Donar Age:");
                age=o.nextInt();
                System.out.println("Donar Address:");
                address=o.next();
                System.out.println("Donar Contact Number:");
                number=o.next();
                System.out.println("Donar Blood Group:");
                bg=o.next();
                System.out.println("Donar date of last donation(DD/MM/YYYY):");
                date2=o.next();
                obj[i]=new Donor(name,age,address,number,bg,date2);}
            FileOutputStream fout=new FileOutputStream("file.txt");    
            ObjectOutputStream out=new ObjectOutputStream(fout);
            for(int i=0;i<n;i++){
                out.writeObject(obj[i]);}
            out.flush();    
            out.close();    
            System.out.println("success");}
        catch(Exception e){
            System.out.println(e);}
        try{    
            System.out.println("Donor Details Who have blood Group A+ve and are eligible:");
            ObjectInputStream in=new ObjectInputStream(new FileInputStream("file.txt"));
            SimpleDateFormat formatter = new SimpleDateFormat("dd/MM/yyyy");  
            for(int i=0;i<n;i++){
                obj[i] = (Donor)in.readObject();
                Date date3 = formatter.parse(obj[i].date2);
                //Date date = new Date();  
                Calendar calendar = Calendar.getInstance();
                calendar.add(Calendar.MONTH, -6);
                Date date1=calendar.getTime();
                if(obj[i].bg.equals("A+ve") && date1.compareTo(date3)>0){
                    System.out.println("Name:");
                    System.out.println(obj[i].name);
                    System.out.println("Age:");
                    System.out.println(obj[i].age);
                    System.out.println("Address:");
                    System.out.println(obj[i].address);
                    System.out.println("Number:");
                    System.out.println(obj[i].number);
                    System.out.println("Blood Group:");
                    System.out.println(obj[i].bg);
                    System.out.println("Last Date of Donation:");
                    System.out.println(obj[i].date2);
                    System.out.println("**************************");}} 
            in.close();} 
        catch(IOException ex){ 
            System.out.println("IOException is caught");} 
        catch(ClassNotFoundException ex) { 
            System.out.println("ClassNotFoundException is caught");}}}