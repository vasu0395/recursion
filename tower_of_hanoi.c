/*
 * Program to implement Tower of hanoi function.
 * Compilation : gcc tower_of_hanoi.c
 * Execution : ./a.out
 *
 * @vasu ( 1910990395 )  , 04/8/2021
 * Assignment_5 - Recursion.
 *
 */
#include <stdio.h>
// initialize global count with zero
int count=0;
// function For tower_of_hanoi (parameter Passed :- number of Disk , Character repersent From , to ,aux).
void tower_of_hanoi(int n,char from,char to,char aux)
{
    // base condition 
    if(n==1)
    {
        // increment count by 1
        count++;
        printf("%c to %c\n",from,to);
        return;
    }
    // First transfer disk from from to aux
    tower_of_hanoi(n-1,from,aux,to);
    // increment count by 1
    count++;
    printf("%c to %c\n",from,to);
    // Now transfer disk from aux to to
    tower_of_hanoi(n-1,aux,to,from);
    return ;
}
int main() {
	int n=3;
	tower_of_hanoi(n,'A','C','B');
	printf("Number of Step required %d" ,count);
	return 0;
}
