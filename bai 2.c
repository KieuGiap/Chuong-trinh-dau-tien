#include <stdio.h> 

void hienthi( int arr[]){
	int i;
	for(i= 0; i< 10; i++) {
		printf("Number %d : %d \n",i,arr[i]);
	}
	
}

void daonguoc(int arr[]){
	int i;
	for (i=0;i<5;i++){
       int temp=arr[i];
       arr[i]=arr[9-i];
       arr[9-i]=temp;
  	}
}

int main () {
 	int arr[10]={9,6,1,1,1,1,1,1,1,20};
	hienthi(arr);
	printf("\nResult:\n");
	daonguoc(arr);
	hienthi(arr);
	
 return 0;
}
  
