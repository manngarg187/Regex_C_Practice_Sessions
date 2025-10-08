
/*
10. Hard Menu Challenge

Problem Statement: Write a program with menu-driven options:
1. Print Armstrong numbers in a range,
2. Print Fibonacci up to limit,
3. Print first N primes,
4. Exit.

Explanation: Use while loop for infinite menu, switch/if else for handling choices. Implement each function with loops and conditions.

Examples:
Input: Choice=1, Range=1 to 200    Output: 1 153
Input: Choice=2, Limit=10          Output: 0 1 1 2 3 5 8
*/

#include <stdio.h>

void checkArmstrongInRange()
{
    int R_start, R_end;
    printf("Range_start : ");
    scanf("%d", &R_start);
    printf("Range_end : ");
    scanf("%d", &R_end);
    printf("Armstrong Number: ");
    while (R_end >= R_start)
    {
        int count = 0;
        int num;
        num = R_start;
        while (num > 0)
        {
            num = num / 10;
            count = count + 1;
        }
        num = R_start;
        int sum = 0;
        while (num > 0)
        {
            int single = 0;
            single = num % 10;
            // Mistake: int sq;
            int sq = 1;
            for (int i = 1; i <= count; i++)
            {
                // Mistake: sq = single*single
                sq = sq * single;
            }
            sum = sum + sq;
            num = num / 10;
        }
        num = R_start;
        if (sum == num)
        {
            printf("%d ", sum);
        }
        R_start = R_start + 1;
    }
}


void fibonacci()
{
    int limit;
    printf("Enter the Limit: ");
    scanf("%d", &limit);
    printf("First %d Fibonacci Numbers are : ", limit);
    printf("%d ", 0);
    printf("%d ", 1);
    int a1 = 0;
    int a2 = 1;
    for (int i = 1; i <= limit - 2; i++)
    {
        int sum;
        sum = a1 + a2;
        printf("%d ", sum);
        a1 = a2;
        a2 = sum;
    }
}


// int prime() -- Mistake: It should be void
void prime()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Prime Numbers are: ");
    for (int i = 2; i <= n; i++)
    {
        int check;
        // for (int j= 2; j<=(i-1); i++){     -- mistake: you incremented i instead of j
        for (int j = 2; j <= (i - 1); j++)
        {
            check = i % j;
            if (check == 0)
            {
                break;
            }
        }
        if (check != 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    //while (true) -- In C, true is not defined by default (unlike C++)... 
    // So the compiler thinks main never ends correctly, and sometimes it fails to recognize main() properly.
    // in C we use while(1) for infinite loop.
    while (1)
    {
        int Choice;
        printf("Enter your Choice: ");
        scanf("%d",&Choice);
        if (Choice == 1){
            checkArmstrongInRange();
            printf("\n");
        }
        else if(Choice == 2){
            fibonacci();
            printf("\n");
        }
        else if(Choice == 3){
            prime();
            printf("\n");
        }
        else if(Choice == 4){
            printf("Exit");
            //return 0;  - Mistake: this lead to infinite loop!
            break;
        }
    }
    return 0;
}
