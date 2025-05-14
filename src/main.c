#include <stdio.h>

int main()
{
    int input;
    int score = 0;
    printf("First meal of Day?\n\t[1] YES\t[0] NO: ");
    scanf("%d", &input);
    score += input;

    printf("\nBreakfast Food?\n\t[1] YES\t[0] NO: ");
    scanf("%d", &input);
    score += input;

    printf("\nBreakfast Time?\n\t[1] YES\t[0] NO: ");
    scanf("%d", &input);
    score += input;

    if (score >= 2)
    {
        printf("\nBREAKFAST!\n");
    }
    else
    {
        printf("\nSHIT AIN'T BREAKFAST!\n");
    }
}