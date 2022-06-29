#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int iseventnumber(int n,int m)
{
	int n, m;
	printf("nhap vao so n : %d",n);
	scanf("%d",&n);
	printf("nhap vao so m : %d",m)
	scanf("%d",&m);
	for(i=n;i<m;i++)
	{
		if(i%2==0)
		printf("%d",i);
	}
	return 1;
}


int main(int argc, char *argv[]) {
	int n,m;
	iseventnumber(n,m);
	printf("cac so chan trong khoang tu %d den %d la %d",n,m,iseventnumber(n,m));
	
	return 0;
}
