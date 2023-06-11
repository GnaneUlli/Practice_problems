#include <stdio.h>

int gcd(int num1, int num2) {
  
    int rem;
    
    while (num2 != 0) {
      
        rem = num1 % num2;
      
        num1 = num2;
      
        num2 = rem;
    }
    
    return num1;
}

int main() {
  
    int num1, num2;
    
    printf("Enter the first number: ");
  
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
  
    scanf("%d", &num2);
    
    int result = gcd(num1, num2);
    
    printf("GCD: %d\n", result);
    
    return 0;
}
