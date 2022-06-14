#include <stdio.h>
int Fibonacci(int n)
{

	int a1=1,a2=1;
	if(n==1||n==2)
	return 1;
	int i=3,a;
	while(i<=n){
	a=a1+a2;
	a1=a2;
	a2=a;
	}	
}
int main()
{
    int n;
    printf("nhap vao gtri n \n");
    scanf("%d",n);
    printf(" gia tri thu %d la %d",n,a(n));
    return 1;
}
