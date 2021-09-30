#include<iostream>
using namespace std;

void input(int data[],int& size);
void difference(const int a[],int sizea,
                  const int b[],int sizeb,
                  int c[],int& sizec);
                      
void output(const int data[],int size);

int main()
{
    int a[10],b[10],c[20];
    int sizea=0,sizeb=0,sizec=0;
    cout<<"set A :";input(a,sizea);
    cout<<"set B :";input(b,sizeb);
    
    difference(a,sizea,b,sizeb,c,sizec);
    
    cout<<"A - B : ";output(c,sizec);
    return 0;
}

void input(int data[],int& size)
{
    size=0;    cin>>data[size];  
    while(data[size] != -1)
    {
        size++;
        cin>>data[size];  
    }
}
void difference(const int a[],int sizea,
                  const int b[],int sizeb,
                  int c[],int& sizec)
{


//----------Coding this place for process A - B


}

void output(const int data[],int size)
{
    for(int i=0;i<size;i++)
      cout<<data<<" ";
    cout<<endl;  
}