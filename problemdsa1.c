//n a library, the books are stored using their acc. no., which is a whole no. that consists of a maximum three digit whole number. Consider an array where the acc. no. of the books are stored in an unorganized fashion. The librarian once searched for a specific acc. no. in the array. Which searching methodology must the librarian follow? Write the program to implement this searching technique.
//Sample Input:
//[101, 20, 49, 385, 210, 620, 85]
#include <stdio.h>

void linearSearch(int a[], int n, int key)
{
    int f = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            f = 1;
            break;
        }
    }

    if (f == 1)
        printf("Access number found.");
    else
        printf("Access number not found.");
}

int main()
{
    int a[] = {101, 20, 49, 385, 210, 620, 85};

    int n = sizeof(a) / sizeof(int), key;

    printf("Enter acc. no. to search: ");
    scanf("%d", &key);

    linearSearch(a, n, key);
}