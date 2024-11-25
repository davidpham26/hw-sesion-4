#include <stdio.h>

int main() {
    int year;

    // Yêu cau user nhap so nam 
    printf("Nhap mot nãm: ");
    scanf("%d", &year);

    // Kiem tra xem nam có phai nam nhuan không
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Nam %d là nam nhuan.\n", year);
    } else {
        printf("Nam %d không phai là nam nhuan.\n", year);
    }

    return 0;
}

