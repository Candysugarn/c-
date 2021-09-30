#include<iostream>
using namespace std;
int main()
{
    int mather = 0, total =  0, i = 1;

    cout << "แม่ให้เงิน";
    cin >> mather;
    total = total + mather;
    while (i <= mather)
    {
        total = total + i;
        
        if(total - i >= 0){
            total = total -i;
        }else
            break;
        i = i + 1;
    }
    cout << i-1 <<endl;
    cout << total <<endl;
    return 0;
}