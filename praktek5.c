#include <stdio.h>

struct koordinat {
    int x;
    int y;
};

void tukar_xy(int *a, int *b);

int main(void) {
    struct koordinat posisi;

    printf("Masukkan koordinat posisi (x, y): ");
    scanf("%d, %d", &posisi.x, &posisi.y);

    printf("x, y semula   = %d, %d\n",
           posisi.x, posisi.y);

    tukar_xy(&posisi.x, &posisi.y);

    printf("x, y sekarang = %d, %d\n",
           posisi.x, posisi.y);

    return 0;
}

void tukar_xy(int *a, int *b) {
    int z;

    z = *a;
    *a = *b;
    *b = z;
}