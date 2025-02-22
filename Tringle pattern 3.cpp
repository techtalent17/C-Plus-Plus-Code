//Tringle pattern3.cpp
#include<bits/stdc++.h>
using namespace std;
    int main(){
   int n,row,col;
    cout<<"Enter number of lines:  ";
    cin>>n;

        for( row=1; row<=n; row++)
        {
            for( k=n-row; k>0; k--)
            cout<<"  ";
            for ( col=1; col<=row; col++)
            {
                cout<<" * ";
            }
            cout<<endl;
        }
        return 0;
    }
