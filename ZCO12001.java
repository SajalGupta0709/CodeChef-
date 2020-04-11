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
		    int n=sc.nextInt();
		   int a[]=new int[n];
		for(int i=0;i<n;i++) {
		    a[i]=sc.nextInt();
		}
	    int l=0,p=1,fi=0,sz=0,lf=0,c=0,pos=0,index=0;
	    for(int i=0;i<n;i++) {
	       c++;
	       if(a[i]==1) {
	           lf++;
	           if(lf==1) {
	               fi=i+1;
	           }
	           if(lf>l) {
	               l=lf;
	               pos=i+1;
	           }
	       } else {
	          lf--;
	          if(lf==0) {
	             if(c>sz) {
	                 sz=c;
	                 index=fi;
	             }
	             c=0;
	          }
	       } 
	    }
	    System.out.println(l+" "+pos+" "+sz+" "+index);
		}
}
