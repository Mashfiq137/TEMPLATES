#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

long long  int bigmod(long long int a,long long  int b,long long  int c)
{

    long long  int x;

    if(b==0) return 1;

    else if(b%2==0)
    {
        x = bigmod(a,b/2,c);

        return (x*x)%c;

    }
    else {

        return ((a%c)*bigmod(a,b-1,c))%c;

    }

}

int main(){

            std::ios_base::sync_with_stdio(0);

            long long  int a,b,c,res;

            cin>>a>>b>>c;

            res = bigmod(a,b,c);

            cout<<res<<endl;



return 0;
}
