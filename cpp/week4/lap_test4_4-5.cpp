#include <iostream>
#include <string>
using namespace std;
int main()
{
    int fish = 900,tomato=100;
    int f,t,can,fb;
    f = fish/3; //300
    t = tomato/2; //50
    fb = f-t;
    if (f>t){
        cout << "fish balance = "<< fb << endl;
        cout << "tomato balance = "<<  t-t <<endl; 
        cout << "fish can = " << t << endl;
    }
    return(0);
}