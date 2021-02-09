#include <iostream>

using namespace std;

class Student{
    public:
    int a,b;
    Student(int x,int y)
    {
        cout<<"Apelare constructor cu argumente" <<endl;
        a = x;
        b = y;
    }
    int getVarsta()
    {
        return a;
    }
    int getNote()
    {
        return b;
    }
    Student()
    {
        cout << "Apelare Constructor" << endl;
        a = 10;
        b = 10;
    }
    ~Student()
    {
        cout << "Apelare destructor \n" << endl;
    }

};

int main()
{
    Student s1;
    Student s2(15,7);
    cout << "Stundetul are varsta "<<s2.a<<" si nota "<<s2.b<<endl;
    cout <<endl;
    cout << s1.a <<endl;
}