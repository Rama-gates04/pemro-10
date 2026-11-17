#include <stdio.h>
#include <string.h>

struct date {
    int month;
    int day;
    int year;
};

struct student {
    char name[30];
    struct date birthday;
};

struct student mhs;

int main(void) {
    strcpy(mhs.name, "MUHAMMAD IHSAN");

    mhs.birthday.month = 8;
    mhs.birthday.day = 10;
    mhs.birthday.year = 1970;

    printf("Name     : %s\n", mhs.name);
    printf("Birthday : %d-%d-%d\n",
           mhs.birthday.month,
           mhs.birthday.day,
           mhs.birthday.year);

    return 0;
}