//Problem 1: (SAfindAr) Write a function findAr() that returns the subscript of the first appearance of a target number in an array. For example, if ar = {3,6,9,4,7,8}, then findAr(6,ar,3) will return 0 where 6 is the size of the array and 3 is the number to be found, and findAr(6,ar,9) will return 2. If the required number is not in the array, the function will return –1. 

#include <stdio.h>
int findAr(int size, int ar[], int target)
{
    for (int i = 0; i < size; i++)
    {
        if (ar[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int ar[] = {3, 6, 9, 4, 7, 8};
    int size = 6;
    int index1 = findAr(size, ar, 3);
    int index2 = findAr(size, ar, 9);
    printf("Index of 3: %d\n", index1);
    printf("Index of 9: %d\n", index2); 
    int index3 = findAr(size, ar, 5);
    printf("Index of 5: %d\n", index3);
    return 0;
}