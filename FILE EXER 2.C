#include<stdio.h>
#include<stdlib.h>
void WriteToFile(){
	FILE*file = fopen("data.txt","W");
	if(file==NULL){
		perror("error opening file");
		exit(1);
	}
char sentence [101];
printf("enter a sentence (upto 100 characters):");
fgets(sentence,sizeof(sentence),stdin);
fprintf(file,"%s",sentence);
fclose(file);
printf("sentence written to file successfully.\n");
}
void ReadFromFile(){
	FILE*file=fopen("data.txt","r");
	if(file == NULL){
		perror("error reading file");
		exit[1];
	}	
char ch;
printf("file content:\n");
while((ch= fgetc(file))!=EOF){
	putchar(ch);
}	
fclose(file);
printf("\n");
}	
void AppendToFile(){
	FILE*file= fopen("data.txt","a");
	if(file==NULL){
		perror("error opening file"); 
		exit[1];
	}	
char sentence[101];
printf("enter another sentence to append (up to 100 characters):");
fgets(sentence,sizeof(sentence),stdin);
fprintf(file,"%s",sentence);
fclose(file);
printf("sentence appended to file successfully.\n");
}
int main(){
	WriteToFile();
	ReadFromFile();
	AppendToFile();
	ReadFromFile();
	
	return 0;
}