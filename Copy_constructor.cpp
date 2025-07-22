#include <bits/stdc++.h>
using namespace std;

class ABC {
public:
    string name;

    // Constructor
    ABC(string naam) {
        name = naam;
    }

    // Copy constructor from a pointer (deep copy)
    ABC(ABC* a) {
        name = a->name;
    }

    void display() {
        cout << name << endl;
    }
};

int main() {
    ABC* a = new ABC("sanya");
    a->display();          // Output: sanya

    ABC* b = a;            // 🔸 NOT a copy, just another pointer to the same object
                           // ❌ Not shallow copy in terms of memory duplication.
                           // ✅ Just "aliasing" the same object.
// pointer alias - no copy happens, just points to same object -- You are not creating a new object.
// You're just creating another name (alias) that refers to the same memory location in the heap.
    
    b->name = "bro";      // Changing b affects a, since both point to the same object.
    b->display();          // Output: bro
    a->display();          // Output: bro

    ABC* b1 = new ABC(a);  // ✅ Deep copy: creates a new object using values from *a
    b1->display();         // Output: bro

    b1->name = "sis";     // Only b1's name changes
    b1->display();         // Output: sis

    a->display();          // Output: bro (unchanged)
    b->display();          // Output: bro

    a->name = "xyz";    // Modifies a (and b, since same object)
    a->display();          // Output: xyz
    b->display();          // Output: xyz

    return 0;
}