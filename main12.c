#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int checkevent(int n, int m)
{
	int i;
	for(i=n;i<m;i++)
	{
		if(i%2==0)
		printf(" %d ",i);
	}
}


int main(int argc, char *argv[]) {
	int n,m,a;
	printf("nhap vao n:");
	scanf("%d",&n);
	printf("\nnhap vao m:");
	scanf("%d",&m);
	printf("cac so chan trong khoang tu %d den %d la",n,m);
	a=checkevent(n,m);
	return 0;

}
