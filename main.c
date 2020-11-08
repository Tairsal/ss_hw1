#include <stdio.h>
#include "myMath.h"

int main()
{
	double num;
	printf("Please inset a real number:\n");
	scanf("%lf",&num);
	printf("The value of f(𝑥) = 𝑒^𝑥 + 𝑥^3 − 2 at the point %.4lf is :%.4lf \n",num,add((Exponent((int)num)),sub((Power(num,3)),2)));
	printf("The value of f(𝑥) = 3x + 2X^2 at the point %.4lf is :%.4lf \n",num,add(mul(num,3),mul(Power(num,2),2)));
	printf("The value of f(𝑥) = (4x^3)/5 -2x at the point %.4lf is :%.4lf \n",num,sub(div(mul(Power(num,3),4),5) , mul(num,2)));

	return 0;
}
