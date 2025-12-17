// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int x;
    int y;
    char operation;
    int result;
    
    printf("enter any two numbers x & y: \n") ; 
    printf("Enter x: \n");
    scanf("\n%d",&x);
    printf("Enter y: \n");
    scanf("\n%d",&y);
    printf("Enter the operation [+,-,/,*,%]: ");
    scanf("\n%c",&operation);
    
    if(operation=='+'){
        result = x+y;
    }
    else if(operation=='-'){
        result = x-y;
    }
    else if (operation=='/'){
        result = x/y;
    }
    else if (operation=='*'){
        result = x*y;
    }
    else if (operation=='%'){
        result = x%y;
    }
    else{
    printf("wrong operation") ;   
    }
    printf("Answer = %d",result);
    return 0;

}
