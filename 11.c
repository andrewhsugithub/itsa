#include <stdio.h>
#include <math.h>

int main()
{
    int rows, cols;
    while (scanf("%d %d", &rows, &cols) == 2)
    {
        int arr[rows][cols];
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

        // printf("%d %d\n", cols, rows);
        for (int i = 0; i < cols; i++)
            for (int j = 0; j < rows; j++)
            {
                if (j == rows - 1)
                    printf("%d\n", arr[j][i]);
                else
                    printf("%d ", arr[j][i]);
            }
    }
}