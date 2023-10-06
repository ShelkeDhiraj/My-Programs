// Problem Stament: Acctept 2 values from user and perform the addtion
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