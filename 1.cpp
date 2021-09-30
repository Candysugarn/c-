#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int input,num;
	cout << "Input an integer : ";
	cin >> input;
	cout << "*" << setfill('*') << setw(input-1) << "*" << endl;
	for(int j = 1;j <= input-2;j++){
		cout << "*";
		for(int k = 1;k <= input-2;k++){
			cout << " ";
		}
		cout << "*" << endl;	
	}
	cout << "*" << setfill('*') << setw(input-1) << "*" << endl;
}




