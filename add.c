#include <stdio.h>

int main() {
    int num66, num77, sum;
    
    printf("Enter the first number: ");
    scanf("%d", &num66);
    
    printf("Enter the second number: ");
    scanf("%d", &num77);
    
    sum = num66 + num77;
    
    printf("The sum of %d and %d is %d.", num66, num77, sum);
    
    return 0;
}
