#include<stdio.h>

void Display_Class(float fMarks)
{
    if((fMarks >= 0) && (fMarks < 35.00))
    {
        printf("You are FAIL...\n");
    }
    else if((fMarks >= 35.00) && (fMarks < 50.00))
    {
        printf("Congradulations...\n");
        printf("Your class is PASS class\n");
    }
    else if((fMarks >= 50.00) && (fMarks < 60.00))
    {
        printf("Congradulations...\n");
        printf("Your class is SECOND class\n");
    }
    else if((fMarks >= 60.00) && (fMarks < 75.00))
    {
        printf("Congradulations...\n");
        printf("Your class is FIRST class\n");
    }
    else if((fMarks >= 75.00) && (fMarks <= 100.00))
    {
        printf("Congradulations...\n");
        printf("Your class is FIRST class with DISTINCTION\n");
    }

}

int main()
{
    auto float fPercentage = 0.0f;

    printf("Enter your Percentage: ");
    scanf("%f", &fPercentage);

    Display_Class(fPercentage); 

    return 0;
}