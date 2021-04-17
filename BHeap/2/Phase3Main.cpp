#include <iostream>
using namespace std;
#include "BHeap.cpp"

int main() {
    string alphabet[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I",
                         "J", "K", "L", "M", "N", "O", "P", "Q", "R",
                         "S", "T", "U", "V", "W", "X", "Y", "Z"};
    string food[] = {"BURGER"};
    BHeap<string> A(alphabet, 26), B, C(food, 1);
    A.printKey();

    B.insert("I'm");
    B.insert("so");
    B.insert("hungry");
    B.insert("and");
    B.insert("its");
    B.insert("almost");
    B.insert("lunchtime");
    B.printKey();

    C.insert("TACO");
    C.insert("PIZZA");
    C.insert("FRIEDFOOD");
    C.insert("CHICKEN");
    C.printKey();

    A.merge(B);
    A.merge(C);
    A.printKey();
    return 0;
}