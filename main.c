#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i;
	int dem=0;
	printf("nhap vao so nguyen n \n");
	scanf("%d",&n);
	
	for(i=2;i<sqrt(n);i++)
	{
	
	if(n%i==0)
	dem=dem+1;
}
	if(dem==0)
	printf("%d la so nguyen to",n);
	else
	printf("%d la hop so",n);
	
	return 0;
}
