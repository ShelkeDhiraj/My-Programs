#include<stdio.h>

int Maximum(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 >= iNo2) && (iNo2 >= iNo3))
    {
        return iNo1;
    }
    else if((iNo1 <= iNo2) && (iNo2 >= iNo3))
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iValue3 = 0;
    auto int iRet = 0;

    printf("Enter the First number: ");
    scanf("%d", &iValue1);

    printf("Enter the Second number: ");
    scanf("%d", &iValue2);

    printf("Enter the third number: ");
    scanf("%d", &iValue3);

    iRet = Maximum(iValue1, iValue2, iValue3);

    printf("The Largest number is: %d", iRet);

    return 0;
}