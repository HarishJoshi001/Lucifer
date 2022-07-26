#include <iostream>
#include <string>
using namespace std;

class Course
{
protected:
    string title;

public:
    void setTitle()
    {
        title = "Course";
    }
    void displayTitle()
    {
        cout << "Title: " << title << endl;
    }
};
class Mathematics : public Course
{
public:
    void setTitle()
    {
        title = "Mathematics";
    }
};
class Science : public Course
{
public:
    void setTitle()
    {
        title = "Science";
    }
};
class Engineering : public Course
{
public:
    void setTitle()
    {
        title = "Engineering";
    }
};
class Physics : public Science
{
public:
    void setTitle()
    {
        title = "Physics";
    }
};
class Chemistry : public Physics
{
public:
    void setTitle()
    {
        title = "Chemistry";
    }
};

int main()
{
    Course a;
    a.setTitle();
    a.displayTitle();
    Mathematics b;
    b.setTitle();
    b.displayTitle();
    Science c;
    c.setTitle();
    c.displayTitle();
    Engineering d;
    d.setTitle();
    d.displayTitle();
    Physics e;
    e.setTitle();
    e.displayTitle();
    Chemistry f;
    f.setTitle();
    f.displayTitle();

    return 0;
}