#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t-->0)
	{   int n;
	    scanf("%d",&n);
	    if(n==1) printf("1\n");
	    else if((n&(n-1))==0) {printf("-1\n"); continue;} 
	    else printf("2 3 1 ");
	    int i=4;
	    while(i<=n){
	        if((i&(i-1))==0){
	            printf("%d %d ",i+1 ,i);
	            i+=2;}
	        else printf("%d ",i++);    
	    }
	    printf("\n");
	}
	return 0;
}

