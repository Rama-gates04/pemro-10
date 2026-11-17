#include <stdio.h>
#include <string.h>

#define MAKS 20

struct date {
    int month;
    int day;
    int year;
};

struct student {
    char name[30];
    struct date birthday;
};

struct student data_mhs[MAKS];

int main(void) {
    int i = 0;
    char lagi;

    do {
        printf("Name                  : ");

        if (fgets(data_mhs[i].name,
                  sizeof(data_mhs[i].name), stdin) == NULL) {
            break;
        }

        data_mhs[i].name[strcspn(data_mhs[i].name, "\n")] = '\0';

        printf("Birthday (mm-dd-yyyy) : ");

        if (scanf("%d-%d-%d",
                  &data_mhs[i].birthday.month,
                  &data_mhs[i].birthday.day,
                  &data_mhs[i].birthday.year) != 3) {
            printf("Input tanggal tidak valid.\n");
            return 1;
        }

        printf("Mau memasukkan data lagi [Y/T]? ");

        scanf(" %c", &lagi);

        while (getchar() != '\n');

        i++;

    } while ((lagi == 'Y' || lagi == 'y') && i < MAKS);

    printf("\nDATA SISWA\n");

    for (int j = 0; j < i; j++) {
        printf("%d. Name     : %s\n", j + 1,
               data_mhs[j].name);

        printf("   Birthday : %d-%d-%d\n\n",
               data_mhs[j].birthday.month,
               data_mhs[j].birthday.day,
               data_mhs[j].birthday.year);
    }

    return 0;
}