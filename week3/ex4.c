#include<stdio.h>
#include<math.h>
int main() {
    printf(" x |");
    for (int i = 1; i <= 10; i++) {
        // reduce whitespace gap with number that has more than 2 digits
        if (i / 10 != 0) {
            printf("  %d", i);
            continue;
        }
        printf("   %d", i);
    }
    printf("\n");

    for (int i = 1; i <= 44; i++) {
        printf("-");
    }
    printf("\n");

    int val;

    for (int i = 1; i <= 10; i++) {
        if (log10(i) + 1 == 2) { // number of digits
            printf("%d |", i);
        } else {
            printf(" %d |", i);
        }

        for (int j = 1; j <= 10; j++) {
            val = i * j;
            int num_of_digits = log10(val) + 1;
            int num_of_space = 4 - num_of_digits;
            for (int k = 0; k < num_of_space; k++) {
                printf(" ");
            }
            
            printf("%d", val);
        }
        printf("\n");
    }

    return 0;
}