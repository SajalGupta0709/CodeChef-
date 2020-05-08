import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		int[] arr = new int[60];
		arr[0]=0;
		arr[1]=1;
		for(int i=2;i<60;i++)
		{
		    arr[i]=(arr[i-1]+arr[i-2])%10;
		}
		int t = Integer.parseInt(reader.readLine());
		while(t>0)
		{
		    long msb=0;
		    long n = Long.parseLong(reader.readLine());
		    while(n>1)
		    {
		        n=(long)(n/2);
		        ++msb;
		    }
		    long index = ((long)Math.pow(2,msb)%60)-1;
		    System.out.println(arr[(int)index]);
		    t--;
		}
	}
}
