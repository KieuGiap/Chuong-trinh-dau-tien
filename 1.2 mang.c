#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int ary[10];
	int i,total,high;
	for(i=0;i<10;i++)
	{
		printf("nhap gia tri %d :",i+1);
		scanf("%d", &ary[i]);
		}	
	
	high=ary[0];
	for(i=1;i<10;i++)
	{
		if(ary[i]>high)
		high=ary[i];
		
	}
	printf(" gia tri cao nhat nhap vao la %d",high);
	for(i=0;total=0;i++)
	total=total+ary[i];
	printf("gia tri trung binh la %d",total/i);
}
