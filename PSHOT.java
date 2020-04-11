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
		    int n=sc.nextInt(),a=0,b=0,gd=0,f=0;
		    String s=sc.next();
		    for(int i=0;i<s.length();i+=1){ 
		        char ch=s.charAt(i);
		        if(i%2==0)
		          a+=(int)ch-48;
		        else
		            b+=(int)ch-48;
		        if(a-b>(Math.ceil(((double)(s.length()-i-1)/2))))
		            {f=1;System.out.println(++i);break;}
		        else if(b-a>(((double)(s.length()-i-1)/2)))
		            {f=1;System.out.println(++i);break;}
		}
		if(f==0) System.out.println(2*n);
	}
}
}