#include <stdio.h>

int main() {
    int count = 50;
    unsigned long long first = 1, second = 2, next;
    int i;
    printf("%llu, %llu", first, second);

    for (i = 3; i <= count; i++) {
        next = first + second;
        printf(", %llu", next);
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}
