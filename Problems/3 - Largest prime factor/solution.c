#include <stdio.h>
#include <math.h>

long largest_prime_factor(long);
int is_prime(long);

int main(void) {
    long const n = 600851475143;
    printf("Result: %ld\n", largest_prime_factor(n));
    return 0;
}

long largest_prime_factor(long n) {
    long largest = 1;
    for (long i = sqrtl(n); largest == 1; i--) {
        printf("%ld\n", i);
        if (n % i == 0) {
            if (is_prime(i)) {
                largest = i;
            }
        }
    }
    return largest;
}

int is_prime(long n) {
    for (int i = 3; i < sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
