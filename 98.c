#include <math.h>
#include <stdio.h>

int main(){

    float z, y;
    scanf("%f%f", &z, &y);
    float tmp = y + z;


    float w = 16.2 * log(sin(tmp) * sin(tmp)/(y - 2*z));

    if (!isnan(w)){
        printf("%g\n", w);
    }
    else {
        printf("-NaN");
    }
    return 0;
}