import java.io.*;
import java.io.IOException;  
public class Q4{
    public static void main(String[] args) throws Exception{
        try{
            File file=new File("sample.txt");
            FileWriter file1=new FileWriter("oneletter.txt");
            FileWriter file2=new FileWriter("twoletter.txt");
            FileWriter file3=new FileWriter("threeletter.txt");
            BufferedReader br=new BufferedReader(new FileReader(file));
            String st;
            while((st=br.readLine())!=null){
                String[] arr=st.split(" ");    
                for(String ss:arr){
                    int len=ss.length();
                    if(len==1){
		                file1.write(ss+" ");}
                    else if(len==2){
		                file2.write(ss+" ");}
                    else if(len==3){
                        file3.write(ss+" ");}}}
            file1.close();
            file2.close();
            file3.close();}
        catch(IOException e){
            System.out.print(e.getMessage());}}}