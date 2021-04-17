#include <iostream>
#include <chrono>
#include "CDA.cpp"
using namespace std;
//The best way to confirm your runtimes is by tracing your code... this will really only verify that these operations are not taking some extreme high times to run
//log = log base 2
//everything in quotes can differ some because of many factors
int main(){
    CDA<int> A; // test addend then delfront
    // log(5000) = ~12 = 13 doubles (since default starts at 1 we add 1) 
    // 1st and 2nd loops should be some "medium" values since they make a lot of small copies
    // 3rd and 5th loop should be "bigger" values since they make one big copy each
    // 4th loop should be some "smaller" value since it should make no copies
    for (int i = 0; i < 5; i++){
        auto time_start = chrono::steady_clock::now();
        for (int j = 0; j < 1000; j++){
            A.AddEnd(0);
        }
        auto time_end = chrono::steady_clock::now();
        cout << chrono::duration_cast<chrono::nanoseconds>(time_end - time_start).count() << " ns to add 1000 elements to end" << endl;
    }
    cout << "A Size = " << A.Length() << endl;
    // 1st and 2nd, should be "smaller" since they should not have to resize
    // 3rd should take a "bigger" value since it has to do the biggest copy
    // 4th and 5th should take some "medium value" since they should make a lot of small copies
    for (int i = 0; i < 5; i++){
        auto time_start = chrono::steady_clock::now();
        for (int j = 0; j < 1000; j++){
            A.DelFront();
        }
        auto time_end = chrono::steady_clock::now();
        cout << chrono::duration_cast<chrono::nanoseconds>(time_end - time_start).count() << " ns to remove 1000 elements from front" << endl;
    }
    cout << "A Size = " << A.Length() << endl;

    CDA<int> B; // test addfront then delend
    // 1st and 2nd loops should be some "medium" values since they make a lot of small copies
    // 3rd and 5th loop should be "bigger" values since they make one big copy each
    // 4th loop should be some "smaller" value since it should make no copies
    for (int i = 0; i < 5; i++){
        auto time_start = chrono::steady_clock::now();
        for (int j = 0; j < 1000; j++){
            B.AddFront(0);
        }
        auto time_end = chrono::steady_clock::now();
        cout << chrono::duration_cast<chrono::nanoseconds>(time_end - time_start).count() << " ns to add 1000 elements to end" << endl;
    }
    cout << "B Size = " << B.Length() << endl;
    // 1st and 2nd, should be "smaller" since they should not have to resize
    // 3rd should take a "bigger" value since it has to do the biggest copy
    // 4th and 5th should take some "medium value" since they should make a lot of small copies
    for (int i = 0; i < 5; i++){
        auto time_start = chrono::steady_clock::now();
        for (int j = 0; j < 1000; j++){
            B.DelEnd();
        }
        auto time_end = chrono::steady_clock::now();
        cout << chrono::duration_cast<chrono::nanoseconds>(time_end - time_start).count() << " ns to remove 1000 elements from front" << endl;
    }
    cout << "B Size = " << B.Length() << endl;
    return 0;
}