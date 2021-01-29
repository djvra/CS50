#include<stdio.h>
	float c;
#include<math.h>

int main(){
	//int div1, div2, div3, div4, counter=0;
	int quarters, dimes, nickels, pennies;
	
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
	
	/*
	while(1){
		if(cash>=25){ //quarters
			div1=cash/25;
			counter+=div1;
			cash-=div1*25;
		}
		else if(cash>=10){ //dimes
			div2=cash/10;
			counter+=div2;
			cash-=div2*10;
		}
		else if(cash>=5){ //nickels
			div3=cash/5;
			counter+=div3;
			cash-=div3*5;
		}
		else if(cash>=1){ //pennies
			div4=cash/1;
			counter+=div4;
			cash-=div4*1;
		}
		else break;
	}
	*/
	
	printf("\nyour change is: %d", cash); //or counter
	
	return 0;
}
