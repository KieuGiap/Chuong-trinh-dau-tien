#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int nhap(int arr[4])
{
	int i;
	for(i-0;i<4;i++)
	{
		printf("nhap vao phan tu thu a[%d]",i);
		scanf("%d",&arr[i]);
	}
}

int tong(int arr[4])
{
	int i,sum=0;
	for(i-0;i<4;i++)
	{
		sum+=arr[i];
	}
	return sum;
}

int max(int arr[4])
{
	int i, max=arr[0];
	for(i=0;i<4;i++)
	{
		if(max<arr[i])
		max=arr[i];
	}
	return max;
}

int min(int arr[4])
{
	int i, min=arr[0];
	for(i=0;i<4;i++)
	{
		if(min>arr[i])
		{
		min=arr[i];
		}
	}
	return min;

int main(int argc, char *argv[]) 
{
	int arr[4];
	int sum,gtmax,gtmin;
	nhap(arr);
	gtmax=max(arr);
	printf("\n gtri max la %d",gtmax);
	printf("\n gtri min la %d",gtmin);
	printf("\n tong la %d",sum);
	return 0;
}
