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

int main() {
    // Write C code here
    int ivalue1 = 0;
    int iValue2 = 0;
    int iAns = 0;
    
    printf("Enter the first number: ");
    scanf("%d", & ivalue1);
    printf("Enter the second number: ");
    scanf("%d", & iValue2);
    
    iAns = ivalue1 + iValue2;
    
    printf("Addition is: %d", iAns);

    return 0;
}