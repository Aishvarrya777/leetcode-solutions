#include <stdio.h>

void moveZeroes(int nums[], int size)
{
    int i;
    int position = 0;
    int temp;

    // Move all non-zero elements to the front
    for (i = 0; i < size; i++)
    {
        if (nums[i] != 0)
        {
            temp = nums[position];
            nums[position] = nums[i];
            nums[i] = temp;

            position++;
        }
    }
}

void display(int nums[], int size)
{
    int i;

    for (i = 0; i < size; i++)
        printf("%d ", nums[i]);

    printf("\n");
}

int main()
{
    // Test Case 1: Typical case
    int nums1[] = {0, 1, 0, 3, 12};

    printf("Test Case 1:\n");
    moveZeroes(nums1, 5);
    display(nums1, 5);

    // Test Case 2: Edge case with all zeroes
    int nums2[] = {0, 0, 0};

    printf("Test Case 2:\n");
    moveZeroes(nums2, 3);
    display(nums2, 3);

    return 0;
}