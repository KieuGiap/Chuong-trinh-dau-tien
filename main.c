#include<stdio.h>
#include<math.h>
int n,m;
int i;
isEvenNumber()
{   
    
    printf("The even numbers between %d and %d: ",n,m);
    for (i=n; i<m; i++)
    {
        if(i % 2 == 1)
        printf("\n%d",i);
    }
}
int main()
{
    do{
    printf("Please, enter a number: ");
    printf("\nn: ");scanf("%d",&n);
    printf("\nm: ");scanf("%d",&m);
    if(n>m)
    {
        printf("khong hop le.");
        printf("nhap lai");
    }
    }
    while(n>m);
    isEvenNumber();
}
