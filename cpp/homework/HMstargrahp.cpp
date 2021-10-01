#include<iostream>
using namespace std;

void stargraph(int n);

int main(){
	int n1,n2,n3,n4,n5;
	cout << "Enter five number : ";
	cin >> n1 >> n2 >> n3 >> n4 >> n5;
	cout << n1 << " : "; starPattern(n1);
	cout << n2 << " : "; starPattern(n2);
	cout << n3 << " : "; starPattern(n3);
	cout << n4 << " : "; starPattern(n4);
	cout << n5 << " : "; starPattern(n5);
	return 0;
}

void starPattern(int n){
	for(int i =0;i <= n;i++){
		cout << "*";
		if(i == n){
			cout << endl;
		}
	}
}