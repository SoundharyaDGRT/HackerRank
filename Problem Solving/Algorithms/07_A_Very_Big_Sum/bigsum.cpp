#include <iostream>
using namespace std;
int main()
{
    long long int n, i, sum = 0;
    cin >> n;
    long long int A[n];
    for (i = 0; i < n; i++)
        cin >> A[i];

    for (i = 0; i < n; i++)
    {
        sum = sum + A[i];
    }

    cout << sum;

    return 0;
}
