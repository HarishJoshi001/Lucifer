#include<iostream>
using namespace std;

class Design1{
    int code, qty;
    float price;
public:
    Design1(int a, int b, float c){
        code = a;
        qty = b;
        price = c;
    }
    void display(){
        cout<<"code: "<<code<<endl;
        cout<<"qty: "<<qty<<endl;
        cout<<"price: "<<price<<endl;
    }
    int getcode(){ return code; }
    int getqty(){ return qty; }
    float getprice(){ return price; }
    operator float(){ return qty * price; }
};

class Design2{
    int code;
    float value;
public:
    Design2(){
        code = 0;
        value = 0;
    }
    Design2(int x, float y){
        code = x;
        value = y;
    }
    void display(){
        cout<<"code: "<<code<<endl;
        cout<<"value: "<<value<<endl;
    }
    Design2(Design1 d1){
        code = d1.getcode();
        value = d1.getqty() * d1.getprice();
    }
    int setcode(int c){
        code = c;
    }
    int setvalue(float v){
        value = v;
    }
};

int main(){
    Design1 d1(111, 50, 1250.25);
    Design2 d2;

    float total_val = d1;
    cout<<"Design 1 Total val: "<<total_val<<endl;
    d2 = d1;
    cout<<"\nDesign 1: \n";
    d1.display();
    cout<<"\nDesign 2: \n";
    d2.display();
    return 0;
}
