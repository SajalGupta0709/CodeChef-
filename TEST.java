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
		Scanner sc=new Scanner(System.in);int f=0;
		while(sc.hasNext()){
		int t=sc.nextInt();
		
		if(t==42) f=1;
		if(f==0) System.out.println(t);
		}
	}
}
