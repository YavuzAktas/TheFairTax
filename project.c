#include<stdio.h>

int main(void){
	
	printf("----------The Fair Tax----------");
	
	double expenses, totalTax = 0;
	unsigned int categories;
	
	do{
		
		printf("\n\n%s\n\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n", "Enter expenses in various categories", "1-)Housing", "2-)Food", "3-)Clothing", "4-)Transportation", "5-)Education", "6-)Health Care", "7-)Vacations", "8-)What is the Fair Tax??", "9-)EXİT");
		scanf("%d", &categories );
		puts( "" );
		
		switch( categories ){
			
			case 1:
				printf("Enter housing expenses : ");
				scanf("%lf", &expenses );
				totalTax += expenses * 23 / 100;
				break;
				
			case 2:
				printf("Enter food expenses : ");
				scanf("%lf", &expenses );
				totalTax += expenses * 23 / 100;
				break;
				
			case 3:
				printf("Enter clothing expenses : ");
				scanf("%lf", &expenses );
				totalTax += expenses * 23 / 100;
				break;
				
			case 4: 
				printf("Enter transportation expenses : ");
				scanf("%lf", &expenses );
				totalTax += expenses * 23 / 100;
				break;
				
			case 5: 
				printf("Enter education expenses : ");
				scanf("%lf", &expenses );
				totalTax += expenses * 23 / 100;
				break;
				
			case 6:
				printf("Enter health care expenses : ");
				scanf("%lf", &expenses );
				totalTax += expenses * 23 / 100;
				break;
				
			case 7:
				printf("Enter vacations expenses : ");
				scanf("%lf", &expenses );
				totalTax += expenses * 23 / 100;
				break;
				
			case 8:
				printf("%s\n\n%s", "The current federal income tax system is clearly broken — unfair, overly complex, and almost impossible for most Americans to understand. But there is a reasonable, nonpartisan alternative before Congress that is both fair and easy to understand. A system that allows you to keep your whole paycheck and only pay taxes on what you spend.", "The FairTax is a national sales tax that treats every person equally and allows American businesses to thrive, while generating the same tax revenue as the current four-million-word-plus tax code. Under the FairTax, every person living in the United States pays a sales tax on purchases of new goods and services, excluding necessities due to the prebate. The FairTax rate after necessities is 23% compared to combining the 15% income tax bracket with the 7.65% of employee payroll taxes under the current system -- both of which will be eliminated!\n");
				break;
				
			case 9:
				continue;
				
			default:
				printf("You wrong number!!");
				break;			
		}	
	printf("-------------------------------------------");	
	
	}while( categories != 9 );
	
	printf("Total tax is %.3lf$", totalTax );	
}
