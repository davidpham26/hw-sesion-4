#include <stdio.h>

int main() {
    int target = 24;
	 // So nguyen cho truoc
    int userInput;

    printf("Nhap v�o mot so cho den khi tr�ng voi so cho truoc (%d) de ket thuc:\n", target);

    do {
        printf("Nhap so: ");
        scanf("%d", &userInput);

        if (userInput != target) {
            printf("Sai, roi nhe!\n");
        }
    } while (userInput != target);

    

    return 0;
}

