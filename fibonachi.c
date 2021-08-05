/*
 * Program to print n times , the every 3rd element of fibonacci series.
 * Compilation : gcc fibonachi.c
 * Execution : ./a.out
 *
 * @Vasu ( 1910990395 )  , 04/8/2021
 * Assignment_5 - Recursion.
 *
 */
#include <stdio.h>
// intialize global array for memorization
long long int mat[101];
// function for fibonacci series
void fibonacci(int n)
{
    // base condition by default 50 
    if(n==50)
    return;
    // fibonacci of n = fibonacci of n-1 + fibonacci of n-2
    mat[n]=mat[n-1] + mat[n-2];
    fibonacci(n+1);
}
int main() {
    mat[0]=0;
    mat[1]=1;
    mat[2]=1;
    fibonacci(3);
	for(int i=1;i<50;i++)
	{
	    // print every third element
	    if(i%3==0)
	    printf("%lld ",mat[i]);
	}
	return 0;
}

