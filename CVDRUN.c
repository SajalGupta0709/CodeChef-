#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t-->0)
	{   int n,k,x,y,f=0;
	    scanf("%d %d %d %d",&n,&k,&x,&y);
	    if(x==y){
	        printf("YES\n");
	        return 0;
	    }
	    for(int i=1;i<=n;i++){
	        if((x+k*i)%n==y)    
	            {f=1; break;}
	    }
	    if(f==0) printf("NO\n");
	    else printf("YES\n");
	}
	return 0;
}

