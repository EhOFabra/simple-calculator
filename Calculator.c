#include <stdlib.h>
#include <stdio.h>

int main(){
	char op;
	char add = '+', sub = '-', div = '/', mult = '*';
	printf("Which operation do you want to do? ( +, -, /, *): ");
	scanf("%c", &op);
	float a,b;

	if (op == add){
		scanf("%f", &a);
		printf("+\n");
		scanf("%f", &b);
		printf("\nResult: %f\n", a + b);
		return 0;
	}
	if (op == sub){
		scanf("%f", &a);
		printf("-\n");
		scanf("%f", &b);
		printf("\nResult: %f\n", a - b);
		return 0;
	}
	if (op == div){
		scanf("%f", &a);
		printf("/\n");
		scanf("%f", &b);
		printf("\nResult: %f\n", a / b);
		return 0;
	}
	if (op == mult){
		scanf("%f", &a);
		printf("*\n");
		scanf("%f", &b);
		printf("\nResult: %f\n", a * b);
		return 0;
	}
	else {
		printf("Invalid command\n");
		return 0;
	}
	return 0;
}
