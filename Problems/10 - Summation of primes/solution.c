#include <stdio.h>
#include <math.h>

long summation_of_primes();
int is_prime(int);

int main(void) {
    printf("Result: %ld\n", summation_of_primes());
}

long summation_of_primes() {
    long i = 1;
    long sum = 0;
    while (i < 2000000) {
        if (is_prime(i)) {
            sum += i;
        }
        i++;
    }
    return sum;
}

int is_prime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i < (int)sqrt(n)+1; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
