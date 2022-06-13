#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int j,k;	
	
	
	for(j=2;j<=10;j++)
	{
		printf("\n");
		for(k=1;k<=10;k++)
		{
			printf("%d x %d = %d\n",j,k,j*k);
		}
	}
	
	return 0;
	
}
