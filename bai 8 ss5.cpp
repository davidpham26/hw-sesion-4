#include <stdio.h>

int main() {
    float a, b, c;

    // Y�u cau nguoi d�ng nhap 3 canh
    printf("Nhap canh thu nhat: ");
    scanf("%f", &a);
    printf("Nhap canh thu hai: ");
    scanf("%f", &b);
    printf("Nhap canh thu ba: ");
    scanf("%f", &c);

    // kiem tra dieu kien cua tam giac 
    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)) {
        printf("L� 3 canh tam gi�c.\n");
    } else {
        printf("Kh�ng phai 3 canh tam gi�c.\n");
    }

    return 0;
}

