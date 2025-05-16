/*Mini Project of Programming Basics*/		  
#include <stdio.h>
#include <string.h>

//Procedure of showing the options
void ShowOptions ()
{
	printf("\nVehicle type options:\n");
		
	printf("1. Bicycle/ Motorcycle\n");
	printf("2. Car/ Taxi/ Sedan\n");
	printf("3. Pick up/ Mini bus\n");
	printf("4. Bus/ Truck");
}
	
//Function of Processing the change money
float MoneyProcess (float cost, float paid)
{
	float change;
		
	change = paid - cost;
		
	return change;
}

//Main program
int main()
{
	int pass, i=1001, gate, day, year, option, dif, rest, hour, min, sec;
	char name[30], month[10], next, plate[12], struck;
	float cost, paid, change;
	typedef struct {
				int in;
				int out;
			   } Time;	
	Time m, d, y, hh, mm, ss, totsec;
	
	//WARNING!
	//PASSWORD : 123987
	
	printf("Input the Password : ");
	scanf("%d", &pass);

	printf("\n------------------------------------------------------\n");
		
	while (pass == 123987)
	{
		//Inputing gatekeeper operator daily work data
		printf("\nInput gate number (1/ 2/ 3/ 4/ 5/ so on) : ");
		scanf("%d", &gate);
		
		printf("Input the parking ticket keeper name : ");
		scanf("%s", &name);
			
		printf("Enter token date : ");
		scanf("%s %d %d", &month, &day, &year);
		
		printf("\n------------------------------------------------------");
		
		//Inputing driver parking data
		do
		{
			do
			{
				printf("\n\nInput date (mm dd yy) and time (hh mm ss) of entrance : ");
				scanf("%d %d %d %d %d %d", &m.in, &d.in, &y.in, &hh.in, &mm.in, &ss.in);
			
				printf("Input date (mm dd yy) and time (hh mm ss) of out : ");
				scanf("%d %d %d %d %d %d", &m.out, &d.out, &y.out, &hh.out, &mm.out, &ss.out);
				
				//Processing the time
				totsec.in = 3600 * hh.in + 60 * mm.in + ss.in;
				totsec.out = 3600 * hh.out + 60 * mm.out + ss.out;
			
				dif = totsec.out - totsec.in;
			
				hour = dif / 3600;
				rest = dif % 3600; 
				min = rest / 60;	
				sec = rest % 60;
					
				ShowOptions ();
				
				printf("\n\nSelect the vehicle type number : ");
				scanf("%d",&option);
				
				//Processing the cost based on the time
				switch (option)
				{
					case 1: 
					{
						if (hour < 1)
							{
								cost = 500;
							}
						else if (hour == 1)
							{
								cost = 1000;
							}
						else
							{
								cost = 1000 + (hour - 1) * 500;
							}
					}	
						
					printf("vehicle type : Bicycle/ Motorcycle\n");
					break;
				
					case 2: 
					{
						if (hour < 1)
							{
								cost = 1000;
							}
						else if (hour == 1)
							{
								cost = 2000;
							}
						else
							{
								cost = 2000 + (hour - 1) * 1000;
							}
					}	
							
					printf("vehicle type : Car/ Taxi/ Sedan\n");
					break;
				
					case 3:
					{
						if (hour < 1)
							{
								cost = 1500;
							}
						else if (hour == 1)
							{
								cost = 2500;		
							}
						else		
							{
								cost = 2500 + (hour - 1) * 1500;	
							}
					}	
							
					printf("vehicle type : Pick up/ Mini bus\n");
					break;
				
					case 4: 
					{
						if (hour < 1)
							{
								cost = 2000;
							}
						else if (hour == 1)
							{
								cost = 3000;
							}
						else
							{
								cost = 3000 + (hour - 1) * 2000;
							}
					}	
							
					printf("vehicle type : Bus/ Truck\n");
					break;
				
					default: printf("NOT FOUND\n");
				}
				
				printf("\nInput the vehicle license plate: ");
				scanf("%s", &plate);
				
				printf("\nPayment : Rp. %.2f", cost);
				
				printf("\nInput paid money: Rp. ");
				scanf("%f", &paid);
				
				printf("\nReturn : %.2f", MoneyProcess(cost, paid));
				
				printf("\n\nDisplay the struck? (Y/N)? ");
				scanf("%s", &struck);
				
				if (struck != 'Y')
				{
					printf ("\nThe struck was canceled!\n");
					printf("\n------------------------------------------------------");
				}
			}
			while (struck != 'Y');
			
			if (struck == 'Y')
			{
				//Displaying the struck
				printf("\n\n\n--------------------PARKING TICKET--------------------");
				printf("\n------------------------------------------------------");
				printf("\n----------------------NOTE RECORD---------------------\n\n");
			
				printf("\nGATE - %d", gate);
				
				printf("\nNO TOKEN : %d", i);
				
				printf("\nTOKEN DATE : %s-%d-%d", month, day, year);
				
				printf("\n\nLISENCE PLATE : %s", plate);
				
				printf("\nENTRY DATE & TIME : %d/%d/%d  %d:%d:%d", m.in, d.in, y.in, hh.in, mm.in, ss.in);
				printf("\nOUT DATE & TIME :  %d/%d/%d  %d:%d:%d", m.out, d.out, y.out, hh.out, mm.out, ss.out);
				printf("\nDURATION : %d h %d m %d s", hour, min, sec);
				
				printf("\n\n------------------------------------------------------");
				
				printf("\n\nTOTAL AMOUNT : Rp. %.2f", cost);
				printf("\nPAID : Rp. %.2f", paid);
				printf("\nCHANGE : Rp. %.2f", MoneyProcess(cost, paid));
				
				printf("\n\nGATEKEEPER: %s\n", name);
				
				printf("\n\n------------------------------------------------------");
				printf("\n------------THANK YOU & HAVE A NICE TRAVEL------------");
				printf("\n------------------------------------------------------\n\n");	
				
				printf("\nNext Queue? (Y/N): ");
				scanf("%S", &next);
				
				printf("\n\n");
				printf("------------------------------------------------------");
			
				if (next == 'N')
				{
					printf("\n\n\t\t--BREAK TIME--");
				
					printf("\n------------------------------------------------------\n");
				}
				
				i++;
			}
		}
		while (next == 'Y');					
	}
	printf("\nYOUR PASSWORD IS WRONG!");
	printf("\nCANNOT REACH THE PAGE");	
	
	return 0;
}
