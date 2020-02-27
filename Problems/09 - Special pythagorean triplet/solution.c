#include <stdio.h>

int special_pythagorean_triplet();

int main(void) {
    printf("Result: %d\n", special_pythagorean_triplet());
}

int special_pythagorean_triplet() {
    for (int a = 0; a <= 1000; a++) {
        for (int b = a+1; b <= 1000; b++) {
            for (int c = b+1; c <= 1000; c++) {
                if (((a*a) + (b*b)) == (c*c)) {
                    if ((a+b+c) == 1000) {
                        return a*b*c;
                    }
                }
            }
        }
    }
    return -1;
}
