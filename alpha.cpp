#include <iostream>
using namespace std ;
int main()
{
   int i , j , n;
   cout << "Enter n : " ;
   cin >> n ;
   for(i=1;i<=n;i++)
   {
       char A = 'A'+i-1 ;
       for(j=1;j<=n;j++)
        cout << A ;
        cout << endl  ;
   }
}
