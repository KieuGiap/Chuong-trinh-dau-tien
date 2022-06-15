#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int ary[4];
	int i,total,high;
	for(i=0;i<4;i++)
	{
		printf("\nnhap gia tri %d :",i+1);
		scanf("%d", &ary[i]);
		}	
	
	high=ary[0];
	for(i=1;i<4;i++)
	{
		if(ary[i]>high)
		high=ary[i];	
	}
	printf("\n gia tri cao nhat nhap vao la %d",high);
	for(i=0, total=0;i<4; i++){
	total=total+ary[i];
	}
	printf("\n gia tri trung binh la %f",total/i);

}
