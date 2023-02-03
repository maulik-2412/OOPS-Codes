#include <iostream>
using namespace std;
// function to multiply two matrices
void multiplyMatrices(int first[][10],
                      int second[][10],
                      int result[][10],
                      int r1, int c1, int r2, int c2)
{
    // Initializing elements of matrix mult to 0.
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            result[i][j] = 0;
        }
    }
    // Multiplying first and second matrices and storing it in result
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
       {
for (int k = 0; k < c1; ++k)
            {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

// function to display the matrix
void display(int result[][10], int row, int column)
{
    cout << "Output Matrix : " << endl;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            cout << result[i][j] << " ";
            if (j == column - 1)
                cout << endl;
        }
    }
}
int main()
{
    int a[10][10], b[10][10], result[10][10], r1, c1, r2, c2;
    cout << "Enter rows and column for the first matrix: " << endl;
    cin >> r1 >> c1;
    cout << "Enter the elements of the 1st matrix :" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "element at a" << i << j << " : ";
            cin >> a[i][j];
        }
    }
        cout << "Enter rows and column for the second matrix: " << endl;
        cin >> r2 >> c2;
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << "element at b" << i << j << " : ";
                cin >> b[i][j];
            }
        }

        // multiply two matrices.
        multiplyMatrices(a, b, result, r1, c1, r2, c2);
        // display the result
        display(result, r1, c2);
        return 0;
    }
