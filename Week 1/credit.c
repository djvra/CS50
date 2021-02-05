#include <stdio.h>
#include<math.h>

void main(){
	
	long long c, c2, mod, ftdigits, multiple=0, lastdigit; //ftdigits: first two digits // // c2 is clone of c // //
	int counter=0, mtodigit=0, whichdigit=1; // digit counter, more than one digit

	do{
		printf("enter a value: ");
		scanf("%lld", &c);
	}while(c<=0);

	c2 = c;
	
	while(c2>0){
		mod=c2%10;
		
		if(whichdigit%2==0){
			multiple+=(mod*2);
			if((mod*2)>=10) mtodigit++;
		}
		else multiple+=mod;
				
		c2=(c2-mod)/10;
		if(c2>=10 && c2<=99) ftdigits=c2;
		//printf("First two digits are: %lld \n", ftdigits);
		//printf("%lld \n", c2);
		counter++;
		whichdigit++;
	}
	
    multiple=multiple-(10*mtodigit)+(1*mtodigit);
    //printf("Multiple is: %lld \n", multiple);
    
    lastdigit=multiple%10;
    //printf("lastdigit is: %lld \n", lastdigit);
    
    
    if((counter==15) && (ftdigits==34 || ftdigits==37) && lastdigit==0) printf("AMEX"); //Amex
    else if((counter==16) && (ftdigits>50 && ftdigits<56) && lastdigit==0) printf("MASTERCARD"); //mastercard
    else if((counter==13 || counter==16) && (ftdigits>=40 && ftdigits<50) && lastdigit==0) printf("VISA"); //visa
    else (printf("INVALID"));
}
