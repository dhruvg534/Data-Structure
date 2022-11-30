#include <iostream>
using namespace std;

class hero
{
    public:
    int health;
    char level;

    // getter
    int get_health()
    {
        return health;
    }

    char get_level()
    {
        return level;

    }


    //setter
    void set_health(int a)
    {
        health = a;

    }

    void set_level(char lv)
    {
        level = lv;
    }

    // constructor call
    hero(){ //default constructor
        cout<<"constructor called: "<<endl;
    }


};

int main() {
    cout<<"hi"<<endl;
    hero ramesh;
    cout<<"hello"<<endl;
    
    return 0;
}