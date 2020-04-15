#include <stdio.h>

int main(void) {
	// your code goes here
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n],b[m];
	for(int i=0;i<n;i++)
	    scanf("%d",&a[i]);
	for(int i=0;i<m;i++)
	    scanf("%d",&b[i]);
	int min=0;
            for(int i=1;i<n;i++)
                if(a[i]<a[min])  min=i; 
            int max=0;
            for(int i=1;i<m;i++)
                if(b[i]>b[max])  max=i;
            for(int i=0;i<m;i++)
                printf("%d %d\n",min,i);
            for(int i=0;i<n;i++){
                if(i!=min)
                    printf("%d %d\n",i,max);
            }
	
	return 0;
}

