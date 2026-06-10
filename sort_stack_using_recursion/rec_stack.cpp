#include <iostream>
#include <stack>
using namespace std;

// Function to insert an element into a sorted stack
void insert(stack<int>& st, int temp) {
    // Base condition
    if (st.empty() || st.top() <= temp) {
        st.push(temp);
        return;
    }

    int val = st.top();
    st.pop();

    insert(st, temp);

    st.push(val);
}

// Recursive function to sort the stack
void sortStack(stack<int>& st) {
    // Base condition
    if (st.size() <= 1) {
        return;
    }

    int temp = st.top();
    st.pop();

    sortStack(st);

    insert(st, temp);
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    stack<int> st;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }

    sortStack(st);

    cout << "Sorted stack (top to bottom): ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}