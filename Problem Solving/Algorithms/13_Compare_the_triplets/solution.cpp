#include <iostream>
using namespace std;
int main()
{
    int n = 3, i, j;
    int A[n];
    for (i = 0; i < n; i++)
        cin >> A[i];
    int B[n];
    for (i = 0; i < n; i++)
        cin >> B[i];
    int c1 = 0, c2 = 0;
    for (i = 0; i < n; i++)
    {
        if (A[i] > B[i])
            c1++;
        else if (A[i] < B[i])
            c2++;
    }
    cout << c1 << " " << c2;

    return 0;
}
