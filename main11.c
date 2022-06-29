#include <stdio.h>

void isevenNumber (int number, int n, int m){
	for (number = n; number <= m; number++){
		if (number%2 == 1){
		printf ("%d\t", number);
		}
	}
}

int main(void) {
	int n, m;
	int number;
	do{
		printf ("Enter the number n:\n");
		scanf ("%d", &n);
		printf ("Enter the number m:\n");
		scanf ("%d", &m);
		if (n>m){
			printf("n must be less than m\n");
		}
			
	} while (n>m);

	printf("The even numbers between %d and %d are:\n", n, m);
	isevenNumber (number, n, m);
		
return 0;
}



