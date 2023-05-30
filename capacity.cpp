#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Srayo";
    // s.clear(); || s="";
    int sz = s.size();
    int maxsz = s.max_size();
    int capacity = s.capacity();
    cout << s << " " << sz << " " << maxsz << " " << capacity << endl;

    // s.clear();
    if (s.empty())
        cout << "Empty" << endl;
    else
        cout << "Block" << endl;

    string a = "Hello World!";
    a.resize(5);
    // a.resize(10, 'x');
    cout << a << endl;

    return 0;
}