/*
 * Program for recursive selection sort
 * Compilation : gcc rselection.c
 * Execution : ./a.out
 *
 * @vasu ( 1910990395 )  , 04/8/2021
 * Assignment_5 - Recursion.
 *
 */
#include <stdio.h>
// Function to swap two element
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
// Function to find minimum index
int min_ind(int arr[],int n,int low,int x)
{
    // base condition
    if(x==n)
    return low;
    
    // updating low if minimum index find
    if(arr[low] > arr[x])
    {
        low=x;
    }
    // finding minimum in next segment
    int t=min_ind(arr,n,low,x+1);
    return t;
}
// Function for recursive selection sort
void outerLoop(int arr[],int n,int low)
{
    // base condition
    if(low==n)
    return ;
    
    // finding minimum index
    int x=min_ind(arr,n,low,low+1);
    // swap and place to correct position
    swap(&arr[low],&arr[x]);
    // continue process until base condition
    outerLoop(arr,n,low+1);
}
int main() {
    int n=5;
    int arr[]={2,4,1,3,5};

    outerLoop(arr,n,0);
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}

