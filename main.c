#include <stdio.h>

int main() {
    float weight, height, bmi;
    char op; //, op2;

    do{
        //printf here
        scanf("%f %f", &weight, &height);

        //printf here
        //op2 = getchar();

        //scanf(" %c", &op2);

        //if(scanf("%c",op2) == 'm'){
        bmi = weight / (height * height);

        /*}else if(scanf("%c",op2) == 'i'){

            bmi = (weight / (height * height)) * 703;
        }*/

        printf("%f", bmi);

        printf("\n Wanna leave? Type 'y' if you wanna leave.\n");
        op = getchar();

    }while(op != 'y');

    return 0;
}