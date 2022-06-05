#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int sbh, sbn, dlt, dth, dbtl;
	float pt_so_bn;

	printf("nhap vao sbn, sbh\n");
	scanf("%d%d",&sbn,&sbh);
	pt_so_bn = (sbn*100)/(sbn+sbh);
	printf("pha tram so buoi nghi la: %.2f\n",pt_so_bn);
	if(pt_so_bn >=25 )
	{
		printf("Hoc lai\n");
}

	else
{
	printf("nhap vao dlt,dth,dbtl\n");
	scanf("%d%d%d", &dlt, &dth, &dbtl);
	 if(dlt>=8)
	 {
	 	printf("PASS LT\n");
	 }
	else 
	printf("fail LT\n");
	if(dth>=6)
	{
		printf("pass TH\n");
	}
	else
	printf("fail TH\n");
	if(dbtl>=4){
		printf("pass BTL\n");
	}
	else
	printf("fail BTL\n");
}
	return 0;
}
