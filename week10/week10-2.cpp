// week10-2.cpp SOIT106_Advance_002
#include <iostream>
using namespace std;
int isPrime(int N) {
    if (N < 2) return 0;               // 0 和 1 不是質數
    // 除了 1 跟 N 本身，都不整除
    for (int i=2; i*i<=N; i++) {       // 只需檢查到 √N
        if ( N%i==0 ) return 0;
    }
    return 1;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i=a; i<=b; i++) {
        if ( isPrime(i) ) ans++;
    }
    cout << ans << "\n";
    return 0;
}
