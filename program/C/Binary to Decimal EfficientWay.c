#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	int digit=0;
	int ans=0;
	int i=0;
	
	
	printf("Enter the binary number:  \n");
	 scanf("%d", &n);
	 
	int m=n;
	
	while(n!=0)
	{
		digit = n%10;
		ans = digit*pow(2,i) + ans;
		n=n/10;
		i++;
	}
   

    printf("The decimal of %d is %d" , m, ans);
  
	  
	return 0;	
}