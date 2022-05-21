#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float fp, df, lf, alfa;
    scanf("%f%f%f%f", &fp, &df, &lf, &alfa);

    for (float stepen = 5; stepen < 7; stepen += 0.25){

        float p = fp/(3.14*df*lf*tan((stepen + alfa/2)/(3*14 * 180)));
        printf("%g\n", p);
    }

    return 0;
}