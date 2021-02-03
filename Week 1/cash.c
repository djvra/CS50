#include<stdio.h>
#include<math.h>

int main(){
	int quarters, dimes, nickels, pennies;
	float c;
	
	do{
		printf("enter a value: ");
		scanf("%f", &c);
	}while(c<=0);
	
	int cash=round(c*100);
	printf("cents: %d", cash);

	quarters=cash/25;
	dimes=(cash%25)%10;
	nickels=((cash%25)%10)/5;
	pennies=(((cash%25)%10)%5;

	cash=quarters+dimes+nickels+pennies;
	
	printf("\nyour change is: %d", cash); //or counter
	
	return 0;
}
