#include <stdio.h>
int F(int n)
{
	int f1=1, f2=1;
	if(n==1||n==2)
	return 1;
	int i=3, f;
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
   printf("nhap n \n");
   scanf("%d", &n);
   printf("gia tri thu %d cua day fibonacci la %d\n",n, F(n));
    return 1;
}
