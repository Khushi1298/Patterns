#include <iostream>
using namespace std ;
int main()
{
    int i , j , n ;
    cout << "Enter n :" ;
    cin >> n ;
    for(i=1;i<=n;i+=2)
    {
       for(j=1;j<=i; j+=2)
       {
           cout << j << " ";
       }
        cout << endl;
    }
}

