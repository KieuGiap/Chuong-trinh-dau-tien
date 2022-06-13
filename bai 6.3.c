#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int min;
	int max;
	
	printf("gia tri min la : \n");
	scanf("%d",&min);
	
	printf("gia tri max la : \n");
	scanf("%d",&max);
	
	for(i=min; i<=max; i++)
	{
		if(i%7==0)
		prinf("hien thi gia tri %d, i");
	}
	
	return 0;
	
}
