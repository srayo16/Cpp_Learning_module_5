#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    // cout << s;

    stringstream ss(s);

    string oneWord;
    int count = 0;
    while (ss >> oneWord)
    {
        /* code */
        cout << oneWord << endl;
        count++; // word count;
    }
    cout << count;
    return 0;
}