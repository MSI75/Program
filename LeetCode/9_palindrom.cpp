#include <bits/stdc++.h>
using namespace std;

class Plindrom
{
    public:
    bool plindrom(int x)
    {
       long long int sum=0 ;
        int temp = x, mod;
        while (x > 0)
        {
           mod = x % 10;
            sum =sum*10 +mod;
            x /= 10;
        }

        if (temp == sum)
            return true;
        else
            return false;
    }
};

int main(){
    int n;
    cin>>n;
    Plindrom p;
    cout<<p.plindrom(n)<<"\n";
    return 0;
}