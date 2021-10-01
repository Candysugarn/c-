#include <iostream>
using namespace std;
void a(void);
void b(void);
void c(void);
int x = 1;
int main()
{
    int x = 5;
    cout << "local x in outer scope of main is " << x << endl;
    {
        int x = 7;
        cout << "local x in outer scope of main is " << x << endl;

    }
    cout << "local x in outer scope of main is " << x << endl;
    a();
    b();
    c();
    a();
    b();
    c();
    cout << "local x in main" << x << endl;
    return 0;
}
void a()
{
    int x = 25;
    cout << "\nlocal x is " << x << endl;
    ++x;
    cout << "local static is " << x;
    cout << "before exiting b()\n";
}
void c()
{
    cout << "\nglobal x is" << x << " on entering c()";
    x += 10;
    cout << "\nglobal x is " << x <<"before exiting c()\n"
}