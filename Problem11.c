// Problem Statment : Accept the number from User and Calculate the Cube of given Number

// Step 1 : Understand the Problem statment
// Conclusion : We are going to use formula as Number * Number * Number

// Step 2 : Algorithm
/*
    START
        Accept Number from user and store into one variable
        Calculate the cube of number using Number * Number * Number
        Display the cube to the user

    STOP
*/

// step 4: Write the program.


#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
// Function Name : Calculte_Cube
// Description : It is used to Calculate the Cube of Number
// Input argunments : Long Integer
// Output : Long Integer
// Author : Dhiraj Pundlik Shelke
// Date : 02/10/2023
//
///////////////////////////////////////////////////////////////////////////

long int Calculate_Cube(int iValue)
{
    long int iCube = 0;                     // Variable to store the answer of cube

    iCube = iValue * iValue * iValue;

    return iCube;
}
//////////////////////////////////////////////////////////////////
//
// Entry Point function
//
//////////////////////////////////////////////////////////////////
int main()
{
    auto int iNo = 0;           // Variable to store input
    auto long int iAns = 0;     // Variable to store the result

    printf("Enter the Number: ");
    scanf("%d", &iNo);

    iAns = Calculate_Cube(iNo);     // Function call perform Cube of number

    printf("Then cube of %d is: %ld", iNo, iAns);

    return 0;
}
