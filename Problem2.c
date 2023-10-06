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
    int i,j,k;
    
    printf("Enter the first number: ");
    scanf("%d", &i);
    printf("Enter the second number: ");
    scanf("%d", &j);
    
    k = i + j;
    
    printf("Addition is: %d", k);

    return 0;
}