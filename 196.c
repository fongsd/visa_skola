#include <stdio.h>
#include <math.h>


int main(){

    int d_niz[3][2] = {{1, 2}, {3, 4}, {1, 3}};

    int vrsta = sizeof(d_niz)/sizeof(d_niz[0]);
    int kolona = sizeof(d_niz[0])/sizeof(d_niz[0][0]);

    int n = ceil(vrsta/2);
    int f_niz[n];

    for (int i = 0, m = 0; i < vrsta; i += 2, m++){
        int p = 1;
        for (int j = 0; j < sizeof(d_niz[i])/sizeof(d_niz[0][0]); j++){
            // printf("%d ", d_niz[i][j]);
            p *= d_niz[i][j];
        }
        f_niz[m] = p;
        printf("%d\n", p);
    }

    return 0;
}