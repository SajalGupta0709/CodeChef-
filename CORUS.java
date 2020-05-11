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
		    int q=sc.nextInt();
		    String s=sc.next();
		    int f[]=new int[26];
		    for(int i=0;i<26;++i)
		        f[i]=0;
		    for(int i=0;i<n;i++)    {
		       int ch=s.charAt(i)-'a';
		       f[ch]++;
		    }
		    while(q-->0){
		        int p=0,c=sc.nextInt();
		        for(int i=0;i<26;i++)
		            if(f[i]>c) p+=f[i]-c;
		        System.out.println(p);
		    }
		}
		
	}
}
