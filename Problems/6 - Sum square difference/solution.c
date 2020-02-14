#include <stdio.h>

int difference_between_sum_of_the_squares_of_first_one_hundred_natural_numbers_and__square_of_the_sum();

int main(void) {
    printf("Result: %d\n", difference_between_sum_of_the_squares_of_first_one_hundred_natural_numbers_and__square_of_the_sum());
    return 0;
}

int difference_between_sum_of_the_squares_of_first_one_hundred_natural_numbers_and__square_of_the_sum() {
    int sum_square = 0;
    int square_sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum_square += i*i;
        square_sum += i;
    }
    square_sum *= square_sum;
    return square_sum - sum_square;
}
