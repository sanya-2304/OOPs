#include<bits/stdc++.h>
using namespace std;

class Hospital{
    public :
    virtual void bimari(int money)=0;
    virtual ~Hospital(){}  // virtual destructor
};

class Tantia : public Hospital{
    public :
    string disease;
     Tantia(string dis){
        this->disease=dis;
    }
    void bimari (int money) override{
        cout<<"Tantia mein bharti hu kyunki "<<disease<<" hua hai. Aur "<<money<<" rupay lagenge."<<endl;
    }
};
class Apex : public Hospital{
    public :
     string disease;
     Apex(string dis){
        this->disease=dis;
    }
    void bimari (int money) override{
        cout<<"Apex mein bharti hu kyunki "<<disease<<" hua hai. Aur "<<money<<" rupay lagenge."<<endl;
    }
};

// high level module - that actually uses abstraction
class  Application{
private : Hospital* hospitalName;
public: 
Application(Hospital* a){
    hospitalName=a;
}
void process(int money){
    hospitalName->bimari(money);
}
};

int main(){
    // Hospital* h1=new Tantia("sar dard");
    // h1->bimari("200");
    // Hospital* h2=new Apex("peeth dard");
    // h2->bimari("300");
    Apex* apexH1 = new Apex("peeth dard");
    Tantia* tantiaH2=new Tantia("sar dard");
    Application a1(apexH1);
    a1.process(700);
    Application a2(tantiaH2);
    a2.process(200);
    

    return 0;
}