#include<iostream>
using namespace std ;
int main()
{
    int i, j ;
    int n ;
    cout <<"Enter n : " ;
    cin >> n ;
    for(i=n;i>=1;i--)
    {
      for(j=1;j<=i;j++)
        {
            cout<< j ;

        }
        n=n-1 ;
            cout << endl ;
    }
}

