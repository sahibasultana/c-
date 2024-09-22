#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> myStack;
    int sum = 0;

    // Push values onto the stack
    myStack.push(5);
    myStack.push(10);
    myStack.push(15);

    // Pop values from the stack and calculate the sum
    while (!myStack.empty()) {
        int topValue = myStack.top();
        sum =sum+ topValue;
        myStack.pop();,
    }

    cout << "Sum of values pushed and popped: " << sum << endl;

    return 0;
}

