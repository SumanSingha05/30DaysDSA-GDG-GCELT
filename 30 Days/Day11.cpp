//Find missing in second array 1

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    vector<int> a, b, result;
    int num;
    char ch;

    
    while (cin.peek() != '\n' && cin >> num) {
        a.push_back(num);
    }
    cin.ignore(); 

    
    while (cin >> num) {
        b.push_back(num);
    }

    unordered_set<int> bSet(b.begin(), b.end());

 
    for (int x : a) {
        if (bSet.find(x) == bSet.end()) {
            result.push_back(x);
        }
    }

    
    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i < result.size() - 1 ? " " : "");
    }
    cout << endl;

    return 0;
}
