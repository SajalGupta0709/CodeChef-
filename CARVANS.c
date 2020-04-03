#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t-->0)
	{   int n;
	    scanf("%d",&n);
	     long long int c,r=1,a[n];
	    for(int i=0;i<n;i++)
	        scanf("%lld",&a[i]);
	    long long int m=a[0];
	    for(int i=1;i<n;i++)    {c=a[i-1];
	          if(c>a[i]&& a[i]<=m) r++;
	          if(a[i]<m) m=a[i];
	    }
	    printf("%lld\n",r);
	}
	return 0;
}

