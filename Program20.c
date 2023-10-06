#include<stdio.h>

void Display_Exam_Time(int iStandard)
{
    if(iStandard == 1)
    {
        printf("Your exam is at 8 AM\n");
    }
    else if(iStandard == 2)
    {
        printf("Your exam is at 9 AM\n");
    }
    else if(iStandard == 3)
    {
        printf("Your exam is at 10 AM\n");
    }
    else if(iStandard == 4)
    {
        printf("Your exam is at 11 AM\n");
    }
    else if(iStandard == 5)
    {
        printf("Your exam is at 12 NOON\n");
    }
    else
    {
        printf("Wrong input...");
    }
}

int main()
{
    auto int iValue = 0;

    printf("Enter your Standard: ");
    scanf("%d", &iValue);

    Display_Exam_Time(iValue);

    return 0;
}