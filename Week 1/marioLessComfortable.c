#include <stdio.h>

int main(int argc, char *argv[]){
	int n;

	do{
		printf("Height: ");
		scanf("%d", &n);
		//n=get_int("Height: ");
	}while(n<1 || n>8);

	int i=1, j, m;

	while(i<=n){
		for(j=n-i; j>0; j--){
			printf(" ");
		}
		for(m=0; m<i; m++){
			printf("#");
		}	
		printf("\n");
		i++;
	}
	return 0;
}
