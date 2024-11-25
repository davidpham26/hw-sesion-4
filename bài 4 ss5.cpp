#include <stdio.h>

int main() {
    int month;

    // Yêu cau nguoi dùng nhap so tháng
    printf("Nhap so tháng (1-12): ");
    scanf("%d", &month);

    // Kiem tra tháng và in ra so ngày
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Tháng %d có 31 ngày.\n", month);
            break;
        case 4: case 6: case 9: case 11:
            printf("Tháng %d có 30 ngày.\n", month);
            break;
        case 2:
            printf("Tháng 2 có 28 hoac 29 ngày (nam nhuan).\n");
            break;
        default:
            printf("So tháng không hop le.\n");
            break;
    }

    return 0;
}

