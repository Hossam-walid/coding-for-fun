#include <stdio.h>
int main() {
    char operatorr;
    float num1, num2, result;
    printf("Enter operator (+,-,*,/):");
    scanf("%c",&operatorr);
    printf("Enter 2 numbers");
    scanf("%f %f", &num1,&num2);
    switch(operatorr){
    case'+':
        result = num1 + num2;
        printf("Result: %.2f\n",result);
        break;
    case'-':
        result = num1 - num2;
        printf("Result: %.2f\n", result);
        break;
    case'*':
        result = num1 * num2;
        printf("Result: %.2f\n",result);
        break;
    case'/':
        //check if num2 is not zero to avoid devision by zero
        if(num2 != 0){
            result = num1/num2;
            printf("Result: %.2f\n",result);
        }
        else{
         printf("Error! Division by zero.\n");
        }
        break;
    default:
        printf("Error! invalid operator.\n");
    }


}
