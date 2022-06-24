#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int tongtien=0;
int tiensach()
{
	int ts,a,b;
		printf("Nhap vao gia sach : ");
	scanf("%d",&a);
	printf("nhap vao so luong sach: ");
	scanf("%d",&b);
	ts=a*b;
	return ts;
}

int tienbut()
{
	
int tb,c,d;	
	printf("Nhap vao gia but : ");
	scanf("%d",&c);
	printf("nhap vao so luong but:");
	scanf("%d",&d);
	tb=c*d;
	return tb;
}
	
int main(int argc, char *argv[]) {
	int ts1,tb1,a,b,c,d,tongtien;
	int tt=0;
	char ch;
	do{
	ts1=tiensach();
	tb1=tienbut();
	tt=ts1+tb1;
	tongtien+=tt;
	printf("\ntong tien la %d\n",tongtien);
	printf("Ban co muon tiep tuc khong (Y/N) : ");
	fflush(stdin);
	scanf("%c",&ch);
}
	while(ch=='Y'||ch=='y');
	
}
