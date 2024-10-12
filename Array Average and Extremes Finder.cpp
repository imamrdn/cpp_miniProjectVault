#include <iostream>
using namespace std;

int main ()
{
    int A[5];
    int input;
    int total = 0;
    float average;
    
    for (int i = 0; i <= 4; i++)
    {
        cout << "Enter a value to store in the array:" << endl;
        cin >> input;
        A[i] = input;
        total += A[i];
    }
    
    for (int i = 0; i <= 4; i++)
    {
        cout << "The value at index " << i << " is " << A[i] << endl;
    }
    
    average = (float)total / (float)5;
    
    cout << "The average of the data in the array is " << average << endl;
    
    int max = A[0];
    int min = A[0];
    
    for (int i = 0; i <= 4; i++)
    {
        if (max < A[i]) max = A[i];
        if (min > A[i]) min = A[i];
    }
    
    cout << "The maximum value in the array is " << max << endl;
    cout << "The minimum value in the array is " << min << endl;
    
    return 0;
}

