#include<iostream>
using namespace std;
int main()
{
    // 入力
    string S;
    cin >> S;

    string T = "";
    while (S.size() > T.size()) {
        string TwithDreamer = T + "dreamer";
        string TwithDream = T + "dream";
        string TwithEraser = T + "eraser";
        string TwithErase = T + "erase";

        if (equal(begin(TwithDreamer), end(TwithDreamer), begin(S))) {
            T = TwithDreamer;
            continue;
        } else if (equal(begin(TwithDream), end(TwithDream), begin(S))) {
            T = TwithDream;
            continue;
        } else if (equal(begin(TwithEraser), end(TwithEraser), begin(S))) {
            T = TwithEraser;
            continue;
        } else if (equal(begin(TwithErase), end(TwithErase), begin(S))) {
            T = TwithErase;
            continue;
        }

        if (S == T) {
            cout << "Yes" << endl;
        }

        break;
    }

    // 出力
    cout << "No" << endl;
    return 0;
}

