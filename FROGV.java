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
		int k=sc.nextInt();
		int p=sc.nextInt();
		int f[]=new int[n];
		int s[]=new int[n];
		for(int i=0;i<n;i++){
		    f[i]=sc.nextInt();
		    s[i]=f[i];
		}
		int c=1;
		Arrays.sort(s);
		int ans[]=new int[n];
		ans[0]=1;
		for(int i=1;i<n;i++){
		    if(Math.abs(s[i-1]-s[i])<=k)
                ans[i-1]=ans[i]=c;
            else {c++; ans[i]=c;}    
		}
		while(p-->0){int t,flag=0;
		    int l=sc.nextInt();
			int r=sc.nextInt();
			if(n==1){System.out.println("Yes"); continue;}
            l=f[l-1];
            r=f[r-1];
            if(l>r){
                t=l;
                l=r;
                r=t;
            }
            l = Arrays.binarySearch(s, l);
            r= Arrays.binarySearch(s,r);
		    
		    if(ans[l]!=ans[r]) System.out.println("No");
		    else   System.out.println("Yes");
		}
	}
}
