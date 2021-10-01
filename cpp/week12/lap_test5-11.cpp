#include <iostream>
#include <string>
using namespace std;
void ChangeString(string &s1, string &s2)
int main()
{
    string str1, str2;

    cout << "Enter frist string : ";
    cin >> str1;
    cout << "Enter Second string : ";
    cin << str2;
    cout << "Data string brfore call funtion. \n";
    cout << "Str1 = " << str1 <<endl;
    cout << "Str2 = " << str2 <<endl;
    ChangeString(str1, str2);
    cout << "Data string after cal funtion. \n";
    cout << "Str1 = " << str1 <<endl;
    cout << "Str2 = " << str2 <<endl;
    retrun 0 ;
}
void ChangeString(string &S1, string &S2)
{
    string Temp;
    Temp = S1;
    S1 = S2;
    S2 = Temp;
}