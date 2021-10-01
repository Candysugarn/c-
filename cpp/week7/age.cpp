#include<iostream>
using namespace std;


int main(){
	
	int age[1000],person;
	char check;
	
	do{	
		for(int i=0; i<age[1000]; i++){
			cout<<"Person  "<<++person<<endl;
			cout<<"Enter age        : "; cin>>age[i];
			if(age[i] >= 0  && age[i] <= 10) cout<<"Group is "<<"Children";
			if(age[i] >= 11 && age[i] <= 20) cout<<"Group is "<<"Teenage";
			if(age[i] >= 21 && age[i] <= 35) cout<<"Group is "<<"Adult";
			if(age[i] >= 36 && age[i] <= 55) cout<<"Group is "<<"Middle age";
			if(age[i] >= 56) cout<<"Group is "<<"Old age";	
		}
		cout<<endl;
		cout<<"Continue ? (Y/y) : "; cin>>check;	
		cout<<"----------------------"<<endl;
	}while(check == 'Y' || check == 'y');


	return 0;
}
