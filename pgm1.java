import java.util.*;
class area
	{
		double radius;
		double perimeter;
		double area;
		public void read()
			{
				Scanner sc=new Scanner(System.in);
				System.out.print("enter the radius");
				radius=sc.nextDouble();
				sc.close();
			}
		public double area()
			{
				area=Math.PI*radius*radius;
				return area;
			}
		public double perimeter()
			{
				perimeter=2*Math.PI*radius;
				return perimeter;
			}
	}
class demo
	{
		public static void main(String args[])
			{
				area obj=new area();
				obj.read();
				System.out.println("the area is"+obj.area());
				System.out.println("the perimeter is"+obj.perimeter());
			}
	} 
