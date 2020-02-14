#include <stdio.h>

int smallest_positive_number_divisible_by_numbers_from_1_to_20();

int main(void) {
    printf("Result: %d\n", smallest_positive_number_divisible_by_numbers_from_1_to_20());
    return 0;
}

int smallest_positive_number_divisible_by_numbers_from_1_to_20() {
    int count = 20;
    while (1) {
        for (int i = 2; i <= 20; i++) {
            if (count % i != 0) {
                break;
            }
            if (i == 20) {
                return count;
            }
        }
        count++;
    }
}
