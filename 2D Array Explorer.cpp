#include <iostream>
using namespace std;

int main ()
{
    int A[2][3];
    int B[2][3];
    
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            cout << "Enter value for array A at row " << row << ", column " << column << endl;
            cin >> A[row][column];
        }
    }
    
    cout << "Displaying array A" << endl;
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            cout << A[row][column] << " ";
        }
        cout << endl;
    }
    
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            cout << "Enter value for array B at row " << row << ", column " << column << endl;
            cin >> B[row][column];
        }
    }
    
    cout << "Displaying array B" << endl;
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            cout << B[row][column] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

