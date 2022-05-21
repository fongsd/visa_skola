#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float x;
    scanf("%f", &x);

    float z;

    if (x <= -1){
        z = x * x -13.2;
    }
    else if (x >-1 && x <= 1){
        z = asin(x*x - 0.01);
    }
    else if (x >= 1){
        z = 12.17/(x + 4.86);
    }
    
    if (!isnan(z)){
        printf("%g\n", z);
    }


    return 0;
}