#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int login(int a,int b)
{
	bool value;
	if(a==123&&b==456);
	value= true;
	return value;
}

int sodu(){
	int sd;
	sd=12300000;
	return sd;
}

int ruttien(){
	int c,sd;
	printf("nhap vao so tien can rut : \n");
	scanf("%d", &c);
	sd=sodu();
	if(c>=sd)
	printf("tai khoan cua ban không du tien \n");
	else if(c<sd&&c%50000==0&&c<3000000)
	printf("ban da rut tien thanh cong so tien %d",c);
	else if (c<sd&&c%50000!=0&&c<3000000)
	printf("so tien ban can rut khong phai la boi cua 50000,moi ban nhap lai \n");
	else
	printf("so tien cua ban lon hon 3M, moi ban nhap lai \n");		
}

char menu()
{
	printf("1. Rut tien\t2. chuyen khoan\n3. hien thi so du\n\t4. Thoat\n");
}

int chuyentien(){
	int sd,stc,stk;
	sd=sodu();
	printf("nhap vao so tien can chuyen:\n");
	scanf("%d",&stc);
	if(stc<sd)
	{
	printf("ban da chuyen so tien %d cho tai khoan %d",stc,stk);
	printf(" so su hien tai cua ban la %d",sd-stc);
}
	else 
	printf("so tien chuyen lon hon so du hien tai \n");
}

int main(int argc, char *argv[]) {
	int log,x,y;
	printf("moi ban nhap vao acc va pass \n");
	scanf("%d%d",&x,&y);
	log=login(x,y);
	printf(" chuc mung ban da dang nhap thanh cong ");
	return 0;
}
