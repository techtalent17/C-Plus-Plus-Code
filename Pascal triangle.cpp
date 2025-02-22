
//pascal tringle in c++
#include<bits/stdc++.h>
using namespace std;
    int main(){
   int n,i,j;
    cout<<"Enter number of lines:  ";
    cin>>n;
        for(int i=1; i<=n; i++)
        {
            int coef = 1;
            for(int k=n-i; k>0; k--)
                cout<<" ";
            for (int j=1; j<=i; j++)
               {
               cout<<coef<<" ";
                coef=coef*(i-j)/j;
                }
            cout<<endl;
        }

        return 0;
    }
