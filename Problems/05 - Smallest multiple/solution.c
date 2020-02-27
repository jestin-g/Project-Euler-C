#include <stdio.h>

int smallest_multiple();

int main(void) {
    printf("Result: %d\n", smallest_multiple());
    return 0;
}

int smallest_multiple() {
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
