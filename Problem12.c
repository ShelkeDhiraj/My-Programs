// Problem Statment : Accept number from user and check whether the number is Even or not

// Step 1 : Understand the Problem statment

// Step 2 : Algorithm
/*
    START
        Accept Number from user and store into one variable
        If number is i.e., number % 2 = 0 then number is Even otherwise not
        Display the Answer to the user

    STOP
*/

// step 4: Write the program.

#include<stdio.h>
#include<stdbool.h>    // Header file for bool data type

///////////////////////////////////////////////////////////////////////////
//
// Function Name : Check_Even
// Description : It is used to differntiate the when number is Even or not
// Input argunments : Integer
// Output : Integer
// Author : Dhiraj Pundlik Shelke
// Date : 02/10/2023
//
///////////////////////////////////////////////////////////////////////////

bool Check_Even(int iValue)
{
    if((iValue % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
//////////////////////////////////////////////////////////////////
//
// Entry Point function
//
//////////////////////////////////////////////////////////////////
int main()
{
    auto int iNo = 0;           // Variable to store input
    auto int iAns = 0;          // Variable to store the result
    auto bool bRet = false;     // false = 0 and true = 1   

    printf("Enter the Number: ");
    scanf("%d", &iNo);

     bRet = Check_Even(iNo);    // Function call for number is Even or not

    if(bRet == true)
    {
        printf("%d is Even Number", iNo);
    }
    else 
    {
        printf("%d is Odd Number", iNo);
    }

    return 0;
}