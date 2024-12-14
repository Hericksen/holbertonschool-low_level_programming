#include <stdio.h>

int main() {
    int first = 1, second = 2, next, count = 0;

    printf("%d, %d", first, second); 

    for (count = 2; count < 50; count++) {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}