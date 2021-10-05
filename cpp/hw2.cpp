#include<iostream>
#include<cstring>
using namespace std;

int isValidAddress (int &address){

   if(address >= 1 && address <= 223   ){
        return 1;
   }else{
        return 0;
   }
       
}

char addressclass (int address, int &numnet ,int &numip){

    if(address >= 1 && address <= 127   ){

        numnet = 127;
        numip  = 16777214;
           
        return 'A';

    }else if(address >= 128 && address <= 191 ){

        numnet = 16384;
        numip  = 65536;

        return 'B';

    }else if(address >= 192 && address <= 223){

        numnet = 2097152;
        numip  = 256;

        return 'C';
        
    }

}

int main(){
    int address,numip,numnet;
    
    
    cout<<"Please enter the first digit : "; cin>>address;
    if(!isValidAddress(address)){
        cout<<"It is an invalid address."<<endl;
    }else{
        
        cout<<"The class is "<<addressclass(address,numnet,numip)<<endl;
        cout<<"The number of networks   : "<<numnet<<endl;
        cout<<"The number of IP address : "<<numip<<endl;
    }
   
    
}