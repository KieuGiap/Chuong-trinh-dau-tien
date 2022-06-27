#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int nhap(int arr[4])
{
	int i,sum=0;
	float avg;
	for(i=0;i<4;i++)
	{
		printf("Nhap phan tu thu a[%d] la :",i);
		scanf("%d",&arr[i]);
		sum+=arr[i];
		}
	avg=sum/i;
	printf("\nTong cac phan tu trong mang la %d",sum);
	printf("\nTrung binh cong cac phan tu trong mang la : %.2f",avg);
	}
	

int max(int arr[4])
{
	int i,index,max=arr[0];
	for(i=0;i<4;i++)
	{
		if(max<arr[i])
		{
		
		max=arr[i];
		index=i;
		}
	}
	printf("\n Vi tri max la %d",index);
	return index;
}

int min(int arr[4])
{
	int i,index, min=arr[0];
	for(i=0;i<4;i++)
	{
		if(min>arr[i])
		{	
		min=arr[i];
		index=i;
		}
	}
	printf(" \n Vi tri min la %d",index);
	return index;
}


int main(int argc, char *argv[]) {
	int arr[4];
	nhap(arr);
	max(arr);
	min(arr);
	return 0;
}
