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
		{   int m=0;
		    int n=sc.nextInt();
		    while(n-->0){
		        int s,v,p;
		        s=sc.nextInt();
		        p=sc.nextInt();
		        v=sc.nextInt();
		        int c=(int)Math.floor(p/(s+1))*v;
		        m=(int)Math.max(m,c);
		        
		    }
		        System.out.println(m);
		}
	}
}
