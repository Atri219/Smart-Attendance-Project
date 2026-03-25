#include <iostream>
using namespace std;

// simple class for student
class Student {
private:
    int id;
    string name;
    bool present;

public:
    // constructor
    Student(int i, string n) {
        id = i;
        name = n;
        present = false;   // initially absent
    }

    // function to mark attendance
    void markPresent() {
        if (present == false) {
            present = true;
            cout << name << " marked present" << endl;
        } else {
            cout << name << " already present" << endl;
        }
    }

    // function to show details
    void show() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Present: ";

        if (present)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
};

int main() {
    Student s1(1, "Atri");

    s1.show();
    s1.markPresent();
    s1.markPresent();  // checking again
    s1.show();

    return 0;
}
