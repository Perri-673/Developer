import java.lang.*;
import java.util.*;
interface IncomeTax{
    int baseamt=50000;
    float computeTax(float n1,float n2);
    boolean checkEligibility(float n);}
public class Tax_payee implements IncomeTax{
    String name;
    float income_amt;
    int tax_percent;
    float Taxamt;
    static Tax_payee obj[]=new Tax_payee[100];
    void input(){
        Scanner o=new Scanner(System.in);
        System.out.println("Enter Name:");
        name=o.next();
        System.out.println("Enter the income_amt:");
        income_amt=o.nextFloat();
        System.out.println("Enter the tax_percent:");
        tax_percent=o.nextInt();}
    public boolean checkEligibility(float n){
        if(n>baseamt)
            return true;
        else
            return false;}
    public float computeTax(float n1,float n2){
        Taxamt=(n1-baseamt)*n2/100;
        return Taxamt;}
    public static void main(String args[]){
        Scanner o=new Scanner(System.in);
        int n;
        System.out.println("Enter the Number of Customers that should be stored in database:");
        n=o.nextInt();
        for(int i=0;i<n;i++){
            obj[i]=new Tax_payee();
            System.out.println("Enter Customer "+(i+1)+" Details");
            obj[i].input();}
        for(int i=0;i<n;i++){
            if(obj[i].checkEligibility(obj[i].income_amt)){
                System.out.println("Eligibile Customer Name:"+obj[i].name);
                System.out.println("Tax Amount:"+obj[i].computeTax(obj[i].income_amt,obj[i].tax_percent));}}}}