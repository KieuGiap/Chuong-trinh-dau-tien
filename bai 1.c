#include <stdio.h>
#include <stdlib.h>


 int a,b; 
int input(){
	printf("Moi ban nhap 2 so nguyen \n");
	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
}
int tong(){
	int tong; 
	tong=a+b;
	printf("Tong hai so a v b la: %d\n", tong);
}
int hieu(){
	int hieu; 
	hieu=a-b;
	printf("Hieu hai so a va b la: %d\n", hieu);
}
int tich(){
	int tich; 
	tich=a*b;
	printf("Tich hai so a va b la: %d\n", tich);
}
int thuong(){
	float thuong; 
	thuong=a/b;
	printf("Thuong hai so a va b la: %f\n ", thuong);
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,luachon; 
	char luachon1;
	input(a,b);
	do{
		printf("\nMenu lua chon: \n");
		printf("1.Tinh Tong \n");
		printf("2.Tinh hieu \n");
		printf("3.Tinh tich \n");
		printf("4.Tinh thuong \n");
		printf("5. Thoat\n\n");
		printf("Moi ban nhap lua chon : ");
		fflush(stdin);
		scanf("%d", &luachon);
		switch(luachon){
			case 1:
			tong(a,b);
			   break; 
			case 2:
			hieu(a,b);
			   break;
			case 3:
			tich(a,b);
			   break;
			case 4:
			thuong(a,b);
			   break;
			case 5:
			return 0;
				break;
		}
		printf("Ban co muon tiep tuc: (Y/N) : ");
		fflush(stdin);
		scanf("%c", &luachon1); 
	} while(luachon1=='y'||luachon1=='Y');
	return 0;
}
