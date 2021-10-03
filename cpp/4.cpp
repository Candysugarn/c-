//ของอาท
#include<iostream>
using namespace std;

float calInterest(float money,float year,float inTer);

int main(){
	float money=0,year=0,interest=0;
	float inTer=0;
	cout << "Enter money : ";cin >> money;
	cout << "Enter year : ";cin >> year;
	cout << "Enter interest rate : ";cin >> interest;
	inTer = interest/100;
	
	cout <<"Total is " <<calInterest(money,year,inTer);
}

float calInterest(float money,float year,float inTer){
	if(year > 0){
		return calInterest(money,year-1,inTer)+(calInterest(money,year-1,inTer)*inTer);
	}else{
		return money;
	}
	/*float inTer=0;
	float result=0,remain=0,index=0;
	index = money;
	for(int i = 0;i <= year;i++){
		inTer = money*interest/100;
		result = money+inTer;
		cout << "yaer " << i << " : " << result << " bath." <<endl;
		money = result;
	}
	remain = money - index;
	cout << "You have income : " << remain << " bath." << endl;*/
}
