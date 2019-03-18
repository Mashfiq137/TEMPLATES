#include<bits/stdc++.h>

using namespace std;

char A[50],B[50];

int LCS(int i,int j)
{
    if(A[i]=='\0' || B[j]=='\0')
        return 0;

    else if(A[i]==B[j])
        return 1+LCS(i+1,j+1);

    else return max(LCS(i+1,j),LCS(i,j+1));

}

int main(){

            scanf("%s",A);

            scanf("%s",B);

            int x = LCS(0,0);

            cout<<x<<endl;
return 0;
}
