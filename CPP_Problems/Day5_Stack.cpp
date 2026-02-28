#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    // Push elements
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;

    // Pop element
    s.pop();

    cout << "Top after pop: " << s.top() << endl;

    // Print all elements
    cout << "Stack elements:\n";
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}