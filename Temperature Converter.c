#include <stdio.h>
int main (){
    float temp;
    char unit;
    printf("Temperature Convertor\n");
    printf("Enter temperature: ");
    scanf("%f",&temp);
    printf("Enter unit (C for celsius , F for fahrenheit): ");
    scanf(" %c",&unit);
    if (unit == 'c' || unit == 'C'){
        printf("%.2f Celsius is equal to %.2f Fahrenheit\n", temp,(temp*9/5)+32);
    }else if (unit == 'f' || unit == 'F'){
        printf("%.2f Fahrenheit is equal to %.2f Celsius\n", temp,(temp-32)*5/9);
    }else {
        printf("Invalid unit\n");
    }
    return 0;


}
