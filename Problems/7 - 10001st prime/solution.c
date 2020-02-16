#include <stdio.h>
#include <math.h>

long _10001st_prime();
int is_prime(int);

int main(void) {
    printf("Result: %ld\n", _10001st_prime());
    return 0;
}

long _10001st_prime() {
    int count = 0;
    long i = 1;
    int res = 0;
    while (count < 10001) {
        if (is_prime(i)) {
            count++;
            res = i;
        }
        i++;
    }
    return res;
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
