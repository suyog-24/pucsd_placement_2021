#include<stdio.h>

void balance(int n)
{
    int array[n],part1=0,part2=0;
     int partition=8;               
    for (int i = 0; i < n; i++)
    {
        array[i]=((2*i)+4);
        if (i<partition)
        {
            part1+=array[i];
        }
        else if(i>partition)
        {
            part2+=array[i];
        }          
    }

    printf("%d  ",(part2-part1)+1);
}
int main()
{
    int n;
    scanf("%d",&n);
 balance(n);
}
