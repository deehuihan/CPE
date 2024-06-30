#include <iostream>
int v, n , x, y;

//v 是層
//n 是 input
//x y 是maja 位置
using namespace std;

void solve()
{
    while(true)
    {
        if(n == 1) // 如果n是1的話表示在 (0,0) 這個位置，所以return 就好了，拿到 0,0
            return;

        v++; // 到下一層
        y++; // 移動起始位置
        n--; // 表示處理了一個蜂巢

        if(n == 1)
            return;
        //這個是因為我們換到下一層，我們需要看一下每一個方向的蜂巢
        for (int i = 0; i < v -1; i++) {  //第一個方向
            x--;
            y++;
            n--;
            if(n == 1)
                return;
        }

        for (int i = 0; i < v; i++) { //第二個方向
            x--;
            n--;
            if(n == 1)
                return;
        }

        for (int i = 0; i < v; i++) { //第三
            y--;
            n--;
            if(n == 1)
                return;
        }

        for (int i = 0; i < v; i++) { //第四
            x++;
            y--;
            n--;
            if(n == 1)
                return;
        }

        for (int i = 0; i < v; i++) { //第五
            x++;
            n--;
            if(n == 1)
                return;
        }

        for (int i = 0; i < v; i++) { //第六
            y++;
            n--;
            if(n== 1)
                return;
        }
    }
}

int main()
{
    while(cin >> n)
    {
        v = 0;
        x = 0;
        y = 0;

        solve();

        cout << x << " " << y << endl;
    }
    return 0;
}
