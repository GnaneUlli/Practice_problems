//Printing even numbers upto given number

#include<stdio.h>

int evenloop(int csk){
    
    int i,j;
    
    for(i = 1; i <= csk;i++){
        
        if(i%2 == 0){
            
            printf("%d ",i);
        }
    }
    printf("\n");
    
}

int main(){
    
    int number;
    
    printf("Enter an integer : ");
    
    scanf("%d",&number);
    
    evenloop(number);
    
    return 0;
}
