#include <iostream>
int varx, n , x, y;

using namespace std;

void solve()
{
    while(true)
    {
        if(n == 1)
            return;

        varv++;
        y++;
        n--;

        if(n == 1)
            return;

        for (int i = 0; i < varv -1; i++) {
            x--;
            y++;
            if(--n == 1)
                return;
        }

        for (int i = 0; i < varv; i++) {
            x--;
            if(--n == 1)
                return;
        }

        for (int i = 0; i < varv; i++) {
            y--;
            if(--n == 1)
                return;
        }

        for (int i = 0; i < varv; i++) {
            x++;
            y--;
            if(--n == 1)
                return;
        }

        for (int i = 0; i < varv; i++) {
            x++;
            if(--n == 1)
                return;
        }

        for (int i = 0; i < varv; i++) {
            y++;
            if( --n== 1)
                return;
        }
    }
}

int main()
{
    while(cin >> n)
    {
        varv = 0;
        x = 0;
        y = 0;

        solve();

        cout << x << " " << y << endl;
    }
    return 0;
}
