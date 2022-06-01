#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(void) {
	
	int a,b,c;
	
	printf("nhap vao 3 canh tam giac\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a+b<=c)
	{
		printf("khong phai la tam giac");
	}
	else if (a==b&&b==c)
	{
		printf("tam giac deu");
	}
	else if( a==b ||b==c||c==a){
	
	printf("tam giac can");
}
	else
	{
		printf("tam giac BT");
	}
}
	
		


