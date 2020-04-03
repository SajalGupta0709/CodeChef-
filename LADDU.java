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
		{   int l=0;
		    int a=sc.nextInt();
		    String i=sc.next();
		    while(a-->0){
		        String s=sc.next();
		        if(s.equals("CONTEST_WON")) {int r=sc.nextInt();
		        if(r>20) l+=300;  else l=l+300+20-r;}
		        if(s.equals("TOP_CONTRIBUTOR")) l+=300;
		        if(s.equals("BUG_FOUND")){ int b=sc.nextInt();
		            l+=b;  }
		        if(s.equals("CONTEST_HOSTED")) l+=50;      
		    }
		    if(i.equals("INDIAN")) System.out.println(l/200);
		    else System.out.println(l/400);
		}
		
	}
}
