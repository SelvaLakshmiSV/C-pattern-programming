#include<iostream>
using namespace std;
int main()
{
    int row,col;
    int n,ch = 65;
    cout<<"Enter the number of columns : ";
    cin>>n;
    for(row = 1;row <= n;row++,cout<<"\n"){
        for(col = 1;col <= row;col++){
            cout<<char((ch++))<<" ";
        }
    }
     for(row = n-1;row >= 1;row--,cout<<"\n"){
        for(col = 1;col <= row;col++){
            cout<<char((ch++))<<" ";
        }
    }

    return 0;
}
