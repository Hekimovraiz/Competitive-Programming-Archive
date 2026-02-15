/*
 * Problem: abc173_a
 * Platform: AtCoder
 * Link: https://atcoder.jp/contests/abc173/tasks/abc173_a
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long N;
    cin >> N;
    if(N % 1000 == 0){
        cout << 0;
    }else{
        cout << 1000 - (N % 1000);
    }
    return 0;
}