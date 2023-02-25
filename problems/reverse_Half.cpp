#include<iostream>
#include<math.h>
using namespace std;
int cntNum(int r)
{
      int cnt=0;
    while(r)
    {
        r/=10;
        cnt++;
    }
    return cnt;
}
int reverse(int n,int cnt)
{
    cout<<n<<"  "<<cnt<<endl;
    if(n<=9) return n;
    int r=pow(10,cnt/2);
    int cnt2=cnt-cnt/2;
    int a=reverse(n/r,cnt2);
    n=reverse(n%r,cnt/2);
    return n*pow(10,cnt2)+a;
}
int main() {
    //problem statement N=1221 make it 2112 by dividing 1/2 12 21
    //then reverse it 21 12 and merse 2112
    int n=1221;
    int cnt=cntNum(n);
    cout<<cnt<<endl;
    int cnt2=cnt-(cnt/2);
    cnt=cnt/2;
    int r=pow(10,cnt);
    int a=reverse(n/r,cnt2);
    cout<<"a:"<<a<<endl;
    n=reverse(n%r,cnt);
   cout<<a*r+n<<endl;
    return 0;
}
