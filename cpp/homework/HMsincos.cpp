#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;

    cout << "enter number : ";cin >> x;
    cout << "----------------------------------------------------" << endl;
    cout << "result sinx^2 *cosx^2 is              : " << (sin(x)*(sin(x)))*((cos(x)*cos(x))) << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "result 1/2*sqrt(tan(cos(x))) is       : " << 1/2*sqrt((tan(cos(x)))) << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "result (log((x*x)/1-x))/pow(x,5+x) is : " << (log((x*x)/1-x))/pow(x,5+x) << endl;
    cout << endl;
    return 0;
}
