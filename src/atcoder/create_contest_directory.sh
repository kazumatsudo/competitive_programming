#!/bin/sh

# ./create_contest_directory.sh directory_name で競技プログラミング用のファイルを作成する
create_file() {
directory_name=$1
file_name=$2

if test -e "$file_name.cpp"; then
  echo "$file_name.cpp found."
  exit
fi

echo "#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;

int main()
{
    int a;
    cin >> a;

    cout << \"$directory_name/$file_name\" << endl;
    return 0;
}
" >> "$file_name.cpp"
echo "add_executable($file_name $file_name.cpp)" >> CMakeLists.txt
}

directory_name=$1
if test -e $directory_name; then
  echo "./$directory_name/ found."
  exit
fi

mkdir $directory_name
cd $directory_name
echo "project(${directory_name})" >> CMakeLists.txt
echo "set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")" >> CMakeLists.txt

create_file $directory_name a
create_file $directory_name b
create_file $directory_name c
create_file $directory_name d
create_file $directory_name e
create_file $directory_name f