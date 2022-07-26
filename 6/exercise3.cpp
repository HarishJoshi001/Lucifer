#include <iostream>
#include <math.h>

using namespace std;

class String
{
    char s[20];
public:
    String()
    {
        cout<<"Enter a string: ";
        cin>>s;
    }
    //Overloaded operator function to convert String to double
    operator double()
    {
        double num = 0;
        int lenx = 0, leny = 0;

        while (s[lenx] != '.')
        {
            lenx++;
        }
        while (s[leny + lenx + 1] != '\0')
        {
            leny++;
        }

        for (int i = 0; i < lenx; i++)
        {
            if (s[i] != '.')
            {
                num += (s[i] - 48) * (pow(10, lenx - i - 1));
            }
        }
        int j = 0;
        for (int i = lenx + leny; i > lenx; i--)
        {
            num += (s[i] - 48) / (pow(10, leny - j));
            j++;
        }
        return num;
    }
};

int main()
{
    String str1;
    double d1 = str1;
    cout<<endl<<d1;
    return 0;
}
