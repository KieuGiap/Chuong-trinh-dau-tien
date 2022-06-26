#include <stdio.h>
#include <stdlib.h>

#define LENGTH 5


void nhap(int arr[])
{
	int i;
	for(i=0;i<LENGTH;i++)
	{
		scanf("%5d",&arr[i]);
		
	}
}

void hienthi(int arr[])
{
	int i,sum=0;
	for(i=0;i<LENGTH;i++)
	{
		printf("%5d",arr[i]);
		sum+=arr[i];
	}
	printf("\ntong cac phan tu là %d",sum);	
		
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int arr[LENGTH];
	nhap(arr);
	hienthi(arr);
	
	return 0;
}
