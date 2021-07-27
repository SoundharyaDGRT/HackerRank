#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, negative = 0, positive = 0, zero = 0;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < n; i++)
    {
        if (A[i] < 0)
        {
            negative++;
        }
        else if (A[i] > 0)
        {
            positive++;
        }
        else if (A[i] == 0)
        {
            zero++;
        }
    }
    cout << setprecision(6) << (float)positive / n << endl;
    cout << setprecision(6) << (float)negative / n << endl;
    cout << setprecision(6) << (float)zero / n << endl;
    return 0;
}
