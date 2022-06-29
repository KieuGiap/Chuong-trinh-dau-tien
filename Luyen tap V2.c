#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int nhap(int arr[4])
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("nhap vao phan tu thu a[%d]",i);
		scanf("%d",&arr[i]);
	}
}

int min(int arr[])
{
	int i,index=0, min=arr[0];
	for(i=0;i<4;i++)
	{
		if(arr[i]<min)
		{	
		min=arr[i];
		}
	}
	return min;
}


int main(int argc, char *argv[]) {
	int arr[4],maxindex,minindex,sum;
	float avg;
	nhap(arr);
	maxindex=max(arr);
	minindex=min(arr);
	sum=tong(arr);
	avg=trungbinh(arr);
	printf("\nVi tri min la %d",minindex);
	printf("\nVi tri max la %d", maxindex);
	printf("\n Tong cac phan tu cua mang la %d",sum);
	printf("\n Trung binh cac phan ttu cua mang la : %.2f",avg);
	return 0;
}
