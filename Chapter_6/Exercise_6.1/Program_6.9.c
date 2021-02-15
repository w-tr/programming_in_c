//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//    ____ ___   __    _               
//   / __// o |,'_/  .' \              
//  / _/ / _,'/ /_n / o /   _   __  _    ___  _   _  __
// /_/  /_/   |__,'/_n_/   / \,' /.' \ ,' _/,' \ / |/ /
//                        / \,' // o /_\ `./ o // || / 
//                       /_/ /_//_n_//___,'|_,'/_/|_/ 
//  
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Author         : Wesley Taylor-Rendal (WTR)
// Design history : Review git logs.
// Description    : Revising the Program to Evaluate Simple Expressions REV 2
// Concepts       : Introducing the switch-case statement
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    float val1, val2;
    char operator;

    printf("Enter a expression: ");
    scanf("%f %c %f", &val1, &operator, &val2);

    switch (operator)
    {
        case '+':
            printf("%.2f\n", val1 + val2);
            break; // so important
        case '-':
            printf("%.2f\n", val1 - val2);
            break;
        case '*':
            printf("%.2f\n", val1 * val2);
            break;
        case '/':
            if (val2 == 0)
                printf("division by zero is not allowed \n");
            else
                printf("%.2f\n", val1 / val2);
            break;
        default:
            printf("Unknown operator. \n");
            break;
    }

    return 0;
}
