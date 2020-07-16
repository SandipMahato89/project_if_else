#include<stdio.h>
int main()
{
	int n;
	printf("Enter for  1.Pizza  2.Burger  3.Pasta  4.French Fries   5.Sandwich \n");
	printf("Enter your choice  : ");
	scanf("%d",&n);
	printf("\n");
	switch(n)
	{
		case 1:
			printf("Pizza \n");
			printf("Cost :Rs 239");
		break;
		case 2:
			printf("Burger \n");
			printf("Cost : Rs 129");
		break;
		case 3:
			printf("Pasta \n");
			printf("Cost : Rs 179");
		break;
		case 4:
			printf("French Fries \n");
			printf("Cost : Rs 99");
		break;
		case 5:
			printf("Sandwich \n");
			printf("Cost : Rs 149");
		break;
		default :
			printf("Sorry!!! Wrong Choice");
	}
}
