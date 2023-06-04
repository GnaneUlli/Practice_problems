//Sum of the digits for a given integer

#include<stdio.h>

int numbersum(int num){
    
    int sum=0,rem,temp;
    
    temp=num;
    
    while(num!=0){
        
        rem=num%10;
      
        sum+=rem;
      
        num/=10;
    }
    
    printf("The sum of digits of the given integer %d = %d\n",temp,sum);
}

int main(){
    
    int number;
    
    printf("Enter an integer : ");
    
    scanf("%d",&number);
    
    numbersum(number);
    
    return 0;
}

//Product of the digits of the given integer

#include<stdio.h>

int numberproduct(int num){
    
    int product=1,temp,rem;
    
    temp=num;
    
    while(num!=0){
        
        rem=num%10;
      
        product*=rem;
      
        num/=10;
    }
    
    printf("The product of digits of the given integer %d = %d\n",temp,product);
}

int main(){
    
    int number;
    
    printf("Enter an integer : ");
    
    scanf("%d",&number);
    
    numberproduct(number);
    
    return 0;
  
}
