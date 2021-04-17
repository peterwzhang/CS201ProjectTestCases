#include <iostream>

#include "RBTree.cpp"
using namespace std;
int main() {
    RBTree<int, int> rb1;
    // Insert Test
    rb1.insert(1, 56);
    rb1.insert(0, 48);
    rb1.insert(4, 67);
    rb1.insert(3, 62);
    rb1.insert(5, 82);
    rb1.insert(2, 59);
    // Traversal Test
    rb1.preorder();
    rb1.inorder();
    rb1.postorder();
    // Size Test 1
    cout << rb1.size() << endl;
    // Search Test
    cout << *(rb1.search(0)) << endl;
    cout << *(rb1.search(1)) << endl;
    cout << *(rb1.search(5)) << endl;
    // Select Test
    cout << rb1.select(1) << endl;
    cout << rb1.select(2) << endl;
    cout << rb1.select(3) << endl;
    cout << rb1.select(4) << endl;
    cout << rb1.select(5) << endl;
    cout << rb1.select(6) << endl;
    // Rank Test
    cout << rb1.rank(6) << endl;
    cout << rb1.rank(0) << endl;
    cout << rb1.rank(1) << endl;
    cout << rb1.rank(2) << endl;
    cout << rb1.rank(3) << endl;
    cout << rb1.rank(4) << endl;
    cout << rb1.rank(5) << endl;
    // PrintK Test
    rb1.printk(6);
    rb1.printk(3);
    rb1.printk(1);
    rb1.printk(0);
    // Predecessor/Successor Test
    cout << *(rb1.predecessor(1)) << endl;
    cout << *(rb1.successor(1)) << endl;
    cout << *(rb1.predecessor(4)) << endl;
    cout << *(rb1.successor(4)) << endl;
    // Copy Constructor and Copy Assignment Test
    RBTree<int, int> rb2(rb1);
    RBTree<int, int> rb3 = rb1;
    cout << rb2.size() << endl;
    rb2.preorder();
    rb2.inorder();
    rb2.postorder();
    cout << rb3.size() << endl;
    rb3.preorder();
    rb3.inorder();
    rb3.postorder();
    // Removal Test
    rb1.remove(0);
    rb1.preorder();
    rb1.inorder();
    rb1.postorder();
    rb1.remove(1);
    rb1.preorder();
    rb1.inorder();
    rb1.postorder();
    rb1.remove(2);
    rb1.preorder();
    rb1.inorder();
    rb1.postorder();
    rb1.remove(3);
    rb1.preorder();
    rb1.inorder();
    rb1.postorder();
    rb1.remove(4);
    rb1.preorder();
    rb1.inorder();
    rb1.postorder();
    rb1.remove(5);
    rb1.preorder();
    rb1.inorder();
    rb1.postorder();
    cout << rb1.size() << endl;
    // Deep Copy Test
    rb2.preorder();
    rb2.inorder();
    rb2.postorder();
    rb3.preorder();
    rb3.inorder();
    rb3.postorder();
    return 0;
}