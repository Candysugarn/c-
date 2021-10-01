#include <iostream>

using namespace std;
void sort3(int &v1, int &v2, int &v3);
int main() 
{
    int Value1, Value2, Value3;
    cout << "Enter three integer number : ";
    cin >> Value1>>Value2>>Value3;
    Output1 = Value1;
    Output2 = Value2;
    Output3 = Value3;
    Sort3(Value1, Value2, Value3);
    cout << Output1 <<" "<< Output2 <<" " << Output3;
    cout << "int sorted order is";
    cout << Output1 <<" " <<Output2 <<" " << Output3 << endl;
    retrun 0;
}
void Sort3(int &v1, int &v2, int &v3)
{
    int tmp;
    if(v1 > v2){
            tmp = v1;
            v1 = v2;
            v2 = tmp;
    }
    if(v1 > v3){
            tmp = v1;
            v1 = v3;
            v3 = tmp;
    }
    if (v2 > v3){
            tmp = v2;
            v2 = v3;
            v3 = tmp;
    }
}