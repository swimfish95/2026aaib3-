///week01-2
///c++版本
#include <iostream>//io 串流外掛
using namespace std;
int main()
{
    int N;
    cin >>N;// console input 到右邊n
    int b=N,ans=0;
    while(N>0){
        ans = ans*10+N%10;
        N = N/10;
    }
    //cout <<b <<ans <<b+ans;//錯誤少了+ =
    ///cout << b<<"+"<<ans<<"="<<b+ans<<"\n";//正確1
    cout << b<<"+"<<ans<<"="<<b+ans<<endl;//正確2
    //printf("%d+%d=%d\n",b,ans,b+ans);正確3


}
