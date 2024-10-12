#include <iostream>
using namespace std;

int main ()
{
    int A[2][3];
    
    A[0][0] = 1;
    A[1][0] = 2;
    A[0][1] = 4;
    A[1][1] = 5;
    A[0][2] = 10;
    A[1][2] = 12;
    
    cout << "Displaying array A" << endl;
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            cout << A[row][column] << " ";
        }
        cout << endl;
    }
    
    int B[2][3] = {{4, 8, 1}, {10, 6, 2}};
    
    cout << "Displaying array B" << endl;
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            cout << B[row][column] << " ";
        }
        cout << endl;
    }
    
    int C[2][3];
    cout << "Displaying array C containing the sum of arrays A and B" << endl;
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            C[row][column] = A[row][column] + B[row][column];
            cout << C[row][column] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

