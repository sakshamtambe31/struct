#include<stdio.h>
#include<tring.h>
int main(){
	int a,b;
	printf("\n Enter the value of a and b \t");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("\n after exchanging\n");
	printf(" =%d\n ",x);
	printf("= %d\n",y);
}
swap(int *x.int *y){
	int temp;
	temp = *x;
	*x=*y;
	*y=temp;
}
