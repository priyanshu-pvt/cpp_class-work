#include<iostream>
using namespace std;

class Addition{
    public:

    void add(int x,int y){
        cout<<"Addition of 2 number is "<<x+y<<endl;}
    void add(float x,float y){
        cout<<"Addition of 2 number is"<<x+y<<endl;}
        };

int main(){
    Addition a1;
    int num1,num2;
    float num3,num4;
    cout<<"Enter 2 integer\n";
    cin >> num1>>num2;
    cout<<"Enter 2 float values\n";
    cin >> num3>>num4;
    a1.add(num1,num2);
    a1.add(num3,num4);
    return 0;
}