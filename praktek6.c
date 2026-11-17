#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

void cetak_tanggal(struct date now);

int main(void) {
    struct date today;

    printf("Enter the current date (mm-dd-yyyy): ");

    scanf("%d-%d-%d",
          &today.month, &today.day, &today.year);

    cetak_tanggal(today);

    return 0;
}

void cetak_tanggal(struct date now) {
    static const char *nama_bulan[] = {
        "Wrong month", "January", "February", "March",
        "April", "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    if (now.month >= 1 && now.month <= 12) {
        printf("Todays date is %s %d, %d\n",
               nama_bulan[now.month],
               now.day, now.year);
    } else {
        printf("Bulan tidak valid.\n");
    }
}