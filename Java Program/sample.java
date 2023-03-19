import java.lang.*;
import java.util.*;
import java.io.*;
class sample{
public static void main(String args[]){
try{
FileOutputStream fout=new FileOutputStream("s.txt");
String str="Hello world";
byte[] b= str.getBytes();       //converts string into bytes  

fout.write(4444);}
catch(Exception e){
System.out.println(e);}}}
