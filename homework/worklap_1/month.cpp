#include<iostream>

using namespace std;
int main()
{
    string   month[12]={"January","Febuary","March","April","May","June","July",
                    "August","Srptember","October","November","December"}; //เก็บข้อมูลเป็น array 12 ข้อมูล

    int inmonth;
            cout << "Enter number for month.\n" ;
            cin >> inmonth;
            cout << "Your month is : " << month[inmonth-1] << endl ; //เรียก array มาโชว์โดยเอามา -1 เพราะ array เริ่มที่ 0
            return (0);
}