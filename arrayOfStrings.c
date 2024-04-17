#include<stdio.h>
#include<string.h>
int main(){


    char cars[][10] = {"alto","desire","verna","city"};

    //cars[0]="tesla";

    strcpy(cars[0],"tesla");

    for(int i=0; i<4;i++){

        printf("\n %s",cars[i]);

    }






    return 0;
}