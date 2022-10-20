#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	int bit=0;
	int ans=0;
	int i=0;
	
	
	printf("Enter the decimal number:  \n");
	 scanf("%d", &n);
	
	int m=n;
	
	while(n!=0)
	{
		bit = n&1;
		ans = bit*pow(10,i) + ans;
		n=n>>1;
		i++;
	}
   

    printf("The binary of %d is %d" , m, ans);
  
	  
	return 0;	
}