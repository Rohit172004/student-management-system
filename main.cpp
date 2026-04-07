#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
    float marks;

    void input() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nRoll No: " << roll;
        cout << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s[3];

    for(int i=0; i<3; i++) {
        cout << "\nEnter details of student " << i+1 << endl;
        s[i].input();
    }

    cout << "\n--- Student Details ---\n";
    for(int i=0; i<3; i++) {
        s[i].display();
    }

    return 0;
}
