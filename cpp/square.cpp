//ของแบงค์
#include <iostream>

using namespace std;

int main()
{
    int number,colum,n,count;
    cout << "Enter an Integer : "; cin>>number;
    n = number-2;

    for (int i = 1; i <= number; i++){
        cout << "1";
    }
    cout <<endl;

 
    for(count = 1; count <= n; count++){
    cout << "4";
    for (colum = 1; colum <= n; colum++){
        cout << " ";
    }
    cout << "3";
    cout <<endl;
    }

    for (int i = 1; i <= number; i++){
        cout << "2";
    }
    cout <<endl;
  
    return 0;
}