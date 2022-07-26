#include <iostream>
using namespace std;

class FPS;
class CGS
{
    float c, g, s;

public:
    CGS(float d, float m, float t)
    {
        c = d;
        g = m;
        s = t;
    }
    void display()
    {
        cout << "\nThe given data in CGS system is: " << endl;
        cout << c << " cm\n" << g << " gm\n" << s << " sec\n" << endl;
    }

    float getC()
    {
        return c;
    }

    float getG()
    {
        return g;
    }

    float getS()
    {
        return s;
    }
};

class FPS
{
    float f, p, s;

public:
    FPS(float d, float m, float t)
    {
        f = d;
        p = m;
        s = t;
    }

    FPS(CGS x)
    {
        f = (x.getC()) * 0.0328084;
        p = (x.getG()) * 0.00220462;
        s = x.getS();
    }

    void displayFPS()
    {
        cout << "\nThe given data in FPS system is : " << endl;
        cout << f << " ft\n" << p << " lb\n" << s << " sec\n" << endl;
    }
};

int main()
{
    CGS X(100, 1000, 10);
    FPS Y = X;
    X.display();
    Y.displayFPS();
}
