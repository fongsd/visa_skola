#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

    double masa = 5.98 * pow(10,24);
    // printf("%f\n", masa);
    float r = 6371;
    float g = 0;
    

    for (float h = 200; h <= 800; h+=50){

        g=-(6.672 * pow(10, -11) * 5.98 * pow(10,24))/((r+h)*(r+h));
        printf("%f\n", g);
    }
    return 0;
}