#include<iostream>
using namespace std;
int main()
{
    int row,col;
    int n;
    cout<<"Enter the number of columns : ";
    cin>>n;
    for(row = n;row >= 1;row--,cout<<"\n"){
        for(col = 1;col <= row;col++){
            cout<<char(64+row)<<" ";
        }
    }
    return 0;
}
