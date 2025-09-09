#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack<int> st;
    
    st.push(1);
    st.push(2);
    st.push(3);
    
    cout << "Top: " << st.top() << endl;
    
    st.pop();
    cout << "Top after pop: " << st.top() << endl;
}
