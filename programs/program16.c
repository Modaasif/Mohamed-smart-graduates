#include <stdio.h>
int main()
{
int dividend, divisor, quotient, remainder;
printf("Enter divided: ");
scanf("%d",&dividend);
printf("Enter divisor: ");
scanf("%d", &divisor);

quotient = dividend / divisor;

remainder = dividend % divisor;

printf("Quotient = %d\n", quotient);
printf("Remainder = %d", remainder);


return 0;
}
