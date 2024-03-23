#include <iostream>
using namespace std ;
int main()
{
   int i , j , n;
   cout << "Enter n : " ;
   cin >> n ;
   for(i=1;i<=n;i++)
   {
       for (j=1;j<=i;j++)
       {
           char A = 'A'+j-1 ;
           if(i%2==1)
           {
                cout << " "<<j<<" " ;
           }
         else
            cout <<" "<< A <<" " ;
       }
        cout << endl  ;
   }
}


