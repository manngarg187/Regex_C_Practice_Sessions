
// Find the no. of pairs that add up to our target value.

#include <stdio.h>
int main()
{
    int arr[6] = {1, 3, 4, 6, 2, 5};
    int target = 7;
    int count = 0;
    for (int i = 0; i <= 5; i++)
    {
        int sum = 0;
        //for (int j = 0; j <= 5; j++)   It will count ever pair 2 times.
        for (int j = i+1; j <= 5; j++)
        {
            sum = arr[i] + arr[j];
            if (sum == target)
            {
                count++;
            }
        }
    }
    printf("%d",count);
}