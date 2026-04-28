#include<bits/stdc++.h>
using namespace std;

class Animal {
public:
    void eat(){
        cout << "Animal is eating" << endl;
    }

protected:
    void sound(){
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void useSound() {
        sound(); // ✔ OK
    }
};

int main()
{
    Animal a;
    Dog d;

    a.eat();   // ✔ OK
    // a.sound(); ❌ ERROR

    d.eat();   // ✔ OK
    d.useSound(); // ✔ OK

    return 0;
}