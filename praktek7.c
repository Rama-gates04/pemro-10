#include <stdio.h>

struct koordinat {
    int x;
    int y;
};

void tukar_xy(struct koordinat *pos_xy);

int main(void) {
    struct koordinat posisi;

    printf("Masukkan koordinat posisi (x, y): ");
    scanf("%d, %d", &posisi.x, &posisi.y);

    printf("x, y semula   = %d, %d\n",
           posisi.x, posisi.y);

    tukar_xy(&posisi);

    printf("x, y sekarang = %d, %d\n",
           posisi.x, posisi.y);

    return 0;
}

void tukar_xy(struct koordinat *pos_xy) {
    int z;

    z = pos_xy->x;
    pos_xy->x = pos_xy->y;
    pos_xy->y = z;
}