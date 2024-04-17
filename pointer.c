#include<stdio.h>

int main(){
    int age = 21;
    int *page = &age;
    
    
    printf("value of pointer = %d",*page);
    printf("address of pointer = %p",page);
    
     
    
    return 0;
}