#include <iostream>
using namespace std;
#include "Heap.cpp"

int main() {
    Heap<short int> A;
    Heap<double> B;
    Heap<unsigned long long int> C;
    Heap<long double> D;
    Heap<string> E;

    A.insert(4);
    A.insert(9);
    A.insert(3);
    A.insert(5);
    A.insert(100);
    A.printKey();

    Heap<short int> AA(A);
    Heap<short int> AAA(AA);

    AA.printKey();
    AAA.printKey();

    AAA.extractMin();
    AA.extractMin();
    AA.extractMin();

    AAA.printKey();
    AA.printKey();
    A.printKey();

    string alphabet[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I",
                         "J", "K", "L", "M", "N", "O", "P", "Q", "R",
                         "S", "T", "U", "V", "W", "X", "Y", "Z"};
    Heap<string> F(alphabet, 26);
    F.printKey();

    Heap<string> FF = F;
    Heap<string> FFF = FF;

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