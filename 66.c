#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float x;
    scanf("%f", &x);

    if (x <= -2){
        printf("1\n");
    }
    else if (x >-2 && x <= -1){
        printf("%f\n", -1-x);
    }
    else if (x >= -1 && x <= 0)
    {
        printf("0\n");
    }
    else if (x >= 0 && x <= 1){
        printf("%f\n", x);
    }
    else if (x > 1){
        printf("%f\n", 2-x);
    }

    return 0;
}