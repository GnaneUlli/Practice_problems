#include <stdio.h>

int binaryToDecimal(long long binaryNumber) {
    
    int decimalNumber = 0;
    
    int base = 1;
    
    int remainder;

    while (binaryNumber != 0) {
        
        remainder = binaryNumber % 10;
        
        decimalNumber += remainder * base;
        
        binaryNumber /= 10;
        
        base *= 2;
    }

    return decimalNumber;
}

int main() {
    
    long long binary;
    
    printf("Enter a binary number: ");
    
    scanf("%lld", &binary);
    
    int decimal = binaryToDecimal(binary);
    
    printf("Decimal equivalent: %d\n", decimal);
    
    return 0;
}
