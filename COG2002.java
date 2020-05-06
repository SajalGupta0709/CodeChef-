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
		    int n=sc.nextInt();
		    long a[]=new long[n];
		    for(int i=0;i<n;i++)
		        a[i]=sc.nextLong();
		    long s=0;
		    for(int i=0;i<n;i++){
		        long s1=a[i]+a[(i+1)%n]+a[(i+2)%n];
		        if(s<s1) s=s1;
		    }
		
		    System.out.println(s);
		}
		
	}
}
