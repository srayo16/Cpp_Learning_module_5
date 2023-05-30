#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "Srayo";
    string b = "Sikder";

    // a = a + " " + b;
    // a.append(b);
    // cout << a << endl;
    // a.resize(6);
    // a[5] = 'M'; don't use!

    // a += "M";
    // a.push_back('M');
    // a.pop_back();
    // a = "Maram";
    // a.assign("Mariam");

    // a.erase(3, 1);
    // cout << a << endl;
    string c = "Hello_World";
    // c.replace(4, 3, "Xzy");
    c.replace(5, 0, " Ustha ");
    // c.insert(5, " Ustha ");

    cout << c << endl;

    return 0;
}