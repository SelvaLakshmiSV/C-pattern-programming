#include<iostream>
using namespace std;
int main()
{
    int row,col;
    int n;
    cout<<"Enter no of rows";
    cin>>n;
    for(row =1;row<=n;row++,cout<<"\n")
    {
        for(col =1;col<=row;col++)
        {
            cout<<char(col+64)<<" ";

        }
    }

    return 0;
}
