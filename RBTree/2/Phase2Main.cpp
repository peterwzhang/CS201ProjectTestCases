#include <iostream>

#include "RBTree.cpp"
using namespace std;
int main() {
    RBTree<int, int> a;
    RBTree<double, int> b;
    RBTree<unsigned long long int, string> c;
    RBTree<short int, long double> d;
    for (int i = 1; i <= 5; i++) {
        a.insert(i, 0);
    }
    a.preorder();
    a.inorder();
    a.insert(6, 0);
    a.preorder();
    a.inorder();
    a.insert(9, 0);
    a.preorder();
    a.inorder();
    a.remove(1);
    a.preorder();
    a.inorder();
    a.remove(3);
    a.remove(9);
    a.remove(2);
    a.preorder();
    a.inorder();
    a.insert(20, 0);
    a.insert(15, 0);
    a.insert(16, 0);
    a.insert(21, 0);
    a.insert(3, 0);
    a.insert(1, 0);
    a.preorder();
    a.inorder();
    a.remove(21);
    a.remove(6);
    a.remove(20);
    a.remove(16);
    a.remove(15);
    a.preorder();
    a.inorder();
    cout << a.size() << endl;
    return 0;
}