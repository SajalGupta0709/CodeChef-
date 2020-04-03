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
		    int f=0,n=s.length();
		    int a[]=new int[26];
		    int b[]=new int[26];
		    for(int i=0;i<=(n/2)-1;i++)
		        a[s.charAt(i)-'a']++;
		    int i=(n%2==0)? n/2:(n/2)+1;    
		    while(i<n){ 
		        b[s.charAt(i)-'a']++;i++;   }
		    for(i=0;i<26;i++){
		        if(a[i]!=b[i]){f++;break;}
		    }
		    if(f==1) System.out.println("NO");
		    else System.out.println("YES");
		}
		
	}
}
