//A class teacher has a list of marks of 10 students in a random fashion. All the marks are whole numbers. Before publishing the results, the class teacher wants to arrange the marks in an order so that the rank of the marks in ascending order. Which methodology will you use here? Implement the method using a C program.
//Sample Input:
//[99, 85, 58, 71, 46, 80, 78, 65, 49, 55]
#include <stdio.h>

void BubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}

int main()
{
    int a[] = {99, 85, 58, 71, 46, 80, 78, 65, 49, 55};

    int n = sizeof(a) / sizeof(int);

    BubbleSort(a, n);

    printf("The sorted array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
