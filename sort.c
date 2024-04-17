#include <stdio.h>
void sort(int[], int);
int main()
{
    int array[] = {9,8,7,6,5,4,3,2,1,0};
    int size = sizeof(array) / sizeof(array[0]);
    sort(array, size);
    for (int i = 0; i < size; i++)
        printf(" %d,", array[i]);
    return 0;
}
void sort(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        for (int j = i; j < s; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}