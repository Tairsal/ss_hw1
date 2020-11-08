
#define EXPO (2.71828182846)

double Exponent(int x){
double result =1;
int i;
for (i=x; i>0; i--)
{
result = result*EXPO;
}
return result;
}

double Power(double x , int y){
double result = 1;
int j;
for (j=y; j>0; j--)
{
result = result*x;
}
return result;
}
