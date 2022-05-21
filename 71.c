#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(){

    float a, b;
    scanf("%f%f", &a, &b);

    float r = sqrt(a + sin(b))/(13.4  + a * b);
    
    if (!isnan(z))
         printf("%g\n", r);
    else
        printf("Nan");
    return 0;
}