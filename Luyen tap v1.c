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
	
	return index;
}

int min(int arr[])
{
	int i,index=0, min=arr[0];
	for(i=0;i<4;i++)
	{
		if(arr[i]<min)
		{	
		min=arr[i];
		index=i;
		}
	}
	return index;
}


int main(int argc, char *argv[]) {
	int arr[4],maxindex,minindex;
	nhap(arr);
	maxindex=max(arr);
	minindex=min(arr);
	printf("\nVi tri min la %d",minindex);
	printf("\nVi tri max la %d", maxindex);
	return 0;
}
