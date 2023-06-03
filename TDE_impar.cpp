#include <stdio.h>

int main () {
	int n;
	int impar = 0;
	int ma = 0;
	printf("Numero? ");
	scanf("%d", &n);
	while (n != 0 || !impar){
	    if (n>0 && n%2==1){
	        impar = 1;
	        if (n>ma) {
	            ma = n;
	    	}
	    } else {
	        impar = 0;
		}
		printf("Numero? ");
		scanf("%d", &n);
	}
	printf("O maior impar: %d", ma);

	return 1;
}
