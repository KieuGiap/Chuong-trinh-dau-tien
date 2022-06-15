#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int luachon;
	char i;
	int cardid;
	int pin;
	printf("login\n");
	printf("nhap vao cardid:\n");
	scanf("%d",&cardid);
	printf("nhap vao pin:\n");
	scanf("%d",&pin);
	
	if(cardid==123 && pin== 456)
	{
		do{		
		printf("1. Rut tien\n2. chuyen khoan\n3 .xem so du\n4. ket thuc\n");
		printf("moi ban lua chon:\n");
		scanf("%d",&luachon);
	switch (luachon)
	{
		case 1:
		
				printf("1. Rut tien\n");
				break;
		
		case 2:
		
				printf("2. chuyen khoan\n");
				break;
			
			
			case 3:
				
				printf("3. xem so du\n");
					break;
				
			case 4 :
				
					printf("4. ket thuc\n");
					break;
				
	}
		
		printf("ban co muon tiep tuc (y/n): ");
		fflush(stdin); 
		scanf("%c",&i);
	}
		while(i!='N');
		printf("ket thuc \n");			
}
	else
	printf("invalid\n");
	return 0;
}
