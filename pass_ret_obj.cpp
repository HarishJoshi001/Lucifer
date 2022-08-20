/*. Write a program to create class "time" with data
mernbers hours, minute and second. Then add two "time" objects by taking object as
argument and also retuming object as argum
*/

#include <iostream>
using namespace std;

class time
{
public:
    int h, m, s;

    time() {}
    time(int h, int m, int s)
    {
        this->h = h;
        this->m = m;
        this->s = s;
    }

    time add(time a, time b)
    {
        time c;
        c.h = a.h + b.h;
        c.m = a.m + b.m;
        c.s = a.s + b.s;
        return c;
    }
    time display(time x)
    {
        cout << x.h << "hr " << x.m << "min " << x.s << "sec " << endl;
    }
};

int main()
{
    time t1(1, 20, 20), t2(0, 30, 20), t3(0, 0, 0);
    t3 = t3.add(t1, t2);
    t3.display(t3);
    return 0;
}