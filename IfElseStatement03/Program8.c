#include <stdio.h>

int main() {
    float percent;

    
    printf("Enter the percentage: ");
    scanf("%f", &percent);

    
    if (percent >= 75) {
        printf("Passed: first class with distinction\n");
    } else if (percent >= 60) {
        printf("Passed: first class\n");
    } else if (percent >= 50) {
        printf("Passed: second class\n");
    } else if (percent >= 35) {
        printf("Passed: pass\n");
    } else {
        printf("Failed\n");
    }

    return 0;
}

