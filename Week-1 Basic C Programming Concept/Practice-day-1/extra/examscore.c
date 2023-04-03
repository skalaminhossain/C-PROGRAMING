#include<stdio.h>

int main(){
    int score;

    printf("Enter your exam score: ");
    scanf("%d",&score);

    if(score >= 50){
        printf("Congratulations , you have passed the exam");
    }
    else{
        printf("Sorry, you have failed the exam");
    }
    return 0;
}