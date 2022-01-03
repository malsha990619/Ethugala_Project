#include<stdio.h>
void Display()
{printf("********** NIVK Taxi service ***********\n\n");
printf("CAR ~ 1\t\tVAN ~ 2\t\tBUS ~ 3\t\t\n\n");
printf("****************************************\n\n");
	}
void vehcle1()
{int cm=0,pm=0,km=0,fixed=0,amount=0;
fixed=1000;
		printf("Enter the current meter: ");
		scanf("%d",&cm);
		printf("Enter the previous meter: ");
		scanf("%d",&pm);
		printf("\n*****************************\n");
		km=cm-pm;
		if(km>300)
			{
			amount = (300*70)+(km-300)*100+fixed;
			printf("kilo meter: %d\n",km);
			printf("Amount: %d\n",amount);
			}
		else{
			amount = (km*70)+fixed;
			printf("Amount: %d\n",amount);
			}
		}
void vehicle2()
{int cm=0,pm=0,km=0,fixed=0,amount=0;
fixed=1500;
		printf("Enter the current meter: ");
		scanf("%d",&cm);
		printf("Enter the previous meter: ");
		scanf("%d",&pm);
		km=cm-pm;
		if(km>300)
			{
			amount = (300*70)+(km-300)*100+fixed;
			printf("Amount: %d\n",amount);
			}
		else{
			amount = (km*70)+fixed;
			printf("Amount: %d\n",amount);
			}}
void vehicle3(){
int cm=0,pm=0,km=0,fixed=0,amount=0;

fixed=3000;
		printf("Enter the current meter: ");
		scanf("%d",&cm);
		printf("Enter the previous meter: ");
		scanf("%d",&pm);
		km=cm-pm;
		if(km>300)
			{
			amount = (300*70)+(km-300)*100+fixed;
			printf("Amount: %d\n",amount);
			}
		else{
			amount = (km*70)+fixed;
			printf("Amount: %d\n",amount);
			}}
void err()
{printf("~ E R R O R ~\n");}	
int main()
{
	
		int cm=0,pm=0,km=0,fixed=0,amount=0;
	    int vn;
        Display();
        printf("Input the vhicle no: ");
    	scanf("%d",&vn);
    	if(vn==1){vehcle1();}
	    	
	    
		
       else if(vn==2){vehicle2();}
	   else if(vn==3){vehicle3();}
       else{err();}
	
	  return 0;
}
