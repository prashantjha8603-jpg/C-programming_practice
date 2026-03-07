#include <stdio.h>
int main()
{
    int nums[10], temp;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &nums[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (nums[i] == nums[j] && i != j)
            {
               int delete(nums[j]);
            }
        }
    }
    

        return 0;
}