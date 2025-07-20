// 🌟 Scenario: Smart Home Devices

#include<bits/stdc++.h>
using namespace std;

class SmartDevice{
    protected:
    int deviceId;
    bool isOn=false;
    public:
        void turnOn(){
            if(isOn){
                cout<<"Device is on."<<endl;
            }else {
                 isOn=true;
                cout<<"Device was off---------Now device is on."<<endl;
            }
        }
        void turnOff(){
            if(!isOn){
                cout<<"Device is off."<<endl;
            }else {
                 isOn=false;
                cout<<"Device was on---------Now device is off."<<endl;
            }
        }
};

class SmartLight: public SmartDevice{
    private:
    int brightness;
    public: 
     SmartLight(int val, int id){
        brightness=val;
        deviceId=id;
    }
    void details(){
        cout<<"SmartLights-> deviceId--"<<deviceId<<" isOn status-- "<<(isOn ? "On" : "Off")<<" brightness--"<<brightness<<endl;
    }
};
class SmartFan: private SmartDevice{
     private:
    int speed;
    public: 
     SmartFan(int val, int id){
        speed=val;
        deviceId=id;
    }
    void setOn(){
        turnOn();  //calling base class method
    }
     void details(){
        cout<<"SmartFan-> deviceId--"<<deviceId<<" isOn status-- "<<(isOn ? "On" : "Off")<<" speed--"<<speed<<endl;
    }
};

int main(){
    // SmartLight sl=new SmartLight(100);
    // SmartFan sf=new SmartFan(42);
    SmartFan sf(42, 1);
    SmartLight sl(100, 2);
    sl.details();
      sl.turnOn();
       sl.details();
    sf.details();
    sl.turnOff();
    sl.details();
    sf.setOn();
    sf.details();
    // sl.isOn();  -- gives error: do some brainstorming
    return 0;
}