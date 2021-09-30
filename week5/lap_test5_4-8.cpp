#include <iostream>
using namespace std;
int main()
{
    int Num;
    cout << "Enter number";
    cin >> Num;
    int Sum = 0;
    int value;
    for (int n = 1; n <= Num; n++){
        cout << "Enter integer value("<<n<<"): ";
        cin >> value;
        Sum = Sum + value;
    }
    cout << "\nSummation of integer"<< Num;
    cout << "value = "<< Sum << endl;
    return(0);
}