#include<iostream>
using namespace std ;
int main()
{
    int n ,i,j ;
    cout << " Enter n :"<<endl ;
    cin >> n ;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<" * " ;
        }
        cout << endl ;
    }
}

