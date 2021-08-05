/**
 * Program for GCD of two number
 * Compilation : gcc gcd.c
 * Execution : ./a.out
 *
 * @vasu ( 1910990395 )  , 04/8/2021
 * Assignment_5 - Recursion.
 *
 */
#include <stdio.h>
// Function for GCD of two number. 
int gcd(int a,int b) // Parameter (int ,int )
{
    // base condition
    if(a==0)
    return b;
    // since all thing that can do with number can also do with their remainder .
    return gcd(b%a,a);
}
int main() {
	int a,b;
	printf("Enter numbers ");
	scanf("%d %d",&a,&b);
	printf("%d",gcd(a,b));
	return 0;
}


