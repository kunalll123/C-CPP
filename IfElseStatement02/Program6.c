#include <stdio.h>

int main() {
    int num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is divisible by both 3 and 7
    if (num % 3 == 0 && num % 7 == 0) {
        printf("%d is divisible by 3 and 7\n", num);
    } else {
        printf("%d is not divisible by 3 and 7\n", num);
    }

    return 0;
}
