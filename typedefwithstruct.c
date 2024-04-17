#include<stdio.h>
#include<string.h>


typedef struct{
    char player[10];
    int score;

}user;

int main(){

    user user1;
    user user2;

    strcpy(user1.player,"partha");
    user1.score= 5;
    strcpy(user2.player,"sus");
    user2.score=10;

    printf("%s has a score of %d \n",user1.player,user1.score);
    printf("%s has a score of %d \n",user2.player,user2.score);
    




    return 0;
}