#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(50);
    q.push(70);
    q.push(80);
    
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;

    return 0;
}
