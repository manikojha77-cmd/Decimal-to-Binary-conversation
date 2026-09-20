#include<stdio.h>
int main()
{
	int n,rem,binary=0,p=1;
	printf("Enter the decimal number");
	scanf("%d",&n);
	if(n==0)
	printf(" the binary is =0");
	else
	{   while(n>0)
	{
		rem=n%2;
		binary=binary +(p *rem);
		p=p*10;
		n=n/2;
	
		printf(" The Binary is=%d",binary);}
	}
	return 0;
}
