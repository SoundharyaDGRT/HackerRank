#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s)
{
    int count = 0, letter1 = 0, letter2 = 1, letter3 = 2;
    while (letter3 < s.size())
    {
        if (s[letter1] != 'S')
            count++;

        if (s[letter2] != 'O')
            count++;
        if (s[letter3] != 'S')
            count++;
        letter1 += 3;
        letter2 += 3;
        letter3 += 3;
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
