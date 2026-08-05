//An online shop keeps its product catalogue sorted by product ID (whole number) in ascending order. When a customer searches for a specific product ID, the system returns TRUE if the product ID is present in the catalogue, else it returns FALSE. Which searching technique is used to find the product ID quickly from the catalogue? Implement this searching method using a function. The function takes parameters: product ID list, size of the list, and the product ID to be searched.
//Sample Input:
//[2, 8, 9, 16, 18, 26, 38, 48, 51, 90]
#include <stdio.h>

void binarySearch(int a[], int n, int key)
{
    int l = 0, h = n - 1, mid, f = 0;

    while (l <= h)
    {
        mid = (l + h) / 2;

        if (a[mid] == key)
        {
            f = 1;
            break;
        }
        else if (a[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }

    if (f == 1)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
}

int main()
{
    int a[] = {2, 8, 9, 16, 18, 26, 38, 48, 51, 90};

    int n = sizeof(a) / sizeof(int), key;

    printf("Enter product ID to search: ");
    scanf("%d", &key);

    binarySearch(a, n, key);
}