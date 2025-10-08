/*
4. Next Perfect Square Without Math.h

Problem Statement: Write a program to find the smallest perfect square greater than a given number without using library functions.

Explanation: Start checking from number+1 upwards, for each number check if it is a perfect square by trying i*i.

Examples:

Input: 20    Output: 25
Input: 100   Output: 121
*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    int num = a + 1;

    while (1)
    {
        int start = 1;  // reset start for each number (I missed it earlier.)
        int sq = 0;
        while (sq < num)
        {
            sq = start * start;
            if (num == sq)
            {
                printf("Next perfect square: %d\n", num);
                return 0;
            }
            start++;
        }
        num++;
    }
}

