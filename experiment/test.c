#include<stdio.h>
int main()
{
int i, num;
    float sum, ave, mark;
    printf("How many students? ");
    scanf("%d",&num);
    sum=0; //make it a practice to initialize the first value as 0
    for(i=1; i<=num; i++)
    {
        printf("Enter the mark for student #%d:",i);
        scanf("%f",&mark);
        sum=sum+mark;
    }
    ave=sum/num;
    printf("The average is %.2f.\n",ave);

    return 0;
    //Precious was here!
}