#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t-->0)
	{   int p,h,f=0;
	    scanf("%d %d",&h,&p);
	    while(p>0){
	        h-=p;
	        if(h<=0) {f=1; break;}
	        p/=2;
	    }
	    if(f==0) printf("0\n");
	    else printf("1\n");
	}
	return 0;
}

