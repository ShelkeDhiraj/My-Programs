// Problem Statment : Accept Radius from user and calculate the area of Circle

// Step 1 : Understand the Problem statment
// Conclusion : We are going to use formula as PI*R*R


// Step 2 : Algorithm
/*
    START
        Accept radius from user and store into RADIUS
        Create variable as PI and store value 3.14
        Calculate area PI * RADIUS * RADIUS
        Display the value of Area to the user

    STOP
*/

// step 4: Write the program.

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
// Function Name : Calculte_Area
// Description : It is used to Calculate Area of Circle
// Input argunments : Float
// Output : Float
// Author : Dhiraj Pundlik Shelke
// Date : 02/10/2023
//
///////////////////////////////////////////////////////////////////////////

#define PI 3.14     // Define Constant Variable

float CalculateArea(float fValue)
{
   auto float fAns = 0.0f;          // Variable to store the value of Area of Circle 
   
   fAns = PI * fValue * fValue;     // Formula of Area of Circle

   return fAns;
}
//////////////////////////////////////////////////////////////////
//
// Entry Point function
//
//////////////////////////////////////////////////////////////////
int main()
{
    auto float fRadius = 0;     // Variable to store input
    auto float fArea = 0;       // Variable to store the result

    printf("Enter the Radius of circle: ");
    scanf("%f", &fRadius);

    fArea = CalculateArea(fRadius);     // Function call to perform Area of Circle
    
    printf("Area of circle is: %f\n", fArea);

    return 0;
}