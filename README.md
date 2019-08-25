# 競技プログラミング

## 始め方

- CMakeLists.txt を右クリック -> Load CMake project

## Tips
- 前から比較ではなく、後ろから比較することが有効なことがある
- C++ では掛け算を1回やるたびに毎回余りを取ったほうが無難 (余りを求められている場合)

## 書き方メモ
- 標準入力
```
// 標準入力
int a;
cin >> a;

// スペース区切りの標準入力
int b,c;
cin >> b >> c;
```

- 標準出力
```
// endl は改行
cout << (a+b+c) << " " << s << endl;
```

- 文字列を数え上げる
```
string s;
cin >> s;
int result = count(s.cbegin(), s.cend(), '1');
```

- ソート
```
int a[n];
for (int i = 0; i < n; i++) {
    cin >> a[i];
}
// 第2引数で終えれば昇順、第3引数を greater<>() で指定すれば降順
sort(a, a + n, greater<>());
```

- 重複を除いた配列
```
#include <set> // set を呼ぶ際に必要

set<int> d;
for (int i = 0; i < n; i++) {
    int a;
    cin >> a;

    d.insert(a);
}
```

## テンプレート
```
#include<iostream>
using namespace std;
int main()
{
    // 入力
    int a,b;
    cin >> a >> b;

    // 出力
    cout << a << b << endl;
    return 0;
}
```

## リンク
- [AtCoder Beginners Selection](https://atcoder.jp/contests/abs)