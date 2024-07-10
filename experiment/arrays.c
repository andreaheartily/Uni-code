# include <stdio.h>
# include <string.h>

int main()
{
    int arr[5];
    // you can input data by arr[0]=1(it can also be used for changing the data) or using a for loop
    int values[5];
    printf("Enter 5 integers: \n");

    for (int i=0; i<5;++i)
    {
        scanf("%d",&values[i]);
    }
    printf("Displaying integers: \n");

    for(int i=0;i<5;++i)
    {
        printf(" %d",values[i]);
    }
    printf("\n");

    
    char heart[5][7] = {
        "  ***  ",
        " ***** ",
        "*******",
        " ***** ",
        "  ***  "
    };

    for (int i = 0; i < 5; i++) {
        printf("%s\n", heart[i]);
    }
    

    return 0;
}