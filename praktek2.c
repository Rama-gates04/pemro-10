#include <stdio.h>

struct zodiak {
    char nama[11];
    int tgl_awal;
    int bln_awal;
    int tgl_akhir;
    int bln_akhir;
};

int main(void) {
    static struct zodiak bintang = {
        "Sagitarius", 22, 11, 21, 12
    };

    int tgl_lhr, bln_lhr, thn_lhr;

    printf("Masukkan tgl lahir Anda (DD-MM-YYYY): ");
    scanf("%d-%d-%d", &tgl_lhr, &bln_lhr, &thn_lhr);

    if ((bln_lhr == bintang.bln_awal &&
         tgl_lhr >= bintang.tgl_awal) ||
        (bln_lhr == bintang.bln_akhir &&
         tgl_lhr <= bintang.tgl_akhir)) {

        printf("Bintang Anda adalah %s\n", bintang.nama);
    } else {
        printf("Bintang Anda bukan %s\n", bintang.nama);
    }

    return 0;
}