#include<stdio.h>
#include<string.h>
struct salesorder{
	char name[20];
	int id;
	float price;
};
int main(){
	struct salesorder obj;
	printf("Enter product name,productid and its price\n");
	scanf("%s %d %f",&obj.name,&obj.id,&obj.price);
	printf("name of product = %s\n",obj.name);
	printf("name of product = %d\n",obj.id);
	printf("name of product = %f\n",obj.price);
}
