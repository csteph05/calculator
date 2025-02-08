#include <stdio.h>

int main ()
{
	char op;
	float num1, num2;
	float result;
	
	printf("Enter an Operation: ");
	scanf("%c", &op);
	printf("Enter the first value: ");
	scanf("%f", &num1);
	printf("Enter the second value: ");
	scanf("%f", &num2);
	
	switch(op)
	{
		case '+': 
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '/':
			result = num1 / num2;
			 break;
		case 'x':
			result = num1 * num2;
			break;
	}
	
	printf("The result of %f and %f is %f", num1, num2, result);
	printf("Thank you!");
	
	return 0;
}
