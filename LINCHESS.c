#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t-->0)
	{   int n,k;
	    scanf("%d %d",&n,&k);
	    int p[n];
	    for(int i=0;i<n;i++)
	        scanf("%d",&p[i]);
	    int a=-1,d=0,m=-1;
	    for(int i=0;i<n;i++){
	        if(k%p[i]==0){
	            d=k/p[i]; d--;
	            if(d<m|| m==-1) {m=d;a=p[i];}
	        }
	    }
	    if(m==-1) printf("-1\n");
	    else printf("%d\n",a);
	}
	return 0;
}

