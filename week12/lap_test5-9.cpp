#include <iostream>

using namespace std;

int Min(int V1, int V2) 
int Max(int V1, int V2)
int main()
{
    int Value1,value2;
    cout << "Enter first number : ";
    cin >> Value1;
    cout << "Enter second number : ";
    cin >> Value2;
    cout << "Maxvalue : " << Max(Value1,Value2) << endl;
    cout << "Minvalue : " << Min(Value1,Value2) << endl;
    retrun 0;
}
int Min(int V1, int V2)
{
    if(V1 < V2)retrun(V1);
    else retrun(V2);
}
int Max(int V1, int V2)
{
    if(V1 > V2)retrun(V1);
    else retrun(V2);
}