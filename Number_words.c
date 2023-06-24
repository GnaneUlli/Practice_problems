
#include <stdio.h>

void printOnesPlace(int num) {
    
    switch (num) {
            
        case 1:
            
            printf("one");
            break;
            
        case 2:
            
            printf("two");
            break;
            
        case 3:
            
            printf("three");
            break;
            
        case 4:
            
            printf("four");
            break;
            
        case 5:
            
            printf("five");
            break;
            
        case 6:
            
            printf("six");
            break;
            
        case 7:
            
            printf("seven");
            break;
            
        case 8:
            
            printf("eight");
            break;
            
        case 9:
            
            printf("nine");
            break;
            
        default:
            break;
    }
}

void printTeens(int num) {
    
    switch (num) {
        case 10:
            printf("ten");
            break;
        case 11:
            printf("eleven");
            break;
        case 12:
            printf("twelve");
            break;
        case 13:
            printf("thirteen");
            break;
        case 14:
            printf("fourteen");
            break;
        case 15:
            printf("fifteen");
            break;
        case 16:
            printf("sixteen");
            break;
        case 17:
            printf("seventeen");
            break;
        case 18:
            printf("eighteen");
            break;
        case 19:
            printf("nineteen");
            break;
        default:
            break;
    }
}

void printTensPlace(int num) {
    switch (num) {
        case 2:
            printf("twenty");
            break;
        case 3:
            printf("thirty");
            break;
        case 4:
            printf("forty");
            break;
        case 5:
            printf("fifty");
            break;
        case 6:
            printf("sixty");
            break;
        case 7:
            printf("seventy");
            break;
        case 8:
            printf("eighty");
            break;
        case 9:
            printf("ninety");
            break;
        default:
            break;
    }
}

void printNumberInWords(int num) {
    if (num < 0 || num > 9999) {
        printf("Invalid number.\n");
        return;
    }

    if (num == 0) {
        printf("zero");
        return;
    }

    if (num >= 1000) {
        printOnesPlace(num / 1000);
        printf(" thousand ");
        num %= 1000;
    }

    if (num >= 100) {
        printOnesPlace(num / 100);
        printf(" hundred ");
        num %= 100;
    }

    if (num >= 20) {
        printTensPlace(num / 10);
        printf(" ");
        num %= 10;
    }

    if (num >= 10) {
        printTeens(num);
        return;
    }

    if (num > 0) {
        printOnesPlace(num);
    }
}

int main() {
    int number;
    
    printf("Enter a number (0-9999): ");
    scanf("%d", &number);
    
    printf("Number in words: ");
    printNumberInWords(number);
    printf("\n");
    
    return 0;
}
