#include <stdio.h>
#include "myMath.h"

int main()
{
	double num;
	printf("Please inset a real number:\n");
	scanf("%lf",&num);
	printf("The value of f(𝑥) = 𝑒^𝑥 + 𝑥^3 − 2 at the point %.4lf is :%.4lf \n",num,(Exponent((int)num))+(Power(num,3))-2);
	printf("The value of f(𝑥) = 3x + 2X^2 at the point %.4lf is :%.4lf \n",num,3*num+2*(Power(num,2)));
	printf("The value of f(𝑥) = (4x^3)/5 -2x at the point %.4lf is :%.4lf \n",num,(4*(Power(num,3)))/5-2*num);

	return 0;
}
