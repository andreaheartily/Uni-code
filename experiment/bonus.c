#include<stdio.h>

void sierpinski(int row, int col,int size)
{
    if (size==1)
    {
        printf("*");
    }
    else
    {
        if((row+col)/size%3==1)
        {
            printf(" ");
        }
        else
        {
            sierpinski(row/3, col/3, size/3);
        }
    }
}

// every time you call a function within itself, it's called recursion; can be used in binary searches

int main()
{
    int size=27;
    for(int row=0; row<size;row++)
    {
        for(int col=0; col<size*2-1;col++)
        {
            sierpinski(row,col,size);
        }
        printf("\n");
    }

    return 0;
}