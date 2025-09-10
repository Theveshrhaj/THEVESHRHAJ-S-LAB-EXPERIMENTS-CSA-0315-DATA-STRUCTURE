
#include <stdio.h>
int main() {
    int n;
    // Ask how many numbers the user wants to enter
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int numbers[n];
    // Get the numbers from the user
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    // Check each number for odd/even
    printf("\nResults:\n");
    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d is Even\n", numbers[i]);
        } else {
            printf("%d is Odd\n", numbers[i]);
        }
    }
    return 0;
}


