#include<stdio.h>

int Maximum(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }

}

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iRet = 0;

    printf("Enter the First number: ");
    scanf("%d", &iValue1);

    printf("Enter the Second number: ");
    scanf("%d", &iValue2);

    iRet = Maximum(iValue1, iValue2);

    printf("The largest number is: %d", iRet);

    return 0;
}