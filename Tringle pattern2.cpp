//Tringle pattern2.cpp
#include<bits/stdc++.h>
using namespace std;
    int main(){
   int n,row,col;
    cout<<"Enter number of lines:  ";
    cin>>n;
        for( row=n; row>=1; row--)
        {
            for ( col=row; col>0; col--)
            {
                cout<<" ** ";
            }
            cout<<endl;
        }
        return 0;
    }
