#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int mark1, mark2, mark3;

public:
    void input() {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter marks of 3 subjects: ";
        cin >> mark1 >> mark2 >> mark3;
    }

    void displayTotal() {
        int total = mark1 + mark2 + mark3;
        cout << "Total marks of " << name << " = " << total << endl;
    }
};

int main() {
    Student s1;   // Object creation

    s1.input();
    s1.displayTotal();

    return 0;
}