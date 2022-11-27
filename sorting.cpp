#include <iostream>
using namespace std;
void selectionSort(int A[], int size)
{
    int i = 0;
    int j;

    for (i; i < size; i++)
    {
        j = i + 1;
        for (j; j < size; j++)
        {
            if (A[j] < A[i])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        printf("%d, ", A[i]);
    }
}
void bubbleSort(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", A[i]);
    }
}
void insertionSort(int A[], int size)
{
    int hole;
    for (int i = 1; i < size; i++)
    {

        int value = A[i];
        hole = i;
        while (hole > 0 && A[hole - 1] > value)
        {
            A[hole] = A[hole - 1];
            hole = hole - 1;
        }
        A[hole] = value;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", A[i]);
    }
}
int main()
{
    int numbers[] = {17, 70, 94, 2, 7, 30, 10, 3, 45};
    int algorithim;
    int size = sizeof(numbers) / sizeof(int);
    printf("the size of our array is: %d\n,please choose which algorithim you want to sort by :-) \n ", size);
    printf("1. selection sort\n 2. bubble sort\n 3. insertion sort\n");
    cin >> algorithim;

    if (algorithim == 1)
    {
        printf("the sorted array by selection sort is :\n");
        selectionSort(numbers, size);
    }
    else if (algorithim == 2)
    {
        printf("the sorted array by bubble sort is :\n");
        bubbleSort(numbers, size);
    }
    else if (algorithim == 3)
    {
        printf("the sorted array by insertion  sort is :\n");
        insertionSort(numbers, size);
    }

    return 0;
}