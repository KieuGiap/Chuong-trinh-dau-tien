#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int tong(int a,int b)
{
	int tong;
	tong=a+b;
	return tong;
}
int hieu(int a,int b)
{
	int hieu;
	hieu=a-b;
	return hieu;
}

int tich( int a, int b)
{
	int tich;
	tich=a*b;
	return tich;
}

float thuong(float a,float b)
{
	float thuong;
	thuong=a*b;
	return thuong;
}

int main(int argc, char *argv[]) {
	
	
	
	int a,b,add,sub,mul,div;
	int luachon;
	char ch;
	do{
	printf("nhap vao 2 so a,b :\n");
	scanf("%d%d",&a,&b);
	printf("cac menu lua chon:\n\n");
	printf("1. tinh tong\n2. tinh hieu\n3. tinh tich\n4. tinh thuong\n\n");
	printf("moi ban lua chon yeu cau: ");
	scanf("%d",&luachon);
	switch(luachon){
		case 1:
			{
				add=tong(a,b);
				printf("tong 2 so la %d\n",add);
				break;
			}
			case 2:
				{
					sub=hieu(a,b);
					printf("hieu 2 so la %d\n\n",sub);
					break;
				}
			case 3:
				{
					mul=tich(a,b);
					printf("tich 2 so la %d\n\n", mul);
					break;
				}
			case 4:
				{
					div=thuong(a,b);
					printf("thuong 2 so la %d\n\n",div);
					break;
				}
			default:
			{
				printf("moi ban chon lai menu: \n\n");
				break;
			}
			
	}
		printf("ban co muon tiep tuc (Y/N) :)");
		fflush (stdin);
			scanf("%c",&ch);	
}
	while(ch=='Y'||ch=='y');
		
	return 0;
}
