#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    string name;

public:
    Student(){}
    Student(string name)
    {
        this->name = name;
    }
    void getName()
    {
        cout<<"Enter name: "<<endl;
        getline(cin, name);
    }
    void displayName()
    {
        cout << "Name: " << name << endl;
    }
};

class Test : public Student
{
protected:
    float marks[5];

public:
    Test(){}
    Test(float marks[5], string name) : Student(name)
    {
        for (int i = 0; i < 5; i++)
        {
            this->marks[i] = marks[i];
        }
    }
    void getMarks()
    {
        for (int i = 0; i < 5; i++)
        {
            cout<<"Enter marks in sub"<<i+1<<endl;
            cin >> marks[i];
        }
    }
    void displayMarks()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Marks: " << marks[i] << endl;
        }
    }
};

class Result : public Test
{
protected:
    float totalMarks;

public:
    Result(){}
    void calcResult()
    {
        for (int i = 0; i < 5; i++)
        {
            totalMarks += marks[i];
        }
        cout<<"Total marks= "<<totalMarks<<endl;
        cout<<"Percentage= "<<totalMarks/5<<"%"<<endl;
    }
};

int main(){
    Result a;
    a.getName();
    a.getMarks();
    a.displayName();
    a.displayMarks();
    a.calcResult();

    return 0;
}