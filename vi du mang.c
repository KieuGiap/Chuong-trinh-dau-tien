#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
	int i ,n=0; int item;
	char lines[10][12]; char temp[12];
	printf("nhao vao chuoi \n");
	printf(" Type 'END' when over\n");
	do{
		printf(" chuoi %d :",n+1);
		scanf("%s", &lines[n]);
	}while (strcmp(lines[n++],"END"));
	n=n-1;
	for(item=0;item<n-1;++item)
	{
		for(i=item+1;i<n;++i)
		{
			if(strcmp(lines[item],lines[i])>0)
			{
				strcpy(temp,lines[item]);
				strcpy(lines[item],lines[i]);
				strcpy(lines[i],temp);
			}
		}
	}
	printf(" recorded list of string \n\n");
	for(i=0;i<n;++i)
	{
		printf("\n string %d is %s",i+1,lines[i]);
	}
}
