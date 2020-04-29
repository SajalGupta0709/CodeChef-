#include <stdio.h>
long long int gcd(long long int a,long long int b) 
{
    if(b==0)
      return a;
    return gcd (b,a%b);  
    }
    int main(void) {
	// your code goes here
	long long int t,i;
	long long int n,a,b,x,k,lcm;
	scanf("%lld\n",&t);
	for(i=0;i<t;i++)
   {
       scanf("%lld",&n);
       scanf("%lld",&a);
       scanf("%lld",&b);
       scanf("%lld",&k);
        lcm=a*b/gcd(a,b);
        x=n/a + n/b - 2*(n/lcm);
       if(x>=k)
       printf("Win\n");
       else printf("Lose\n");
       x=0;}
     
return 0;
}

