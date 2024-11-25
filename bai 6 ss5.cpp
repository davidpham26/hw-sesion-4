#include <stdio.h>

int main() {
    int old_index, new_index, usage;
    long long total_cost;

    // nhap chu so cu va moi 
    printf("Nhap chu so cu: ");
    scanf("%d", &old_index);
    printf("Nhap chu so moi: ");
    scanf("%d", &new_index);

    // kiem tra chu so hop ly 
    if (new_index < old_index) {
        printf("Chu so moi phai lon hon hoac bang so cu.\n");
        return 1;
    }

    // Tính so tien dien 
    usage = new_index - old_index;

    // Tính tien dien
    if (usage <= 50) {
        total_cost = usage * 10000;
    } else if (usage <= 100) {
        total_cost = 50 * 10000 + (usage - 50) * 15000;
    } else if (usage <= 150) {
        total_cost = 50 * 10000 + 50 * 15000 + (usage - 100) * 20000;
    } else if (usage <= 200) {
        total_cost = 50 * 10000 + 50 * 15000 + 50 * 20000 + (usage - 150) * 25000;
    } else {
        total_cost = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (usage - 200) * 30000;
    }

    // In ket qua 
    printf("So dien tieu thu: %d kWh\n", usage);
    printf("tien dien phai tra: %lld VND\n", total_cost);

    return 0;
}

