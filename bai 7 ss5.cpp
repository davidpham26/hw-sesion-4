#include <stdio.h>

int main() {
    int year;

    // Y�u cau user nhap so nam 
    printf("Nhap mot n�m: ");
    scanf("%d", &year);

    // Kiem tra xem nam c� phai nam nhuan kh�ng
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Nam %d l� nam nhuan.\n", year);
    } else {
        printf("Nam %d kh�ng phai l� nam nhuan.\n", year);
    }

    return 0;
}

