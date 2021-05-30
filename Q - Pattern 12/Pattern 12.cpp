#include<iostream>
using namespace std;
int main()
{
    int row,col;
    int n;
    cout<<"Enter the number of columns : ";
    cin>>n;
    for(row = 1;row <= n;row++,cout<<"\n"){
        for(col = 1;col <= row;col++){
            cout<<col<<""<<row<<" ";
        }
    }
     for(row = n-1;row >= 1;row--,cout<<"\n"){
        for(col = 1;col <= row;col++){
           cout<<col<<""<<row<<" ";
        }
    }

    return 0;
}
