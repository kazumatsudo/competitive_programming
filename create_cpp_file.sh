#!/bin/sh

# ./create_cpp_file.sh filename で競技プログラミング用のファイルを作成する

if test -e "$1.cpp"; then
  echo "$1.cpp found."
  exit
fi

echo "#include<iostream>
using namespace std;
int main()
{
    // 入力
    int a,b;
    cin >> a >> b;

    // 出力
    cout << a + b << endl;
    return 0;
}
" >> "$1.cpp"
echo "\nadd_executable($1 $1.cpp)" >> CMakeLists.txt