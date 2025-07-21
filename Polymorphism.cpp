    // 🔷 Scenario: Smart Payment System

    #include<bits/stdc++.h>
    using namespace std;

    class Payment{
     public:
        virtual void makePayment()=0;
        
        void generateReceipt(){
            cout<<"generate Receipt hassle free."<<endl;
        }
        void generateReceipt(string s){
            cout<<"generating Receipt for "<<s<<"."<<endl;
        }
        void generateReceipt(int money){
            cout<<"generating Receipt of rs. "<<money<<endl;
        }
        virtual ~Payment() {
            // cout << "Payment object destroyed" << endl;
        }

    };
    class CreditCard: public Payment{
        public:
        void makePayment(){
            cout<<"Making payment using CreditCard."<<endl;
        }
        ~CreditCard() {
            cout << "CreditCard object destroyed" << endl;
        }
    };
    class UPI: public Payment{
        public:
        void makePayment(){
        cout<<"Making payment using UPI."<<endl;
    }  
    ~UPI() {
            cout << "UPI object destroyed" << endl;
        }
    
    };
    class Cash: public Payment{
        public:
        void makePayment(){
        cout<<"Making payment using Cash."<<endl;
    }
    ~Cash() {
            cout << "Cash object destroyed" << endl;
        }
    };
    int main(){
        // Payment* p=new Payment();  //❌ Compilation Error as Payment is abstract class with pure virtual function
        Payment * p =new CreditCard();
        p->makePayment();
        p->generateReceipt("Sanya");
        p->generateReceipt(1000);
        delete p;
        cout << "----------------------" << endl;

        Payment* p2 = new Cash();
        p2->makePayment();
        p2->generateReceipt();
        delete p2;

        cout << "----------------------" << endl;

        Payment* p3 = new UPI();
        p3->makePayment();
        p3->generateReceipt("Amber");
        delete p3;

        return 0;
    }