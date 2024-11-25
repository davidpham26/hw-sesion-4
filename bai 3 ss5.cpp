#include <stdio.h>

int main() {
    int num;

    // cho user nhap mot so nguyen bat ki 
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    //dat va kiem tra dieu kien  
    if (num % 3 == 0 && num % 5 == 0) {
        printf("So %d chia het cho ca 3 và 5.\n", num);
    } else if (num % 3 == 0) {
        printf("So %d chia het cho 3.\n", num);
    } else if (num % 5 == 0) {
        printf("So %d chia het cho 5.\n", num);
    } else {
        printf("So %d không chia het cho 3 hoac 5.\n", num);
    }

    return 0;
}

