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
		    String s=sc.next();
		    int a=0,l=0,f=0;
		    if(s.charAt(0)=='>'){System.out.println("0"); continue;}
		    else a++;
		    for(int i=1;i<s.length();i++){
		       char ch=s.charAt(i);
		       if(a>0&&ch=='>') a--;
		       else if(ch=='<') a++;
		       else {f=1;System.out.println(l);break;}
		       if(a==0) l=i+1;
		    }
		    if(f==0)System.out.println(l);
		}
		
	}
}
