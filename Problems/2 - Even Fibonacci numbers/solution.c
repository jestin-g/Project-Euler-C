#include <stdio.h>
#include <stdlib.h>

int sum_of_even_valued_fibonacci();

int main(void) {
    printf("Result: %d\n", sum_of_even_valued_fibonacci());
    return 0;
}

int sum_of_even_valued_fibonacci() {

    int count = 0;

    int fibo[3] = {0,0,1};

    while (fibo[2] < 4000000) {
        fibo[0] = fibo[1];
        fibo[1] = fibo[2];
        fibo[2] = fibo[0] + fibo[1];
        if (fibo[2] % 2 == 0) {
            count += fibo[2];
        }
    }
    return count;
}
