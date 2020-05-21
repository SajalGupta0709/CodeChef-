#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t-->0)
	{   int n;
	    scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++)
	           scanf("%d",&a[i]);
	    long long int c=1,s=0;
	    for(int i=1;i<n;i++){
	        if(a[i]>=a[i-1]) c+=1;
	        else {s+=(c*(c+1))/2;c=1;}
	    }
	    s+=(c*(c+1))/2;
	    printf("%lld\n",s);
	}
	return 0;
}

