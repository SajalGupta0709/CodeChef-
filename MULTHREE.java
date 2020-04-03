/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0)
		{
		    long k=sc.nextLong();
		    int d0=sc.nextInt();
		    int d1=sc.nextInt();
		    long s=((d0+d1)%10) +d0+d1;
		    k-=3;
		   int i1=(2*(d0+d1))%10;
		   int i2=(4*(d0+d1))%10;
		   int i3=(8*(d0+d1))%10;
		   int i4=(6*(d0+d1))%10;
		   long n=k/4;
		   s+=n*(i1+i2+i3+i4);
		   n=k%4;
		   if(n==1) s+=i1;
		   if(n==2) s+=i1+i2;
		   if(n==3) s+=i1+i2+i3;
		   if(s%3==0) System.out.println("YES");
		   else System.out.println("NO");
		}
		
	}
}
