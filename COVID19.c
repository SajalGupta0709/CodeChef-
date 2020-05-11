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
	    int l=0,b=0,c=1;
	    for(int i=1;i<n;i++){
	        if(a[i]-a[i-1]>2){
	            if(l==0 && b==0) l=b=c;
	            else if(c>b) b=c;
	            else if(c<l) l=c;
	            c=1;
	        }
	       else c++;
	    }
	    if(l==0 && b==0) l=b=c;
	    else if(c>b) b=c;
	    else if(c<l) l=c;
	    printf("%d %d\n",l,b);        
	}
	return 0;
}

