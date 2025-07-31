#include<bits/stdc++.h>
using namespace std;

// Defined Two Abstract Classes
class IConnectable {
    public:
   virtual void connect() =0;
   virtual   ~IConnectable(){ }
};

class IControllable {
    public:
  virtual  void turnOff()=0;
    virtual void turnOn()=0;
    virtual  ~IControllable(){ }
};
// Used Multiple Inheritance
class SmartFAN: public IConnectable , public IControllable{
   public:
    void connect ()override{
        cout<<"smartfan connected."<<endl;
    }
    void turnOff ()override{
        cout<<"smartfan turnOff."<<endl;
    }
    void turnOn ()override{
        cout<<"smartfan turnOn."<<endl;
    }
    ~SmartFAN(){
        cout << "DELETING SmartFAN" << endl;
    }
};
// Used Multiple Inheritance
class SmartLight: public IConnectable , public IControllable{
    public:
    void connect ()override{
        cout<<"SmartLight connected."<<endl;
    }
    void turnOff ()override{
        cout<<"SmartLight turnOff."<<endl;
    }
    void turnOn ()override{
        cout<<"SmartLight turnOn."<<endl;
    }
    ~SmartLight(){
        cout << "DELETING SmartLight" << endl;
    }
};
int main(){
    // Used Interface Pointers for Polymorphism
   SmartFAN* fan = new SmartFAN();
IConnectable* connectFan = fan;
IControllable* controlFan = fan;
connectFan->connect();
controlFan->turnOn();
controlFan->turnOff();
delete fan;

    cout<<"-----------------"<<endl;
    SmartLight* light=new SmartLight();
     IConnectable* connectLight=light;
    connectLight->connect();  
    IControllable* controlLight=light;
    controlLight->turnOff();
    controlLight->turnOn();
    delete light;
    return 0;
}