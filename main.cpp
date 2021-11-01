// SingletonThread.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Singleton
{
private:
    static int val;
    static Singleton* Instance;
    Singleton();

public:
    static Singleton* CreateInstance(int);
    void PrintValue();


};

int Singleton::val=0;
Singleton::Singleton()
{
    cout << "Creating object - Constructor\n";
}

void Singleton::PrintValue()
{
    cout << "\nValue = "<<Singleton::val;
}

Singleton * Singleton::Instance = 0;
Singleton* Singleton::CreateInstance(int bVal)
{
    if (Instance == 0)
    {
        Instance = new Singleton();
        cout << "Creating object\n";
        Singleton::val = bVal;
    }
    return Instance;
}

int main()
{
    std::cout << "Hello World!\n";
    Singleton* obj = NULL;
    obj=Singleton::CreateInstance(5);
    obj->PrintValue();
    obj = Singleton::CreateInstance(6);
    obj->PrintValue();
    obj = Singleton::CreateInstance(7);
    obj->PrintValue();
    obj = Singleton::CreateInstance(8);
    obj->PrintValue();
    obj = Singleton::CreateInstance(9);
    obj->PrintValue();
}
