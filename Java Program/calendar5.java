/*// Program to demonstrate add() method
// of Calendar class
import java.text.SimpleDateFormat;  

import java.util.*;
public class calendar5 {
	public static void main(String[] args){
	    Scanner o=new Scanner(System.in);
	    String date1;
		// creating calendar object
		
  
        // set Month
        // MONTH starts with 0 i.e. ( 0 - Jan)
        c1.set(Calendar.MONTH, 0);
  
        // set Date
        c1.set(Calendar.DATE, 31);
  
        // set Year
        c1.set(Calendar.YEAR, 2023);
		
		
		System.out.println("\nDonar date of last donation(DD/MM/YYYY):");
                date1=o.next();
		int day=Integer.parseInt(date1.substring(0,2));
        int month=Integer.parseInt(date1.substring(3,5));  
        int year=Integer.parseInt(date1.substring(6,10));
        System.out.println(day);
        System.out.println(month);
        System.out.println(year);
        Calendar calendar = Calendar.getInstance();
        calendar.add(Calendar.MONTH, -6);
        Date date=calendar.getTime();
        //String date= new SimpleDateFormat("dd-MM-yyyy").format(date);


		String pDate= formatter.format(java.time.LocalDate.now());  

		System.out.println("Present Date:"+pdate);
		System.out.println("Before sixmoths:"+date);

		//System.out.println(calendar.getDate());


        
		
	}
}*/



import java.text.SimpleDateFormat;  
import java.util.*;
import java.text.ParseException;  
  
public class calendar5{  
public static void main(String[] args) throws ParseException
{
    Scanner o=new Scanner(System.in);
    String date2;
    SimpleDateFormat formatter = new SimpleDateFormat("dd/MM/yyyy");  

    System.out.println("\nDonar date of last donation(DD/MM/YYYY):");
    date2=o.next();
	int day=Integer.parseInt(date2.substring(0,2));
    int month=Integer.parseInt(date2.substring(3,5));  
    int year=Integer.parseInt(date2.substring(6,10));
    System.out.println(day);
    System.out.println(month);
    System.out.println(year);
    Date date3 = formatter.parse(date2);  
    System.out.println(date3);  

    //-----
    Date date = new Date();  
    String strDate= formatter.format(date);  
    System.out.println(strDate);  
    Calendar calendar = Calendar.getInstance();
    calendar.add(Calendar.MONTH, -6);
    Date date1=calendar.getTime();
    String strDate1= formatter.format(date1);
    System.out.println(strDate1);  


}  
}

