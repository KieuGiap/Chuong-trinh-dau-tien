#include <stdio.h>
#include <stdlib.h>




void nhap(int arr[4][4])
{
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		scanf("%5d",&arr[i][j]);	
	}
}
}

void hienthi(int arr[4][4])
{
	int i,j,sum=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		
		printf("%5d",arr[i][j]);
		sum+=arr[i][j];
		}
	}
	printf("\ntong cac phan tu la %d",sum);	
		
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int arr[4][4];
	nhap(arr);
	hienthi(arr);
	
	return 0;
}
