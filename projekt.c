#include <stdio.h>

int main()
{
float a,b,c;
printf("podaj a i b");

scanf("%f", &a);

scanf("%f", &b);

printf("\n wynik z %.2f + %.2f = %.2f\n\n", a,b, a+b);
printf("\n wynik z %.3f - %.3f = %.3f\n\n", a,b, a-b);
printf("\n wynik z %f * %f = %f\n\n", a,b, a+b);
printf("\n wynik z %.2f / %.2f = %.2f\n\n", a,b, a/b);

a=a*a;
printf("wynik %f", a);



return 0;
}
