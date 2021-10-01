#include <iostream>
#include <string.h>
using namespace std;

template <class C>
C score(C men,C HW,C te,C mid,C final);
template <class C1>
string Calgrade(C1 total);
template <class C2>
string Calgrade1(C2 total);
template <class C3>
string Calgrade2(C3 total);
int main()
{
    int men, HW, te, mid, final,i;
    string GPA;
    for (i>1 ; i <= 20; i++)
    {
    
        cout << "Mentality score [0-5] : "; cin >> men;
        cout << "Homework score [0-10] : "; cin >> HW;
        cout << "TestLab score [0-15] : "; cin >> te;
        cout << "Midterm score [0-35] : "; cin >> mid;
        cout << "Finalterm score [0-35] : "; cin >> final;
        int total = score<int>(men, HW, te, mid, final);
        string A = Calgrade(total);
        string g = Calgrade1(total);
        string s = Calgrade2(total);
        cout << "total score : " << total << endl;
        cout << "1st form grade : " << A << endl;
        cout << "2nd form grade : " << g << endl;
        cout << "Judging Criteria : " << s << endl;
    }
    return 0;
}

template <class C>
C score(C men,C HW,C te,C mid,C final)
{
    T total;
    total = men + HW + te + mid + final;
    return (total);
}

template <class C1>
string Calgrade(C1 total)
{
    string GPA;
    if (total >= 80)
    {
        GPA = "A";
    }else if (total >= 70)
    {
        GPA = "B";
    }else if (total >= 60)
    {
        GPA = "C";
    }else if (total >= 50)
    {
        GPA = "D";
    }else
    {
        GPA = "F";
    }
    return (GPA);
}

template <class C2>
string Calgrade1(C2 total)
{
    string G;
    if (total >= 80)
    {
        G = "A";
    }else if (total >= 75)
    {
        G = "B+";
    }else if (total >= 70)
    {
        G = "B";
    }else if (total >= 65)
    {
        G = "C+";
    }else if (total >= 60)
    {
        G = "C";
    }else if (total >= 55)
    {
        G = "D+";
    }else if (total >= 50)
    {
        G = "D";
    }else
    {
        G = "F";
    }
    return (G);
}

template <class C3>
string Calgrade2(C3 total)
{
    string sc;
    if (total < 50)
    {
        sc = "not pass";
    }else 
    {
        sc = "pass";
    }
    return (sc);
} 