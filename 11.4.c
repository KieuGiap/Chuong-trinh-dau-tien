#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
	char ary[5];
	int i;
	printf("nhap chuoi: \n");
	scanf("%s",ary);
	printf("chuoi hien thi la \n\n", ary);
	for(i=0;i<5;i++)
	printf("\t%d", ary[i]);
}
