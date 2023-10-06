// Problem Statment : Accept the marks and total marks from user and print the percentage

// Step 1 : Understand the Problem statment

// Step 2 : Algorithm
/*
    START
        Accept the marks and total marks from user and store into two variable
        Using formula Percentage = ((marks/TotalMarks) * 100)
        Display the Answer to the user

    STOP
*/

// step 4: Write the program.

#include<stdio.h>
///////////////////////////////////////////////////////////////////////////
//
// Function Name : Calculate_Percentage
// Description : It is used to calculate percentage
// Input argunments : Integer
// Output : Float
// Author : Dhiraj Pundlik Shelke
// Date : 03/10/2023
//
///////////////////////////////////////////////////////////////////////////
float Calculate_Percentage(int iMarks, int iTotal)
{
    auto float fPercentage = 0.0f;

    if((iMarks < 0) || (iTotal < 0))    // Filer
    {
        printf("Invalid input\n");
        return fPercentage; 
    }

    if(iMarks > iTotal)                 // Filter
    {
        printf("Invalid input\n");
        return fPercentage;
    }

    fPercentage = (((float)iMarks / (float)iTotal) * 100);

    return fPercentage;
}


int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto float fRet = 0.0f;

    printf("Enter the Marks: ");
    scanf("%d", &iValue1);

    printf("Enter the total marks: ");
    scanf("%d", &iValue2);

    fRet = Calculate_Percentage(iValue1, iValue2);

    printf("Your percentage is: %f\n", fRet);

    return 0;
}