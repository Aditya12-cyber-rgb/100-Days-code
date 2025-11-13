#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Print numbers from 1 to n
    for(i = 1; i <= n; i++) {
        printf("%d", i);
        if (i < n)
            printf(" ");  
    }

    printf("\n");
    return 0;
}
