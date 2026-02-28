#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int maxElement = v[0];

    for(int i = 1; i < n; i++) {
        if(v[i] > maxElement) {
            maxElement = v[i];
        }
    }

    cout << "Maximum element: " << maxElement << endl;

    return 0;
}