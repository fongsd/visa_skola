#include <stdio.h>
#include <math.h>

int main(){

    int n = 10;
    float tacke[n][2];

    for (int i = 0 ; i  < n; i++)
    {
        tacke[i][0] = i;
        tacke[i][1] = i;
        printf("%f\n", atan2(tacke[i][1], tacke[i][0]) * 180 / M_PI);
    }


    return 0;
}