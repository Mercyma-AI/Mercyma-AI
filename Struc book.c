//program to define book
#include<stdio.h>
#include<string.h>
struct book{
	char title[30];
	char author[30];
	char ISBN[13];
	int publication_year;
	float price;
	};
int main(){
	struct book mybook;
	
	strcpy(mybook.title,"Introduction to c programming");
	strcpy(mybook.author,"John smith");
	mybook.publication_year = 2022;
	strcpy(mybook.ISBN,"9780131103627");
	mybook.price = 49.99;
	
	printf("Title: %s\n", mybook.title);
	printf("Author: %s\n",mybook.author);
	printf("ISBN: %s\n",mybook.ISBN);
	printf("Publication year: %d \n",mybook.publication_year);
	printf("price: %.2f\n",mybook.price);	
	
	return 0;
}