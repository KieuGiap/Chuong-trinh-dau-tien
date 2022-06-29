#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int nhap(int arr[4])
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("Nhap phan tu thu a[%d] la :",i);
		scanf("%d",&arr[i]);
	
		}
	}
	
	int tong(int arr[4])
{
	int i,sum=0;
	for(i=0;i<4;i++)
	{
		sum+=arr[i];
	}
	return sum;
}

	float trungbinh(int arr[])
	{
		int i,sum;
		float tb;
		for(i=0;i<4;i++){
			sum+=arr[i];
			tb=sum/i;
		}
		return tb;
	}


int max(int arr[])
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
	return max;
}

int min(int arr[])
{
	int i,min=arr[0];
	for(i=0;i<4;i++)
	{
		if(min>arr[i])
		min=arr[i];
	}
	return min;
}



	
int main(int argc, char *argv[]) {
	int arr[4];
	int maxnum,minnum,sum;
	nhap(arr);
	maxnum=max(arr);
	minnum=min(arr);
	sum=tong(arr);
	printf(" \n gia tri max la %d",maxnum);
	printf("\n gia tri min la %d", minnum);
	printf("\ntong la %d",sum);
	
	return 0;
}
