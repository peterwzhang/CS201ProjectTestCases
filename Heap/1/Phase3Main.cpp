#include <iostream>
#include <queue>
using namespace std;
#include "Heap.cpp"

int main() {
    Heap<int> A;
    queue<int> B, D;
    int array[10000];
    for (int i = 1; i <= 10000; i++) {
        A.insert(i);
        array[i - 1] = i;
        B.push(i);
        D.push(i);
    }
    int peakError1 = 0;
    int extractError1 = 0;
    for (int i = 1; i <= 10000; i++) {
        if (A.peekKey() != B.front()) peakError1++;
        if (A.extractMin() != B.front()) extractError1++;
        B.pop();
    }
    cout << "Peak error = " << peakError1
         << " Extract error = " << extractError1 << endl;
    Heap<int> C(array, 10000);
    int peakError2 = 0;
    int extractError2 = 0;
    for (int i = 1; i <= 10000; i++) {
        if (C.peekKey() != D.front()) peakError2++;
        if (C.extractMin() != D.front()) extractError2++;
        D.pop();
    }
    cout << "Peak error = " << peakError2
         << " Extract error = " << extractError2 << endl;
    return 0;
}