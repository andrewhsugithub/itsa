#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int rows, cols;
    while (cin >> rows >> cols)
    {
        int arr[rows][cols];
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cin >> arr[i][j];
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