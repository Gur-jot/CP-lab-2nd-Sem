#include <stdio.h>
int main() {
    int n1, n2, n3;
    printf("Enter three integers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 >= n2) {
        if (n1 >= n3)
            printf("%d is the largest integer.", n1);
        else
            printf("%d is the largest integer.", n3);
    } else {
        if (n2 >= n3)
            printf("%d is the largest integer.", n2);
        else
            printf("%d is the largest integer.", n3);
    }

    return 0;
}
