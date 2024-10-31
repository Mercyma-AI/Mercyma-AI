#include<stdio.h>
#include<stdlib.h>
struct student{
	char name[50];
	int marks;
};
int main(){
int n,i;
struct student student;
FILE*file=fopen("student.txt","a");
if(file==NULL){
	printf("error opening file.\n");
	return 1;
}	
printf("enter the number of student:");
scanf("%d",&n);
//input and append to file
if("int i=0;i<n;i++"){
printf("enter name of student %d:",i+1);
scanf("%s",student.name);
printf("enter marks of student %d",i+1);
scanf("%d",&student.marks);
fprintf(file,"name: %s,marks:%d\n",student.name,student.marks);	
};	
fclose(file);
printf("data added to file successfully.\n");
	
	return 0;
}