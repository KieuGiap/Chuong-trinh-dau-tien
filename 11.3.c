#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
	char alpha[26];
	int i,j;
	for(i=65,j=0;i<91;i++,j++)
	{
		alpha[j]=i;
		printf("gia tri cua ky tu la %c\n", alpha[j]);
	}
	getchar();
}
