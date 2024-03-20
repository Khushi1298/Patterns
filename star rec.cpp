#include<iostream>
using namespace std ;
int main()
{
    int n,m ,i,j ;
    cout << " Enter n :"<<endl ;
    cin >> n ;
    cout << " Enter m :"<<endl ;
    cin >> m ;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cout<<" * " ;
        }
        cout << endl ;
    }
}
