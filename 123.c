#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int login(int a,int b)
{
	if(a==123&&b==456)
	printf("\n\n\t\t*** Chuc mung ban da dang nhap thanh cong ***");
	return 0;
}

int sodu(){
	int sd;
	sd=12300000;
	return sd;
}

int ruttien(){
	int c,sd,cl;
	printf("Nhap vao so tien can rut : ");
	scanf("%d", &c);
	sd=sodu();	
	if(c<sd&&c%50==0&&c<3000000){
	printf("Ban da rut tien thanh cong so tien %d\n",c);
	cl=sd-c;
	printf("so du con lai la %d\n",cl);
}
	else if (c<sd&&c%50!=0)
	printf("So tien ban can rut khong phai la boi cua 50, moi ban nhap lai \n");
	else if(c<sd&&c>=3000000)
	printf("So tien cua ban lon hon 3M, moi ban nhap lai \n");	
	else
	printf("Tai khoan cua ban khong du tien \n");	
}

char menu()
{
	printf("\n\n\n\t\t1. Rut tien\t\t\t2. Chuyen khoan\n\t\t3. Hien thi so du\t\t4. Thoat\n\n");
}

int chuyentien(){
	int sd,stc,stk;
	sd=sodu();
	printf("Nhap vao so tien can chuyen:");
	scanf("%d",&stc);
	printf("nhap vao stk can chuyen:");
	scanf("%d",&stk);
	if(stc<sd)
	{
	printf("\nBan da chuyen so tien %d cho tai khoan %d",stc,stk);
	printf(" \nSo su hien tai cua ban la %d",sd-stc);
}
	else 
	printf("So tien chuyen lon hon so du hien tai \n");
}

int main(int argc, char *argv[]) {
	int log,a,b,mn,ch,rt,ct,sd;
	char check, check1;
	printf("\t\t\t*** Chao mung ban den voi ATM ***\n");
	do{
	printf("\nMoi ban nhap vao user cua the : ");
	scanf("%d",&a);
	printf("\nMoi ban nhap vao password cua the : ");
	scanf("%d",&b);
	log=login(a,b);
	if(a==123&&b==456){
	do
	{
	
	mn=menu();
	printf("Nhap vao lua chon cua ban : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: 
		rt=ruttien();
		break;
		case 2:
			ct=chuyentien();
			break;
		case 3:
			sd=sodu();
			printf("So du cua ban la %d",sd);
			break;
		case 4:
			return 0;
	}
	printf("Ban co muon tiep tuc khong (Y/N) : ");
	fflush (stdin);
	scanf("%c",&check);
}
while (check=='y'||check=='Y');
}
else
{

	printf("\nBan da dang nhap sai user hoac passwword, moi ban dang nhap lai");
}
}
	while (a!=123&&b!=456);
	return 0;
}
