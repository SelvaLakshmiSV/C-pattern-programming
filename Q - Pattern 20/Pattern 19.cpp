#include<iostream>
using namespace std;
int main()
{
  for(int row = 1;row<=5;row++,cout<<"\n")
  {
    for(int col =row;col>=1;col-- )
    {
      cout<<col<<" ";
    }
  }
  return 0;
}
