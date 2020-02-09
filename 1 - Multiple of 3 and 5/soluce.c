#include <stdio.h>

int sum_of_all_the_multiples_of_3_or_5_below_1000();

int main(void) {
    printf("Resultat: %d\n", sum_of_all_the_multiples_of_3_or_5_below_1000());
    return 0;
}

int sum_of_all_the_multiples_of_3_or_5_below_1000() {
    int count = 0;
    for (int i = 0; i < 1000; i++) {
        if ((i % 3 == 0) || (i % 5 == 0)) {
            count += i;
        }
    }
    return count;
}
