// program to calculate the fine for overdue library book
#include<stdio.h>
#include<math.h>
int main()
{
float FA,DO,FR;
int BI,DD,RD;

printf("Enter Book ID,Due Date,Return Date=",BI,DD,RD);
scanf("%d,%d,%d",&BI,&DD,&RD);

DO=(RD-DD);

if(DO<=7){
FR=20;	
}
else if(DO<=14){
FR=50;	
}
else{
FR=100;	
}
FA=(DO*FR);
printf("\nBook ID%d\t",BI);
printf("\nDue Date%d\t",DD);
printf("\nReturn Date%d\t",RD);
printf("\nDays Overdue%.2f\t",DO);
printf("\nFine Rate%.2f\t",FR);
printf("\nFine Amount%.2f\t",FA);
return 0;
	}