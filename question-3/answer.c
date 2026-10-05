// Find maximum and minimum elements using pointer arithmetic.
#include <stdio.h>

int main(void) {
    int a[] = {12, 5, 27, 3, 19};
    int n = sizeof(a) / sizeof(a[0]);
    int *p = a;
    int max = *p;
    int min = *p;

    for (int i = 1; i < n; i++) {
        if (*(p + i) > max)
            max = *(p + i);
        if (*(p + i) < min)
            min = *(p + i);
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
