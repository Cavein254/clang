#include <stdio.h>

int main() 
{
	int ctr;
	int idSearch;
	int found = 0;
	int quit;

	int custID[5] = {123,124,125,126,127};
	float custBal[5] = {11.88,22.45,412.12,657.1,22};

	printf("\n\n\t****** Customer Balance Lookup **********\n");
	printf("\n\n\tEnter 1 to Continue or 0 to quit \n\t");
	scanf("%d", &quit);
	while(!quit==0)
	{

	printf("\t Enter customer id \n\t");
	scanf("%d", &idSearch);

	for(ctr=0;ctr<5;ctr++)
	{
		if(idSearch == custID[ctr])
		{
			found = 1;
			break;
		}
	}
	if(found)
	{
		if(custBal[ctr] > 100)
		{
			
		printf("\n\n\t Credit Denied  \n");
		printf("\n\n\t ***The customer's balance is %.2f \n", custBal[ctr]);
		}
		else
		{
			printf("\n\n\tThe customer has good credit \n");
		}
	}
	else
	{

		printf("\n\n\tYou have entered the wrong cusmer id \n");
	}
	}
	printf("\n \t *******BYe see you next time********");

}
