#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t-->0)
	{   int n,k,f=0;
	    scanf("%d %d",&n,&k);
	    long long int a[n];
	    for(int i=0;i<n;i++){
	        scanf("%lld",&a[i]);
	    }
	    long long int i=0,ans;
	    for( i=0;i<n-1;i++){
	        if(a[i]<k){
	            ans=i+1; 
	            f=1; break;
	        }
	        a[i+1]+=(a[i]-k);
	    }
	    if(f==0){
	        ans=a[n-1]/k;
	        ans+=n;
	        printf("%lld\n",ans);
	    }
	    if(f==1) printf("%lld\n",ans);
	}
	return 0;
}

