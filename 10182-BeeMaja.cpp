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

        v++; // 到下一層，因為這個也算是去到下面的一個值，所以 next step 就會減掉一次動作
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

        for (int i = 0; i < v; i++) {
            x--;
            n--;
            if(n == 1)
                return;
        }

        for (int i = 0; i < v; i++) {
            y--;
            n--;
            if(n == 1)
                return;
        }

        for (int i = 0; i < v; i++) {
            x++;
            y--;
            n--;
            if(n == 1)
                return;
        }

        for (int i = 0; i < v; i++) {
            x++;
            n--;
            if(n == 1)
                return;
        }

        for (int i = 0; i < v; i++) {
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


好的，我们将一步一步地使用给定的程序代码并详细说明如何处理输入为 19 的情况，并逐步列出每个坐标的变化。

### 程序代码
```cpp
#include <iostream>
int varv, n, x, y;

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

        for (int i = 0; i < varv - 1; i++) {
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
            if(--n == 1)
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
```

### 步骤解析
假设输入为 `19`，我们将逐步解释程序的执行过程，并列出每个坐标的变化。

1. **初始化**：
   - `varv = 0`
   - `x = 0`
   - `y = 0`
   - `n = 19`

2. **第一次进入循环**：
   - `varv++` 使 `varv` 变为 `1`
   - `y++` 使 `y` 变为 `1`
   - `n--` 使 `n` 变为 `18`
   - 当前坐标为 `(0, 1)`

3. **第一次方向移动（左上方向）**：
   - `for (int i = 0; i < varv - 1; i++)`，这里 `varv - 1 = 0`，因此不执行该循环。

4. **第二个方向（左方向）**：
   - `for (int i = 0; i < varv; i++)`，这里 `varv = 1`，因此执行一次：
     - `x--` 使 `x` 变为 `-1`
     - `n--` 使 `n` 变为 `17`
     - 当前坐标为 `(-1, 1)`

5. **第三个方向（左下方向）**：
   - `for (int i = 0; i < varv; i++)`，这里 `varv = 1`，因此执行一次：
     - `y--` 使 `y` 变为 `0`
     - `n--` 使 `n` 变为 `16`
     - 当前坐标为 `(-1, 0)`

6. **第四个方向（右下方向）**：
   - `for (int i = 0; i < varv; i++)`，这里 `varv = 1`，因此执行一次：
     - `x++` 使 `x` 变为 `0`
     - `y--` 使 `y` 变为 `-1`
     - `n--` 使 `n` 变为 `15`
     - 当前坐标为 `(0, -1)`

7. **第五个方向（右方向）**：
   - `for (int i = 0; i < varv; i++)`，这里 `varv = 1`，因此执行一次：
     - `x++` 使 `x` 变为 `1`
     - `n--` 使 `n` 变为 `14`
     - 当前坐标为 `(1, -1)`

8. **第六个方向（右上方向）**：
   - `for (int i = 0; i < varv; i++)`，这里 `varv = 1`，因此执行一次：
     - `y++` 使 `y` 变为 `0`
     - `n--` 使 `n` 变为 `13`
     - 当前坐标为 `(1, 0)`

### 第二次进入循环：
1. `varv++` 使 `varv` 变为 `2`
2. `y++` 使 `y` 变为 `1`
3. `n--` 使 `n` 变为 `12`
4. 当前坐标为 `(1, 1)`

### 第二层遍历六个方向：

1. **第一个方向（左上方向）**：
   - `for (int i = 0; i < varv - 1; i++)`，这里 `varv - 1 = 1`，因此执行一次：
     - `x--` 使 `x` 变为 `0`
     - `y++` 使 `y` 变为 `2`
     - `n--` 使 `n` 变为 `11`
     - 当前坐标为 `(0, 2)`

2. **第二个方向（左方向）**：
   - `for (int i = 0; i < varv; i++)`，这里 `varv = 2`，因此执行两次：
     - 第一次循环：
       - `x--` 使 `x` 变为 `-1`
       - `n--` 使 `n` 变为 `10`
       - 当前坐标为 `(-1, 2)`
     - 第二次循环：
       - `x--` 使 `x` 变为 `-2`
       - `n--` 使 `n` 变为 `9`
       - 当前坐标为 `(-2, 2)`

3. **第三个方向（左下方向）**：
   - `for (int i = 0; i < varv; i++)`，这里 `varv = 2`，因此执行两次：
     - 第一次循环：
       - `y--` 使 `y` 变为 `1`
       - `n--` 使 `n` 变为 `8`
       - 当前坐标为 `(-2, 1)`
     - 第二次循环：
       - `y--` 使 `y` 变为 `0`
       - `n--` 使 `n` 变为 `7`
       - 当前坐标为 `(-2, 0)`

4. **第四个方向（右下方向）**：
   - `for (int i = 0; i < varv; i++)`，这里 `varv = 2`，因此执行两次：
     - 第一次循环：
       - `x++` 使 `x` 变为 `-1`
       - `y--` 使 `y` 变为 `-1`
       - `n--` 使 `n` 变为 `6`
       - 当前坐标为 `(-1, -1)`
     - 第二次循环：
       - `x++` 使 `x` 变为 `0`
       - `y--` 使 `y` 变为 `-2`
       - `n--` 使 `n` 变为 `5`
       - 当前坐标为 `(0, -2)`

5. **第五个方向（右方向）**：
   - `for (int i = 0; i < varv; i++)`，这里 `varv = 2`，因此执行两次：
     - 第一次循环：
       - `x++` 使 `x` 变为 `1`
       - `n--` 使 `n` 变为 `4`
       - 当前坐标为 `(1, -2)`
     - 第二次循环：
       - `x++` 使 `x` 变为 `2`
       - `n--` 使 `n` 变为 `3`
       - 当前坐标为 `(2, -2)`

6. **第六个方向（右上方向）**：
   - `for (int i = 0; i < varv; i++)`，这里 `varv = 2`，因此执行两次：
     - 第一次循环：
       - `y++` 使 `y` 变为 `-1`
       - `n--` 使 `n` 变为 `2`
       - 当前坐标为 `(2, -1)`
     - 第二次循环：
       - `y++` 使 `y` 变为 `0`
       - `n--` 使 `n` 变为 `1`
       - 当前坐标为
