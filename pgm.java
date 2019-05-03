class volume
	{
		int h;
		int l;
		int b;
	}
class demobox
	{
		public static void main(String args[])
			{
				volume obj=new volume();
				double vol;
				obj.h=10;
				obj.l=20;
				obj.b=30;
				vol=obj.h*obj.l*obj.b;
				System.out.println("volume="+vol);
			}
	}
