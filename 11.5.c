#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	
	int arr[2][3];
	int row,col;
	for(row=0;row<2;row++){
		for(col=0;col<3;col++){
		printf(" nhap vao so thu [%d][%d]:",row,col);
		scanf("%d",&arr[row][col]);
	}
	}
	for(row=0;row<2;row++){
		for(col=0;col<3;col++){
		printf("  so thu [%d][%d] la %d\n",row,col,arr[row][col]);
}
}
}
