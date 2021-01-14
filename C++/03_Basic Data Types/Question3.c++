#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    long int num;
    char c;
    float f;
    double d;
    cin >> n >> num >> c >> f >> d;
    cout << n << endl
         << num << endl
         << c << endl;
    printf("%.3f\n", f);
    printf("%.9lf", d);
    return 0;
}
