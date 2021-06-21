#include <stdio.h>
int main() {
    int term1 = 0, term2 = 1, nextTerm = 0, n;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    
    printf("Fibonacci Series: %d, %d, ", term1, term2);
    nextTerm = term1 + term2;

    for (n=1;nextTerm <= n;n++) {
        printf("%d, ", nextTerm);
        term1 = term2;
        term2 = nextTerm;
        nextTerm = term1 + term2;
    }

    return 0;
}
