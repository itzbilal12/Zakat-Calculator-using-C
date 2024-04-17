#include <stdio.h>
#include <string.h>
struct{
	char name[20];
	char company[20];
	char vehicle[20];
}person;
int tax()
{
int choice;
float tax,monthlytax[2],monthlysalary,salary,yearlysalary,finaltax[2],yearlysalary1;
float rent,annualrent,annualrent1,taxrent,monthlyrent;
int choice1;
printf("\n\t\t\t\t\tPAKISTAN'S Tax CALCULATOR\n\n");
printf("\nEnter 1  (Tax on Salary)\nEnter 2  (Tax on Rental Income)\nEnter 3  (Tax on Vehicles)\n");
printf("Enter 4  (Tax on Bills)\nEnter 5  (EXIT)\n");
scanf("%d",&choice);
switch (choice){
case 1:
printf("\nEnter your monthly salary: ");
scanf("%f",&salary);
printf("Enter you company name: ");
scanf("%s",&person.company);
yearlysalary=salary*12;
yearlysalary1=yearlysalary;
if (yearlysalary<=600000){
printf("\n\t\tYour annual salary does not exceed Rs. 600,000 so the rate of income tax is 0%%\n");
return 1;
}else if(yearlysalary>600000 && yearlysalary<=1200000){
tax=yearlysalary-600000;
finaltax[0]=tax*(0.05);
    }else if(yearlysalary>1200000 && yearlysalary<=1800000){
        tax=yearlysalary-1200000;
        finaltax[0]=tax*(0.1);
        finaltax[0]=finaltax[0]+30000;
}else if(yearlysalary>1800000 && yearlysalary<=2500000){
        tax=yearlysalary-1800000;
        finaltax[0]=tax*(0.15);
        finaltax[0]=finaltax[0]+90000;
    }else if(yearlysalary>2500000 && yearlysalary<=3500000 ){
        tax=yearlysalary-2500000;
        finaltax[0]=tax*(0.175);
        finaltax[0]=finaltax[0]+195000;
    }else if(yearlysalary>3500000 && yearlysalary<=5000000  ){
        tax=yearlysalary-3500000;
        finaltax[0]=tax*(0.2);
        finaltax[0]=finaltax[0]+370000;
    }else if(yearlysalary>5000000 && yearlysalary<=8000000  ){
        tax=yearlysalary-5000000;
        finaltax[0]=tax*(0.225);
        finaltax[0]=finaltax[0]+670000;
    }else if(yearlysalary>8000000 && yearlysalary<=12000000 ){
        tax=yearlysalary-8000000;
        finaltax[0]=tax*(0.25);
        finaltax[0]=finaltax[0]+1345000;
    }else if(yearlysalary>12000000 && yearlysalary<=30000000 ){
        tax=yearlysalary-12000000;
        finaltax[0]=tax*(0.275);
        finaltax[0]=finaltax[0]+2345000;
    }else if(yearlysalary>30000000 && yearlysalary<=50000000  ){
        tax=yearlysalary-30000000;
        finaltax[0]=tax*(0.30);
        finaltax[0]=finaltax[0]+7295000;
    }else if(yearlysalary>50000000 && yearlysalary<=75000000  ){
        tax=yearlysalary-50000000;
        finaltax[0]=tax*(0.325);
        finaltax[0]=finaltax[0]+13295000 ;
    }else if( yearlysalary>75000000  ){
        tax=yearlysalary-75000000;
        finaltax[0]=tax*(0.35);
        finaltax[0]=finaltax[0]+21420000;
    }
    monthlytax[0]=finaltax[0]/12;
    yearlysalary=yearlysalary-finaltax[0];
    monthlysalary=yearlysalary/12;
    printf("\nMonthly salary: %.2f\nMonthly tax rate: %.2f\n",salary,monthlytax[0]);
    printf("Monthly Income after tax: %.2f\n",monthlysalary);
    printf("\nYearly Income: %.1f\nYearly Tax: %.1f\n",yearlysalary1,finaltax[0]);
    printf("Yearly Income After Tax: %.1f\n",yearlysalary);
    break;
case 2:

	printf("\nEnter the monthly rent on your immoveable property: ");
	scanf("%f",&rent);
	annualrent=rent*12;
	annualrent1=annualrent;
	if(annualrent<300000){
		printf("\n\t\tYour gross amount of rent does not exceed Rs 300,000 so your tax will be 0%%\n");
		return 1;
	}
	if(annualrent>=300000 && annualrent<600000){
		taxrent=annualrent-300000;
		finaltax[1]=taxrent*(0.05);
	}
	if(annualrent>=600000 && annualrent<2000000){
		taxrent=annualrent-600000;
		finaltax[1]=taxrent*(0.10);
		finaltax[1]=finaltax[1]+15000;
	}
	if(annualrent>=2000000){
		taxrent=annualrent-2000000;
		finaltax[1]=taxrent*(0.25);
		finaltax[1]=finaltax[1]+155000;
	}
	monthlytax[1]=finaltax[1]/12;
    annualrent=annualrent-finaltax[1];
    monthlyrent=annualrent/12;
    printf("\nMonthly rent: %.2f\nMonthly tax rate: %.2f\n",rent,monthlytax[1]);
    printf("Monthly rent after tax: %.2f\n\n",monthlyrent);
    printf("Annual rent: %.1f\nYearly rent: %.1f\n",annualrent1,finaltax[1]);
    printf("Yearly Income After Tax: %.1f\n",annualrent);
    break;
case 3:
	printf("\nEnter 1 (Yearly tax on vehicles)\nEnter 2 (Tax on registering new vehicles)\n");
	scanf("%d",&choice1);
	int engine[2];
	char taxpayer[2],name;
	switch (choice1){
	case 1:
    printf("\n\t\t\t\t\tTax on vechicles\n");
    printf("Enter engine capacity in (CC): ");
    scanf("%d",&engine[0]);
    printf("Enter your vehicle name: ");
    scanf("%s",&person.vehicle);
    printf("\nPersons not appearing in the Active Taxpayers List, tax rate is to be increased by 100%%\n\n");
    printf("Are you a active tax payer; Enter (Y/y for yes) & (N/n for n): ");
    scanf(" %c",&taxpayer[0]);
    printf("\n");
	if(taxpayer[0]=='Y'|| taxpayer[0]=='y' && engine[0]<=1000){
	printf("You have to pay 10,000 Rs of tax.\n");
	}else if(taxpayer[0]=='N'|| taxpayer[0]=='n' && engine[0]<=1000){
	printf("You have to pay 20,000 Rs of tax.\n");	
	}
	if((taxpayer[0]=='Y'|| taxpayer[0]=='y') && (engine[0]>1000 && engine[0]<1200)){
	printf("You have to pay 18,000 Rs of tax.\n");
	}else if((taxpayer[0]=='N' || taxpayer[0]=='n') && (engine[0]>1000 && engine[0]<1200)){
	printf("You have to pay 36,000 Rs of tax.\n");	
	}
	if((taxpayer[0]=='Y'|| taxpayer[0]=='y') && (engine[0]>=1200 && engine[0]<1300)){
	printf("You have to pay 20,000 Rs of tax.\n");
	}else if((taxpayer[0]=='N'|| taxpayer[0]=='n') && (engine[0]>=1200 && engine[0]<1300)){
	printf("You have to pay 40,000 Rs of tax.\n");	
	}
	if((taxpayer[0]=='Y'|| taxpayer[0]=='y') && (engine[0]>=1300 && engine[0]<1500)){
	printf("You have to pay 30,000 Rs of tax.\n");
	}else if((taxpayer[0]=='N'|| taxpayer[0]=='n') && (engine[0]>=1300 && engine[0]<1500)){
	printf("You have to pay 60,000 Rs of tax.\n");	
	}
	if((taxpayer[0]=='Y'|| taxpayer[0]=='y') && (engine[0]>=1500 && engine[0]<1600)){
	printf("You have to pay 45,000 Rs of tax.\n");
	}else if((taxpayer[0]=='N'|| taxpayer[0]=='n') && (engine[0]>=1500 && engine[0]<1600)){
	printf("You have to pay 90,000 Rs of tax.\n");	
	}
	if((taxpayer[0]=='Y' || taxpayer[0]=='y') && (engine[0]>=1600 && engine[0]<2000)){
	printf("You have to pay 60,000 Rs of tax.\n");
	}else if((taxpayer[0]=='N' && taxpayer[0]=='n') && (engine[0]>=1600 && engine[0]<2000)){
	printf("You have to pay 120,000 Rs of tax.\n");	
	}
	if((taxpayer[0]=='Y'|| taxpayer[0]=='y') && (engine[0]>=2000)){
	printf("You have to pay 120,000 Rs of tax.\n");
	}else if((taxpayer[0]=='N' || taxpayer[0]=='n') && (engine[0]>=2000)){
	printf("You have to pay 240,000 Rs of tax.\n");	
	}
break;
   case 2:
    printf("\n\t\t\t\t\tTax on registering new vechicles\n");
    printf("Enter engine capacity in (CC): ");
    scanf("%d",&engine[1]);
    printf("\nPersons not appearing in the Active Taxpayers List, tax rate is to be increased by 100%%\n\n");
    printf("Are you a active tax payer; Enter (Y/y for yes) & (N/n for n): ");
    scanf(" %c",&taxpayer[1]);
    printf("\n");
   	if((taxpayer[1]=='Y'|| taxpayer[1]=='y') && (engine[1]<=1000)){
	printf("You have to pay 50,000 Rs of tax.");
	}
	else if((taxpayer[1]=='N' || taxpayer[1]=='n') && engine[1]<=1000 ){
	printf("You have to pay 100,000 Rs of tax");
    }
   	if((taxpayer[1]=='Y'|| taxpayer[1]=='y') && (engine[1]>1000 && engine[1]<=2000)){
	printf("You have to pay 100,000 Rs of tax.");
	}else if((taxpayer[1]=='N' || taxpayer[1]=='n') && (engine[1]>1000 &&engine[1]<=2000)){
	printf("You have to pay 200,000 Rs of tax");	
   	}
	if((taxpayer[1]=='Y'|| taxpayer[1]=='y') && (engine[1]>2000)){
	printf("You have to pay 200,000 Rs of tax.");
	}else if((taxpayer[1]=='N' || taxpayer[1]=='n') && (engine[1]>2000)){
	printf("You have to pay 400,000 Rs of tax");}
	break;
	    default:
	break;	
}   break;
case 4:
	printf("\n\t\t\t\t\t    (Taxes on Bills)\nEnter 1 (Electricity bill)\nEnter 2 (Telephone bill)\n");
	int choice2;
	   	float bill[2],tax;
		int choice3;
	scanf("%d",&choice2);
	switch(choice2){
	case 1:
		printf("\nEnter your total electricity bill: ");
		scanf("%f",&bill[0]);
		bill[2]=bill[0];
		printf("\nEnter 1 (If industrial consumer)\nEnter 2 (If Commercial consumer)\nEnter 3 (If Domestic consumer))\n");
		scanf("%d",&choice3);
		printf("\n");
		if(bill<=500 && choice3!=3){
			printf("\t\t....Your taxation amount is 0%%....\n");
			break;
		}
		else if(bill[0]>500 && bill[0]<=20000 && choice3!=3){
			tax=bill[0]*(0.1);
		}
		else if(bill[0]>20000 && choice3==2){
			tax=bill[0]-20000;
			tax=tax*(0.12);
			tax=tax+1950;
		}
		else if(bill[0]>20000 && choice3==1){
			tax=bill[0]-20000;
			tax=tax*(0.05);
			tax=tax+1950;	
	}
	    else if(bill[0]<25000 && choice3==3){
	    printf("\t\t....Your taxation amount is 0%%....\n");
	    break;
	}
	    else if(bill[0]>=25000 && choice3==3){
	    	tax=bill[0]*(0.75);
	}
	printf("Your monthly bill: %.2f\n",bill[2]);
	if (choice3==1){
	printf("Your bill category is Industrial\n");
	}
	else if (choice3==2){
	printf("Your bill category is Commmercial\n");
	}
	else if (choice3==3){
	printf("Your bill category is Domestic\n");
	}
	printf("Total tax on your electricity bill: %.2f\n",tax);
	break;
	case 2:
		printf("\nEnter your monthly telephone bill: ");
		scanf("%f",&bill[1]);
		if(bill[1]<=1000){
		}
		else if(bill[1]>1000){
			bill[1]=bill[1]*(0.1);
			printf("Total tax amount on monthly telephone bill: %.2f\n",bill[1]);
		}
		break;
	default:
		break;
	}
	break;
	case 5:
	break;
	}
	}
int zakat(){
	float gold,silver,cash,assets,debts,property,funds,totalincome,stocks,expenses,bussinessexpenses,loans,totalexpenses,zakatwealth,paidzakat;
	char proceed;
	
	printf("\n\t\t\t\t\tPAKISTAN'S ZAKAT CALCULATOR\n\n");
	printf("Enter the amount of Silver (in Rs) that you own:  ");
	scanf("%f",&silver);
	printf("\nEnter the amount of Gold (in Rs) that you own:  ");
	scanf("\n%f",&gold);
    printf("\nEnter the amount of Cash that you own:  ");
	scanf("\n%f",&cash);
	printf("\nEnter the amount of Debts (in Rs) owed to you:  ");
	scanf("\n%f",&debts);
	printf("\nEnter the value of any bussiness Assets (in Rs) that you own:  ");
	scanf("\n%f",&assets);
	printf("\nEnter the value of any Investment Property (in Rs) that you own:  ");
	scanf("\n%f",&property);
	printf("\nEnter the value of any saving funds/Certificates (in Rs) that you own:  ");
	scanf("\n%f",&funds);
	printf("\nEnter the value of any shares/stocks (in Rs) that you own:  ");
	scanf("\n%f",&stocks);
	totalincome= gold+silver+cash+assets+debts+property+funds+stocks;
	printf("\n\nEnter All Your Immediate Needs And Living Expenses below\n\n");
	printf("Enter Your Personal/Living expenses:  ");
	scanf("\n%f",&expenses);
	printf("\nEnter Any debts that you owe:  ");
	scanf("\n%f",&loans);
	printf("\nEnter bussiness expenses:  ");
	scanf("\n%f",&bussinessexpenses);
	totalexpenses= expenses+loans+bussinessexpenses;
	zakatwealth= totalincome-totalexpenses;
	if (zakatwealth<778875){
		printf("\n\n\t\t\t\t\tZakat is not Obligatory on you.\n");
	} else if (zakatwealth>=778875){
		printf("\n\nZakat is Obligatory on you! Press (y) to know your zakat amount or Press (n) to exit\n\n");
		printf("Do you want to Proceed?  ");
		scanf("\n%c",&proceed);
		switch (proceed){
			case 'y':
			case 'Y':
				paidzakat= zakatwealth*0.025;
				printf("\n\n\t\t\t\tThe amount of Zakat payable on you for this year:  %.3f",paidzakat);
				break;
			case 'n':
			case 'N':
				printf("\n\n\t\t\t\t\tThankyou For using our services!");
				break;
				default:
					printf("\n\n\t\t\t\t\tThankyou For using our services!");
		} 
	}		
}
int main(){
	printf("\t\t\t\tWelcome to Zakat and Tax calculator of Pakistan\n");
	char choice;
	int n;
	printf("\n\nEnter 1 to end the program: ");
	scanf("%d",&n);
	while(n!=1){
	printf("\nEnter Z/z for zakat calculator or T/t for tax  calculator: ");
	scanf(" %c",&choice);
	switch (choice){
			case 'Z':
			case 'z':
	 	 zakat();
	 	printf("\nEnter 1 to end the program: ");
	    scanf("%d",&n);
	 	 break;
			case 't':
			case 'T':
	 	 tax();
	 	
		 printf("\nEnter 1 to end the program: ");
	    scanf("%d",&n);
	 	 break;
	 	 default:
	 	 	printf("\nYou entered invalid character (Please try again)\n");
	 	 	printf("\nEnter 1 to end the program: ");
	        scanf("%d",&n);
	 	 	break;
}}	
printf("\n\n\t\t\t\t....Thankyou For using our services!....");
return 0;
}
