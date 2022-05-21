#include <stdio.h>
#include <math.h>

int main(){

    float p, eps, r2, r1;
    scanf("%f%f%f%f", &p, &eps, &r2, &r1);
    printf("%f %f %f %f\n", p, eps, r2, r1);
    float alfa;
    for (alfa = 0.1; alfa < 0.5;){
        float u = p * alfa / (4 * 3.14 * eps) * (r1 - r2)/(r2 * r1);
        printf("%f\n", u);
        alfa += 0.05;
    }


    return 0;
}