//ของปอม
#include<iostream>
using namespace std;

void starPattern(int a);

int main(){
	int a1,a2,a3,a4,a5;
	cout << "Enter five number : ";
	cin >> a1 >> a2 >> a3 >> a4 >> a5;
	cout << a1 << " : "; starPattern(a1);
	cout << a2 << " : "; starPattern(a2);
	cout << a3 << " : "; starPattern(a3);
	cout << a4 << " : "; starPattern(a4);
	cout << a5 << " : "; starPattern(a5);
	return 0;
}

void starPattern(int a){
	for(int i =0;i <= a;i++){
		cout << "*";
		if(i == a){
			cout << endl;
		}
	}
}