#include <stdio.h>

int main(int argc, char *argv[]){
	int n;

	do{
		printf("Height: ");
		scanf("%d", &n);
		//n=get_int("Height: ");
	}while(n<1 || n>8);

	int i=1, j, k, l;

	while(i<=n){
		for(j=n-i; j>0; j--){
			printf(" ");
		}
		for(k=0; k<i; k++){
			printf("#");
		}
		printf("  ");
		for(l=0; l<i; l++){
			printf("#");
		}
		printf("\n");
		i++;
	}
	return 0;
}
