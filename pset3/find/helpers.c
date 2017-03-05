// Idris Sylvester
//Problem Set 3 
//find.c/helper.c
//This program sorts a set of psuedorandom numbers and then finds a select number in that array.

/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // bubble sort algorithim
    for(int i=0;i<n;i++)
    {
        int temp;
        if(values[i]>values[i+1])
        {
            temp=values[i];
            values[i]=values[i+1];
            values[i+1]=temp; 
        }
    }
    return;
}

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    int beginning=0;
    int end=n;
     
    
    //search algorithim 
    while(beginning<=end)
    {
       //definition of mid
        int mid=((end+beginning)/2);
        //if mid is value return true
        if(values[mid]==value)
        {
            return true;
        }
        //if mid is less than value focus on upper half of list
        else if(values[mid]<value)
        {
            beginning=mid+1;
        }
        //if mid is greater than value focus on lower half of list
        else if(values[mid]>value)
        {
            end=mid-1;
        }
        
    }
//if list is exhausted return false
return false;
    
}
