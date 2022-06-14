#include <stdio.h>
int Fibonacci(int n)
{
	int f1=1,f2=1;
	if(n==1||n==2)
	return 1;
	int i=3,f;
	while(i<=n)
	{
	f=f1+f2;
	f1=f2;
	f2=f;
	i++;
	}
	return f;	
}
int main()
{
    int n;
    printf("nhfp vao gtri n \n");
    scanf("%d",&n);
    printf(" gif tri thu %d la %d\n",n, Fibonacci(n));
    return 1;
}
