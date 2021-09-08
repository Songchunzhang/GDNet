#include <bits/stdc++.h>

using namespace std;

class AbstractDrinking
{
public:
    virtual void Boil() = 0;

    virtual void Brew() = 0;
    
    virtual void Pour() = 0;

    virtual void PutSomething() = 0;

    virtual voit DoSomething() = 0;

    virtual voit addSomething() = 0;
    void makeDrink()
    {
        Boil();
        Brew();
        Pour();
        PutSomething();
    }
};

class Coffee : public AbstractDrinking
{
public:
    virtual void Boil()
    {
        cout << "zhu shui" << endl;
    }

    virtual void Brew()
    {
        cout << "chong pao" << endl;
    }
    
    virtual void Pour()
    {
        cout << "pour into cup" << endl;
    }

    virtual void PutSomething()
    {
        cout << "add milk and sugar" << endl;
    }
};

class Tea : public AbstractDrinking
{
public:
    virtual void Boil()
    {
        cout << "zhu shui" << endl;
    }

    virtual void Brew()
    {
        cout << "chong pao" << endl;
    }
    
    virtual void Pour()
    {
        cout << "pour into cup" << endl;
    }

    virtual void PutSomething()
    {
        cout << "add gouqi" << endl;
    }
};

void doWork(AbstractDrinking * abs)
{
    abs->makeDrink();
    delete abs;
}

void test01()
{
    doWork(new Coffee);

    cout << endl;

    doWork(new Tea);
}

int main()
{
    test01();
    return 0;
}
