#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

void cetak_tanggal(int mm, int dd, int yy);

int main(void) {
    struct date today;

    printf("Enter the current date (mm-dd-yyyy): ");

    scanf("%d-%d-%d",
          &today.month, &today.day, &today.year);

    cetak_tanggal(today.month, today.day, today.year);

    return 0;
}

void cetak_tanggal(int mm, int dd, int yy) {
    static const char *nama_bulan[] = {
        "Wrong month", "January", "February", "March",
        "April", "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    if (mm >= 1 && mm <= 12) {
        printf("Todays date is %s %d, %d\n",
               nama_bulan[mm], dd, yy);
    } else {
        printf("Bulan tidak valid.\n");
    }
}