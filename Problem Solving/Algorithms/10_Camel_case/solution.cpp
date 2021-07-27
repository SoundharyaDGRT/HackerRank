#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[100000];
    cin >> s;
    int count = 1;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
