#include<stdio.h>
#include<string.h>
struct student{
	char name[20];
	int roll;
	float per;
};
int main(){
	struct students obj;
	printf("\n Enter name,roll number and percentage\n");
	scanf("%s %d %f",&obj.name,&obj.roll,&obj.per);
	printf("\n Name = %s",obj.name);
	printf("\n Roll no. = %s",obj.roll);
	printf("\n Percetage = %s",obj.per);
	printf("\n size of structure = %d",sizeof(obj));
}
