// common in singleton design pattern as it restricts object creation
// so its majorly used where you are ought to create single instance that too using methods

#include<bits/stdc++.h>
using namespace std;

class Singleton{
private:
    static Singleton* ist;
    Singleton(){};
public :
// In the Singleton Pattern, the whole point is ::::>>
// To prevent creating objects directly via new.
// To provide a single global access point to that object using a method like getInstance().
    static Singleton* getInstance(){ 
        if(ist==nullptr){
            ist=new Singleton();
        }
        return ist;
    }
};

//  Define the static member outside the class
Singleton* Singleton::ist = nullptr;

int main() {
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();
    cout << (s1 == s2) << endl;
    return 0;
}

