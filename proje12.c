#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	printf("Coffee Vending Machine");
	char coffee;
	printf("Enter the name of the coffee: ");
	scanf("%s",&coffee);
	
	switch(coffee)
	{
		case 'e':printf("espresso"); break;
		case 'f':printf("filter coffee"); break;
		case 'l':printf("latte"); break;
		case 'a':printf("americano"); break;
		default: printf("incorrect or capital letter input"); break;
	}
	return 0;
}
