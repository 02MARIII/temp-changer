#include <stdio.h>
#include <ctype.h>

void cil(float *dd)
{
    printf("\nWhat is C temp: ");
    scanf("%f", dd);
    *dd = (*dd * 9 / 5) + 32;
    printf("\nThe temp in F is : %.1f\n", *dd);
}
void far(float *dd)
{
    printf("\nWhat is F temp: ");
    scanf("%f", dd);
    *dd = ((*dd - 32) * 5) / 9 ;   
    printf("\nThe temp in C is : %.1f\n", *dd);
}
int main(void)
{
    char unit;
    float temp;
    float *dd = NULL;
    dd = &temp;
    printf("\nis the temp in <F> or <C>?: ");
    scanf("%c", &unit);
    unit = toupper(unit);
    if (unit == 'F') 
        far(dd);
    else if (unit == 'C')
        cil(dd);
    else
        printf("\nInvalid input %c", unit);
}

