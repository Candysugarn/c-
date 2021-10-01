/*6406021411043 พงศกร   ศรีทะแก้ว
  6406021421171 จิลายุทธ  บัณฑิต
  6406021421031 ไกรวิชญ์  ใจเยี่ยม*/
#include<iostream>
using namespace std;

int main(){
	int j,number1,number2,sum;
	
	cout<<"Enter Number 1 : "; cin>>number1;
	cout<<"Enter Number 2 : "; cin>>number2;
	sum = 0;
	
	for(int i=number1; i<=number2; i++){
    	j = 2;
        while(i % j != 0){
        	j++;
        }
    	if(i != j){
    		cout<<i<<endl;
    		sum += i*i;
		}
	
    }
    cout<<"Sumnation = "<<sum;
    
	return 0;
}
