#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Y�u c?u ng�?i d�ng nh?p 3 s? nguy�n
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    printf("Nhap so thu ba: ");
    scanf("%d", &num3);

    // Kiem tra so thu ba c� nam trong khoang giua so thu nhat v� thu hai hay kh�ng
    if ((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1)) {
        printf("So thu ba (%d) nam trong khoang giua %d v� %d.\n", num3, num1, num2);
    } else {
        printf("So thu ba (%d) kh�ng nam trong khoang giua %d v� %d.\n", num3, num1, num2);
    }

    return 0;
}

