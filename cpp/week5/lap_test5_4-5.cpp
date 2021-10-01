#include <iostream>
#include <string>
using namespace std;
int main()
{
    float salary;
    cout << "input salary";
    cin >> salary;
    if(salary >= 100000){
        cout << "your salary " << salary*5/100 ;
    }else if (salary <= 100001){
        cout << "your salary " << salary*10/100 ; 
    }else if (salary <= 500001){
        cout << "your salary " << salary*20/100 ; 
    }else if (salary <= 1000001){
        cout << "your salary " << salary*30/100 ; 
    }else if (salary <= 4000001){
        cout << "your salary " << salary*37/100 ; 
    }
    return (0);
}