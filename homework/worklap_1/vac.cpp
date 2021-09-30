#include <iostream>
#include <string>
using namespace std;
int main()
{
    float salary;
    int vac,totalsy;
    cout << "input salary : ";
    cin >> salary;
    if(salary >= 100000){
         vac = salary*5/100 ;
         totalsy = salary - vac ;
         cout << "\nyour salary \n\n" << vac ; //ทำงานโดยเอา เงินเดือน มาเปลียบเทียบ ถ้าหากเป็นจริง ให้ทำการเอา เงินเดือน  
                                               //มาคูณ 5% แล้วจะได้ภาษีออกมาแล้วเอาไป - กับเงินเดือน ก็จะได้เป็น เงินเดือนที่จะได้รับ

    }else if (salary <= 100001){
        vac = salary*10/100 ;
         totalsy = salary - vac ;
         cout << "\nyour salary \n\n" << vac ; 

    }else if (salary <= 500001){
        vac = salary*20/100 ;
         totalsy = salary - vac ;
         cout << "\nyour salary \n\n" << vac ;

    }else if (salary <= 1000001){
        vac = salary*30/100 ;
         totalsy = salary - vac ;
         cout << "\nyour salary \n\n" << vac ;

    }else if (salary <= 4000001){
        vac = salary*37/100 ;
         totalsy = salary - vac ;
         cout << "\nyour salary \n\n" << vac ;

    }
    return (0);
}