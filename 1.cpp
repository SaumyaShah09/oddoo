// Maximum and minimum of an array using minimum number of comparisons

#include <iostream>
#include <limits.h>
using namespace std;

int setmini(int A[], int N)
{
    int mini = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        if (A[i] < mini)
        {
            mini = A[i];
        }
    }
    return mini;
}

int setmaxi(int A[], int N)
{
    int maxi = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        if (A[i] > maxi)
        {
            maxi = A[i];
        }
    }
    return maxi;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int N = 9;
    cout << "minimum element is " << setmini(A, N) << endl;
    cout << "maximum element is " << setmaxi(A, N) << endl;
}