#include <stdio.h>

int main() {
    int month;

    // Y�u cau nguoi d�ng nhap so th�ng
    printf("Nhap so th�ng (1-12): ");
    scanf("%d", &month);

    // Kiem tra th�ng v� in ra so ng�y
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Th�ng %d c� 31 ng�y.\n", month);
            break;
        case 4: case 6: case 9: case 11:
            printf("Th�ng %d c� 30 ng�y.\n", month);
            break;
        case 2:
            printf("Th�ng 2 c� 28 hoac 29 ng�y (nam nhuan).\n");
            break;
        default:
            printf("So th�ng kh�ng hop le.\n");
            break;
    }

    return 0;
}

