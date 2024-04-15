#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    srand(time(NULL));
    int score = 0;
    int numQuestions = 5;
    for(int i= 0; i < numQuestions; i++){
        int num1 = rand() % 10 +1;
        int num2 = rand() % 10 +1;
        int answer = num1 + num2;
        printf("Question %d: What is %d + %d?\n", i+1, num1, num2);
        int userAnswer;
        scanf("%d", &userAnswer);
        if (userAnswer == answer){
            printf("Correct!\n");
            score++;
        }else {
            printf("Incorrect!\n");
        }
    }
    printf("Quiz complete! your score is %d out of %d\n", score, numQuestions);
    return 0;


}
