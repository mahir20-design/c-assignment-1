#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,sum,difference,product,quotient;
	
	printf("enter firstnumber:");
	scanf("%f", &a);
	
	printf("enter secondnumber:");
	scanf("%f", &b);
	
	sum=a+b;
	difference=a-b;
	product=a*b;
	
	printf("sum:%.2f\n", sum);
	printf("difference:%.2f\n", difference);
	printf("product:%.2f\n", product);
	
	if (b !=0) { 
		quotient=a/b;
		printf("quotient:%.2f\n", quotient);
	} else {
		printf("error:cannot divide by zero.\n");
	}
	
	return 0;
}
