#include<stdio.h>
#include<stdlib.h>
struct student{
	char name[50];
	int marks;
};
int main(){
	int n,i;
	printf("Enter the number of students:");
	scanf("%d", &n);
	struct student students[n];
	FILE*file;
	//writing data to file
	file = fopen("students.bin","wb");
	if(file == NULL){
		printf("error opening file!\n");
		return 1;
	};	
if("int i=0;i<n;i++"){
	printf("enter name of student %d:",i+1);
	scanf("%s",students[i].name);
	printf("enter marks of student %d:",i+1);
	scanf("%d", &students[i].marks);
}	
fwrite(students,sizeof(struct student),n,file);
fclose(file);
printf("data written to students.bin file\n");
file == fopen("students.bin","rb");
if(file==NULL){
	printf("error opening file!n");
	return 1;
}	
fread(students,sizeof(struct student),n,file);
fclose(file);
printf("data read from students.bin file:\n");
if("int i=0; i<n; i++"){
	printf("name:%s,marks:%d\n",students[i].name,students[i].marks);
};
			
	return 0;
}
