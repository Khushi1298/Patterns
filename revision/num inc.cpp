#include<iostream>
#include<iomanip>
using namespace std ;
int main()
{
    int k=1;
    for(int i=1;i<5;i++)
    {
        for(int j=1;j<4;j++)
        {
            cout<<setw(3) <<k<<" ";
            k++;
        }
        cout<<endl;
    }
}

