#!/bin/sh

# ./create_contest_directory.sh directory_name で競技プログラミング用のファイルを作成する
create_file() {
if test -e "$1.cpp"; then
  echo "$1.cpp found."
  exit
fi

echo "#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    // 入力
    int a;
    cin >> a;

    // 出力
    cout << a << endl;
    return 0;
}
" >> "$1.cpp"
echo "add_executable($1 $1.cpp)" >> CMakeLists.txt
}

if test -e $1; then
  echo "./$1/ found."
  exit
fi

mkdir $1
cd $1
echo "set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")" >> CMakeLists.txt

create_file a
create_file b
create_file c
create_file d
create_file e
create_file f