#include <iostream>

using namespace std;

float checkprime(int num);

int main()
{
    int number;
    cout << "input Number to check prime number : ";
    cin >> number;
    cout << checkprime(number);
    return 0;
}
float checkprime(int num)
{
    int number;
    for (int i = 1; i < num; i++)
    {
        if((i == 1 || 1%2 == 0 || i%3 == 0 || i%5 == 0 || i%7 == 0) 
        && (i != 2 && i != 5 && i != 7))
        {
            cout << "Is not prime number" << endl;
        }else {
            cout << "Is prime number" << endl;
        }
        return (number);
    }
}