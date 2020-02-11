#include <stdio.h>

int reverse_integer(int);
int is_palindrome(int);

int main(void) {
    int res = 0;
    for (int i = 999; i > 99; i--) {
        for (int j = i; j > 99; j--) {
            if (is_palindrome(i*j)) {
                if (i*j > res) {
                    res = i*j;
                }
            }
        }
    }
    printf("Result: %d\n", res);
}

int reverse_integer(int number) {
    int reverse = 0;
    int last_digit = 0;
    while (number > 0) {
        last_digit = number % 10;
        reverse = reverse*10 + last_digit;
        number = number/10;
    }
    return reverse;
}

int is_palindrome(int number) {
    return (number == reverse_integer(number));
}
