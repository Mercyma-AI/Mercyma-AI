//programming
/*
Author:Mercy Maruk
Reg No:PA107/G/22907/24
Date:29/9/24
*\
#include<stdio.h>
int main(){
	int bookID,dueDate,returnDate,daysOverdue,fineRate,fineAmount
	printf("bookID");
	scanf("%d",bookID);
	printf("dueDate");
	scanf("%d",dueDate);
	printf("returnDate");
	scanf("%d",returnDate);
	
	daysOverdue=returnDate-dueDate
	if(daysOverdue <=7){fineRate=ksh 20/day}
    else if(daysOverdue >=8 &daysOverdue<=14){
    	fineRate=ksh 20/day
    	fineAmount=(daysOverdue-7)*fineRate
    	else
		{
			fineRate=ksh 50/day
			fineAmount=(7*20)+(daysOverdue-14)*fineRate
		} 
	printf("bookID:%d\n",bookID);
	printf("daysOverdue:%d\n",daysOverdue)
	printf("fineAmount:%d\n",fineAmount)
	
	return o;
		
}