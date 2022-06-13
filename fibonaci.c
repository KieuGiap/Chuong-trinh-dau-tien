#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, j ;
	j=0;
	do
	{
		printf("nhap vao so: \n");
		scanf("%d",&i);
		printf ("No is %d\n",i);
		j++;
		
	} while(i != 0);
	printf(" tong so lan nhap khac 0 la %d",--j);
	return 0;
	
}
