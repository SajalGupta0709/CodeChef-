#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t-->0)
	{   int r,c;
	    scanf("%d %d",&c,&r);\
	    int cc=c/9,rc=r/9;
	    if(c%9!=0) cc++;
	    if(r%9!=0) rc++;
	    if(cc<rc) printf("0 %d\n",cc);
	    else printf("1 %d\n",rc);
	}
	return 0;
}

