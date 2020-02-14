#include <stdio.h>

int sum_square_difference();

int main(void) {
    printf("Result: %d\n", sum_square_difference());
    return 0;
}

int sum_square_difference() {
    int sum_square = 0;
    int square_sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum_square += i*i;
        square_sum += i;
    }
    square_sum *= square_sum;
    return square_sum - sum_square;
}
