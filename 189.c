#include <stdio.h>
#include <stdlib.h>

int main(){

    int m = 4;
    int n = 3;

    int f[m][n];
    for (int i = 0 ; i < m; i++){
        for (int j = 0 ; j < n; j++)
        {
            f[i][j] = i + j;
            // printf("%d ", f[i][j]);
        }
        // printf("\n");
    }
    float w[m][n];

    int zbir = f[0][0] + f[m-1][n-1];

    if (zbir == 0){

        for (int i = 0; i < m; i++)
            {
                for (int j =0 ; j < n; j++){
                    w[i][j] = 0.1;
                }
            }

    }
    else 
    {
        for (int i = 0; i < m; i++)
            {
                for (int j =0 ; j < n; j++){
                    w[i][j] = f[i][j] * 1.0/zbir;
                    printf("%g ", w[i][j]);
                }
                printf("\n");
            }
    }


    return 0;
}