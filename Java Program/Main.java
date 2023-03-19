import java.lang.*;
import java.util.*;
class Number{
    void area(){};
    void perimenter(){};}
class square extends Number{
    double s;
    void getinfo(){
        System.out.println("Enter Square Side:");
        Scanner sc=new Scanner(System.in);
        s=sc.nextDouble();}
    void area(){
        Double a=s*s;
        System.out.println("Area of Square:");
        System.out.println(a);}}
class circle extends Number{
    double r;
    void getinfo(){
        System.out.println("Enter Radius of circle:");
        Scanner sc=new Scanner(System.in);
        r=sc.nextDouble();}
    void area(){
        Double a=3.14*(r*r);
        System.out.println("Area of Circle:");
        System.out.println(a);}}
class rectangle extends Number{
    double length,breadth;
    void getinfo(){
        System.out.println("Enter Length and Breadth of Rectangle:");
        Scanner sc=new Scanner(System.in);
        length=sc.nextDouble();
        breadth=sc.nextDouble();}
    void area(){
        Double a=length*breadth;
        System.out.println("Area of Rectangle:");
        System.out.println(a);}}
class dNumber extends Number{
    void volume(){};}
class cube extends dNumber{
    double side;
    void getinfo(){
        System.out.println("Enter Side of Cube:");
        Scanner sc=new Scanner(System.in);
        side=sc.nextDouble();}
    void volume(){
        Double vol=side*side*side;
        System.out.println("Volume of Cube:");
        System.out.println(vol);}}
class cuboid extends dNumber{
    double l,b,h;
    void getinfo(){
        System.out.println("Enter Length,Breadth and Height of Cuboid:");
        Scanner sc=new Scanner(System.in);
        l=sc.nextDouble();
        b=sc.nextDouble();
        h=sc.nextDouble();}
    void volume(){
        Double vol=h*b*l;
        System.out.println("Volume of Cuboid:");
        System.out.println(vol);}}
class sphere extends dNumber{
    double r;
    void getinfo(){
        System.out.println("Enter Radius of Sphere:");
        Scanner sc=new Scanner(System.in);
        r=sc.nextDouble();}
    void volume(){
        Double vol=4.19*(r*r*r);
        System.out.println("Volume of Sphere:");
        System.out.println(vol);}}
class Main{
	public static void main(String[] args){
		System.out.println("Hello World");
		square s=new square();
		s.getinfo();
		s.area();
		rectangle r=new rectangle();
		r.getinfo();
		r.area();
		circle c=new circle();
		c.getinfo();
		c.area();
		cube cc=new cube();
		cc.getinfo();
		cc.volume();
		sphere ss=new sphere();
	    ss.getinfo();
		ss.volume();
		cuboid ccc=new cuboid();
		ccc.getinfo();
		ccc.volume();}}





