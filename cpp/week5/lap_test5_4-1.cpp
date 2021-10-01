#include <iostream>
#include <string>
using namespace std;
int main()
{
    int number;
    cout << "Enter number for check :\n";
    cin >> number ;
    if (number %2 <= 0){
        cout << "this text is nomber\n"; 
    }
    else{
        cout << number << "this text is number\n";
    }
    return 0;
}