#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float x,y;
    scanf("%f%f", &x, &y);

    float logaritam = x + 6.75 * y;
    float z = 23.2 * asin(logaritam/(13.6 + pow(y, 4)));

    if (!isnan(z))
        printf("%g\n", z);
    else 
        printf("NaN");
    return 0;
}