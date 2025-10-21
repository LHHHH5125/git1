#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    char x, y, z;
    cin >> a >> b >> c;
    cin >> x >> y >> z;

    int p[3];
    if (a <= b && a <= c) 
    {
        p[0] = a;
        if (b <= c) 
        {
            p[1] = b;
            p[2] = c;
        }
        else 
        {
            p[1] = c;
            p[2] = b;
        }
    }
    else if (b <= a && b <= c) 
    {
        p[0] = b;
        if (a <= c) 
        {
            p[1] = a;
            p[2] = c;
        }
        else 
        {
            p[1] = c;
            p[2] = a;
        }
    }
    else { 
        p[0] = c;
        if (a <= b) 
        {
            p[1] = a;
            p[2] = b;
        }
        else 
        {
            p[1] = b;
            p[2] = a;
        }
    }
    cout << p[x - 'A'] << " " << p[y - 'A'] << " " << p[z - 'A'] << endl;
    return 0;
}