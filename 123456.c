#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int nhap(int arr[4])
{
	int i;
	for(i=0;i<4;i++)
	{	
	printf("nhap vao phan tu thu a[%d] ",i);
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

float trungbinh(int arr[4])
{
	int i,sum=0;
	float tb;
		for(i=0;i<4;i++)
	{
		sum+=arr[i];
		tb=sum/i;
	}
	return tb;
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
int min(int arr[4])
{
	int i,index,min=arr[0];
	for(i=0;i<4;i++)
{
	if(min>arr[i])
	{
	min=arr[i];
	index=i;
	}
	}
	return index;	
}

int main(int argc, char *argv[]) {
	int arr[4];
	int maxindex,minindex,sum;
	float tb;
	nhap(arr);
	maxindex=max(arr);
	minindex=min(arr);
	sum=tong(arr);
	tb=trungbinh(arr);
	printf("\n vi tri có gtri lon nhat la %d",maxindex);
	printf("\n vi tri có gtri nho nhat la %d",minindex);
	printf("\n tong cac phan tu la %d",sum);
	printf("\n tb cac phan tu ;a %d",tb);
	
	return 0;
}
