#include <iostream>
#include <string>
using namespace std;
int main()
{
    int number;
    cout << "\ninput number!!!\n";
    cin >> number;
    if (number<0){
        cout << "Number is negative.";
    }else if (number==0)
    {
      cout << "Number is zero.";
    }else{
        cout << "Number is positive.";
    }
}