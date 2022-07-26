#include<iostream>
#include<math.h>
using namespace std;

class Polar;

class Rect{
    float x, y;
public:
    Rect(float a=0.0, float b=0.0){
        x = a;
        y = b;
    }
    Rect(Polar);
    void display(){
        cout<<"( "<<x<<", "<<y<<" )"<<endl;
    }
    float get_x(){
        return x;
    }
    float get_y(){
        return y;
    }
};

class Polar{
    float r,t;
public:
    Polar(float a=0.0, float b=0.0){
        r = a;
        t = b;
    }
    Polar (Rect q){
        r = sqrt(pow(q.get_x(),2)+pow(q.get_y(),2));
        t = atan(q.get_y()/q.get_x()) * (180 /3.14);
    }
    void display(){
        cout<<"( "<<r<<", "<<t<<" )"<<endl;
    }
    float get_r(){
        return r;
    }
    float get_t(){
        return t;
    }
};

Rect::Rect(Polar p){
        x = p.get_r() * cos(p.get_t()*3.14/180);
        y = p.get_r() * sin(p.get_t()*3.14/180);
}

int main(){
    Rect r1(0,5);
    Polar t1(4.47, 64.43);
    Polar t2 = r1; //Converting Rect to Polar
    Rect r2 = t1; // Converting Polar to Rect
    t2.display();
    r2.display();
    return 0;
}

