#include <iostream>
using namespace std ;
int main()
{
    int i , j , n ;
    cout << "Enter n :" ;
    cin >> n ;
    for(i=2;i<=n;i+=2)
    {
       for(j=2;j<=i; j+=2)
       {
           cout << j << " ";
       }
        cout << endl;
    }
}
