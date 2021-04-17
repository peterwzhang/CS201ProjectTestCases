#include <iostream>
#include <map>

#include "RBTree.cpp"
using namespace std;
int main() {
    map<int, int> a;
    RBTree<int, int> b;
    for (int i = 1; i <= 100; i++) {
        a.insert(pair<int, int>(i, 100 - i));
        b.insert(i, 100 - i);
    }
    b.preorder();
    b.inorder();
    cout << ((int)a.size() == b.size()) << endl;
    for (auto &x : a) {
        cout << b.rank(x.first) << " ";
    }
    cout << endl;
    for (int i = 1; i <= 8; i++) {
        a.erase(i * 12);
        b.remove(i * 12);
    }
    cout << b.size() << endl;
    b.preorder();
    b.inorder();
    cout << ((int)a.size() == b.size()) << endl;
    for (auto &x : a) {
        cout << b.rank(x.first) << " ";
    }
    cout << endl;
    return 0;
}
