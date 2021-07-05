#include <iostream>
using namespace std;
int main()
{
    int n, i, j, rot, temp;
    cin >> n >> rot;
    int A[n];
    for (i = 0; i < n; i++)
        cin >> A[i];

    for (j = 0; j < rot; j++)
    {
        temp = A[0];
        for (i = 0; i < n - 1; i++)
        {
            A[i] = A[i + 1];
        }
        A[i] = temp;
    }

    for (i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}
