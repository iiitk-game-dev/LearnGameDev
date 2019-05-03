import java.util.*;
class digits
	{
		int num;
		public int pro(int num)
			{
				int p=1;
				int n=num;
				while(n>0)
					{
						p*=n%10;
						n/=10;
					}
				return p;
			}
	}
class demo
	{
		public static void main(String args[])
			{
				int n;
				digits obj=new digits();
				Scanner sc=new Scanner(System.in);
				System.out.println("enter the number");
				n=sc.nextInt();
				sc.close();
				System.out.println("productsof the digits"+obj.pro(n));
			}
	}

