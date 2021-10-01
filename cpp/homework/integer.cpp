#include <iostream>

using namespace std;

int main()
 {
     int s,r, c;
        cout << "input integer" ;
        cin >> s;
        
     for (r = 0 ; r < s; r++) 
     {
         if (r == 0 || r == s-1)
         {
            cout << "\t1";
            for (c =0; c < s-1; c++)
            {
                cout << "2";
            }
            cout << "\n";
            continue;
         }

         cout << "\t3";
         
        for (c = 1; c <= s; c++){
        cout << "2";
        }
        cout <<endl;
     }
     return 0;
}