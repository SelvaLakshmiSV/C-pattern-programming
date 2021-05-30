#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    cout<<"Enter the number of stars :\n";
    cin>>n;
    for(row = 1;row<=n;row++,cout<<"\n"){
        for(col = 1;col <= n;col++){
            if(col == 1||row == n||col==n||row==1)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
    }


    return 0;
}
