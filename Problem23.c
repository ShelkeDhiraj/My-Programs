#include<stdio.h>

int Average(int iNo1, int iNo2, int iNo3)
{
    auto double dAns = 0.0f;

    dAns = (((float) (iNo1 + iNo2 + iNo3)) / 3);

    return dAns;
}

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iValue3 = 0;
    auto float fRet = 0.0;

    printf("Enter the First number: ");
    scanf("%d", &iValue1);

    printf("Enter the Second number: ");
    scanf("%d", &iValue2);

    printf("Enter the third number: ");
    scanf("%d", &iValue3);

    fRet = Average(iValue1, iValue2, iValue3);

    printf("The Average is: %f", fRet);

    return 0;
}