#include <stdio.h>

#define N 10
#define M 10

int main() {
    int tomb[N];            // létrehozzuk az N méretű, 1 dimenziós tömböt
    int i;
    for (i = 0; i < M; ++i) {
        tomb[i] = i + 1;    // Megyünk sorban a tömb elemein és mindnek értéket adunk,
                            // méghozzá úgy, hogy az i. indexű elem az i+1 értéket kapja.
    }
    for (i = 0; i < M; ++i) {
        printf(" %d", tomb[i]);
    }
    return 0;
}