/*BMI calculator
input natural number
first value is height and the former is weight*/
#include<stdio.h>
int main() {
	float h, w, bmi;
	printf("Enter your height(cm.) : ");
	scanf_s("%f", &h);
	printf("Enter your weight(kg.) : ");
	scanf_s("%f", &w);
	bmi = w / (h * h * 0.0001);
	printf("Your BMI : %.2f\n", bmi);
	if (bmi >= 25) printf("Obesity");
	else if (bmi >= 23) printf("Overweight");
	else if (bmi >= 18.5) printf("Normal");
	else if (bmi >= 0)printf("Underweight");
	else printf("Error");
	return 0;
}
