#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,j,k;	
	
	prinft("nhap vao i :\n");
	scanf("%d",&i);
	
	for(j=0;j<=i;j++)
	{
		printf("\n");
		for(k=0;k<=j;k++)
		{
			printf("*");
		}
	}
	

	return 0;
	
}
