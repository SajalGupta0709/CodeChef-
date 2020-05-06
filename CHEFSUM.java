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
		{   long s=0;
		    int n=sc.nextInt();
		    int a[]=new int[n];
		    for(int i=0;i<n;i++){
		        a[i]=sc.nextInt();
		        s+=a[i];
		    }
		    long r=1,m=s+a[0];
		    for(int i=1;i<n;i++){
		        long s1=a[i]+s;
		        if(m>s1){r=i+1; m=s1;}
		    }
		
		    System.out.println(r);
		}
		
	}
}
