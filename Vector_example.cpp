#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    int input;

    cout << "Enter 5 numbers:" << endl;
    for (int i = 0; i < 5; ++i) {
        cin >> input;
        nums.push_back(input);
    }

    cout << "You entered: ";
    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}
