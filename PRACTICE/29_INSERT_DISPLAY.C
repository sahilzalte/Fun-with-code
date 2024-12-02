#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100];
    int n, i, newElement, ch;
    printf("** MENU **\n");
    printf("1.Insert \n2.Display \n3.Exit\n");

    while (1)
    {
        printf("Enter choise : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:

            printf("Enter the number of elements in the array: ");
            scanf("%d", &n);

            // Input the elements of the array
            printf("Enter %d elements:\n", n);
            for (i = 0; i < n; i++)
            {
                scanf("%d", &arr[i]);
            }

            // Input the new element and the position to insert it
            printf("Enter the element to insert: ");
            scanf("%d", &newElement);
            break;

        case 2:

            printf("Updated Array: ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
        case 3:
            printf("Exiting from the program .......");
            exit(0);
            break;

        default:
            printf("Wrong choise\n");
            break;
        }
    }

    return 0;
}
