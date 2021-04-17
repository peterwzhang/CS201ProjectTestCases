#include <iostream>
using namespace std;
#include "BHeap.cpp"

int main() {
    BHeap<short int> A;
    BHeap<double> B;
    BHeap<unsigned long long int> C;
    BHeap<long double> D;
    BHeap<string> E;

    A.insert(4);
    A.insert(9);
    A.insert(3);
    A.insert(5);
    A.insert(100);
    A.printKey();

    BHeap<short int> AA(A);
    BHeap<short int> AAA(AA);

    AA.printKey();
    AAA.printKey();

    AAA.extractMin();
    AA.extractMin();
    AA.extractMin();

    AAA.printKey();
    AA.printKey();
    A.printKey();

    string alphabet[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i",
                         "j", "k", "l", "m", "n", "o", "p", "q", "r",
                         "s", "t", "u", "v", "w", "x", "y", "z"};
    BHeap<string> F(alphabet, 26);
    F.printKey();

    BHeap<string> FF = F;
    BHeap<string> FFF = FF;

    FF.printKey();
    FFF.printKey();

    FFF.extractMin();
    FF.extractMin();
    FF.extractMin();

    FFF.printKey();
    FF.printKey();
    F.printKey();
    return 0;
}