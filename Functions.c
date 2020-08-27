#include <stdio.h>


void print(float number) {
	printf("Your number is %.2f\n", number);
}

float del (float a, float b){
	float res;
	if (b != 0)
		res = a / b;
	else
		res = 0;
	return res;
}

int main()
{
	float num1 = 5.0, num2 = 25.0;
//	scanf("%d", &num1);
//	scanf("%d", &num2);
	float result = del (num1, num2);
	print(result);
	

	return 0;
}