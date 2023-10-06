// Problem Stament: Acctept 2 values from user and perform the addtion

// Step 1 : Understand the problem stament.
// Conclusion : We have to accept 2 integers and  perform its addition.

// Step 2 : Write the algorithm
/* 
    START
    
        Accept first number from user and store it into no1
        Accept second number from user and store it into no2
        Create one variable to store the result name as Ans
        Perform Addition of no1 and no2, store the result in Ans
        Display the result from Ans to the user
    
    STOP
*/

// Step 3: Decide the programming language.
// We select C programming.

// step 4: Write the program.
    
#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Addition
// Description : It is used to perform addition of 2 integers
// Input argunments : Integer , Integer
// Output : Integer
// Author : Dhiraj Pundlik Shelke
// Date : 25/09/2023
//
/////////////////////////////////////////////////////////////////////////////////

int Addition(int iNo1, int iNo2)
{
    int iSum = 0;       // Variable to store the value of addition
    
    iSum = iNo1 + iNo2;
    return iSum;
}

////////////////////////////////////////////////////////////////////////////////
//
// Entry point function of an application which performs addition of 2 integers
//
////////////////////////////////////////////////////////////////////////////////

int main() {
    // Write C code here
    int iValue1 = 0;    // Variable to store first input
    int iValue2 = 0;    // Variable to store second input
    int iAns = 0;       // Variable to store the result
    
    printf("Enter the first number: ");
    scanf("%d", & iValue1);
    printf("Enter the second number: ");
    scanf("%d", & iValue2);
    
    iAns = Addition(iValue1, iValue2);  // Function call to perform addition
    
    printf("Addition is: %d", iAns);

    return 0;
}

// Step 5: Test the code
/*
    Test case 1: 
        Enter the first number: 5
        Enter the second number: 6
        Addition is: 11
        
    Test case 2 :
        Enter the first number: -12
        Enter the second number: -5
        Addition is: -17
    
    Test case 3 :
        Enter the first number: 10
        Enter the second number: 50
        Addition is: 60
    
    Test case 4 :
        Enter the first number: -99
        Enter the second number: 0
        Addition is: -99

*/