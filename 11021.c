#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int A[n], B[n];
    for (i = 0; i < n; i++) {
        scanf("%d %d", &A[i], &B[i]);
    }

    for (i = 0; i < n; i++) {
        printf("Case #%d: %d\n", i + 1, A[i] + B[i]);
    }

    return 0;

}