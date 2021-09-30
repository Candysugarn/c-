#include <iostream>
#include <string>
using namespace std;
int main()
{
    int score;
    cout << "input your score." << endl;
    cin >> score;
    if (score >=50 ){
        cout << "คุณได้เกรด F" << endl;
    }else if (score >= 59){
        cout << "คุณได้เกรด D" << endl;
    }else if (score >= 69){
        cout << "คุณได้เกรด C" << endl;
    }else if (score >= 79){
        cout << "คุณได้เกรด B" << endl;
    }else if (score > 80){
        cout << "คุณได้เกรด A" << endl;
    }
    return 0 ;
}