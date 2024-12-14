#include <stdio.h>

int main() {
    int count = 50;
    int first = 1, second = 2, next;
    int i = 0;
    printf("%d, %d", first, second);

    for (i = 3; i <= count; i++) {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}
