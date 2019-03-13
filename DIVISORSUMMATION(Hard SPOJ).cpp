#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i;
    int sum;

    cin>>t;

    for(int tc=1;tc<=t;tc++){
        cin>>n;

        sum=0;

        for(i=1;i*i<n;i++)

        if(n%i==0)

            sum+=i+n/i;

        if(i*i==n) sum+=i;

        sum=sum - n;

        cout<<sum<<endl;
    }

    return 0;
}
