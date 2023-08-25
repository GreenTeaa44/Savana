#include<stdio.h>
#include<stdlib.h>

void mainmenu (void);
void OrderFood (void);

	void mainmenu ()
	{
		printf ("\t =============================================\n");
		printf ("\t\t  Welcome to Savana Fried Chicken\n");
		printf ("\t =============================================\n");
	    printf ("\t 1. Order Food\n\t 2. Exit\n\n \t Enter Your Choice-->\n");
		printf ("\t =============================================\n");
		
		int select;
		scanf("%d",&select);
		if (select==1)
		{
//			system("cls");
			OrderFood();
			
		}
		
		else if (select==2)
		{
		system("cls");
		printf("\n\n");
		printf ("\t_____________________________\n");
		printf ("\t\t Thank You\n");
		printf ("\t\t Come Back Again!\n");
		printf ("\t_____________________________\n");
		exit(0);
		
		}
		else 
		{
			system("cls");
			printf ("Wrong Input, please input the correct option\n\n");
			mainmenu();
		}
}

	int tot1;
	int tot2;
	int tot3;
	
void OrderFood ()
{
	printf ("\t\tChoose Your Order\n");
	printf ("\t=================================\n");
	printf ("\t1. Chicken wings  -------- 5$\n\t2. Chicken nugget -------- 4$\n\t3. Fried Chicken  -------- 6$\n\n \tEnter Your Choice-->\n");
	
	int choice;
	int Quantity;
	int again;
	double total=0;
	
	scanf("%d", &choice);
	
	if(choice==1)
	{
		printf ("Quantity : ");
		scanf ("%d", &Quantity);
		total=+5*Quantity;
		printf("\n");
		printf("Press 1 to order again : \n\nPress 2 to get total : \n\nenter your choice-->");
		scanf("%d", &again);
		printf("\n");
		if (again==1)
		{
			printf("\n\n");
			OrderFood();
		}
		else if(again==2);
		{
			printf("Your Total Amount : %.2f\n", total);
			
			int tot1;
			FILE*Total;
			Total=fopen("order.txt","a");
			fprintf(Total,"\n Grand Total : %d\n", tot1);
			fclose(Total);
		}
		
	}
		
	else if (choice==2)
	{
		printf ("Quantity : ");
		scanf ("%d", &Quantity);
		total=+4*Quantity;
		printf("\n");
		printf("Press 1 to order again : \n\n Press 2 to get total : \n\nenter your choice-->");
		scanf("%d", &again);
		printf("\n");
		if (again==1)
		{
			printf("\n\n");
			OrderFood();
		}
		else if(again==2);
		{
			printf("Your Total Amount : %.2f\n", total);
			
			int tot2;
			FILE*Total;
			Total=fopen("order.txt","a");
			fprintf(Total,"\n Grand Total : %d\n", tot2);
			fclose(Total);
 		}
	}
	
	else if(choice==3)
	{
		printf ("Quantity : ");
		scanf ("%d", &Quantity);
		total=+6*Quantity;
		printf("\n");
		printf("Press 1 to order again : \n\n Press 2 to get total : \n\nenter your choice-->");
		scanf("%d", &again);
		printf("\n");
		if (again==1)
		{
			printf("\n\n");
			OrderFood();
		}
		else if(again==2);
		{
			printf("Your Total Amount : %.2f\n", tot3);
			
			int tot3;
			FILE*Total;
			Total=fopen("order.txt","a");
			fprintf(Total,"\n Grand Total : %d\n", tot3);
			fclose(Total);
		}
	}
		else 
		{
			printf ("Wrong Input, please input the correct option\n\n");
			OrderFood();
		}
	}
	
int main (){
	int tot1,tot2,tot3;
	mainmenu();
	printf("Grand Total = %d",tot1+tot2+tot3);
	return 0;
}

