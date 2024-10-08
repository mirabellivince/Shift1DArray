/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void ShiftArray (int z[],int size)
{
    for (int i = size-1; i > 0; i-- )
    {
        z[i] = z[i-1];
    }
    
    z[0] = 0;
    
}

int main()
{
    int numbers[10] = {1,2,3,4,5,6,7,8,9,0};
    
    int size = sizeof(numbers)/sizeof(numbers[1]);
    
    ShiftArray(numbers, size);
    
    for (int i = 0; i < size; i++)
    {
        printf("%i\n",numbers[i]);
    }

    return 0;
}

