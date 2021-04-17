#include <iostream>
#include <iomanip>
#include <vector>
#include "CDA.cpp"
using namespace std;

template <typename Elmtype>
bool checkarray(CDA<Elmtype> a, vector<Elmtype> b)
{
	for (int i = 0; i < a.Length(); i++)
	{
		if (a[i] != b[i]) return false;
	}
	return true;
}

template <typename Elmtype>
void printarray(CDA<Elmtype> a){
    for (int i = 0; i < a.Length(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

bool ispow2(int n){
    return ((n ^ (n-1)) == 2 * n - 1);
}

// some tests that might break your CDA
int main(){
    // Check 1
    // this checks for self assignment check in the = operator, this might not be actually tested but better safe than sorry right?
    // should have : 0 1 2 3 4 
    CDA<int> A(5);
    for (int i = 0; i < A.Length(); i++){
        A[i] = i;
    }
    A = A;
    //printarray(A);
    cout << "Check 1:" << boolalpha << checkarray(A, vector<int>{0, 1, 2, 3, 4}) 
         << " A => 0 1 2 3 4" << endl;

    //Check 2
    // test addfront on even #, addend on odd #
    // this should have: 18 16 14 12 10 8 6 4 2 0 1 3 5 7 9 11 13 15 17 19
    CDA<int> B;
    for (int i = 0; i < 20; i++){
        if (i % 2 == 0)
            B.AddFront(i);
        else
            B.AddEnd(i);
    }
    //printarray(B);
    cout << "Check 2:" << boolalpha << checkarray(B, vector<int>{18, 16, 14, 12, 10, 8, 6, 4, 2, 0, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19}) 
         << " B => 18 16 14 12 10 8 6 4 2 0 1 3 5 7 9 11 13 15 17 19" << endl;

    // Check 3
    // test addfront on even #, addend and reverse on odd #
    // this should have: 19 16 15 12 11 8 7 4 3 0 1 2 5 6 9 10 13 14 17 18
    CDA<int> C;
    for (int i = 0; i < 20; i++){
        if (i % 2 == 0)
            C.AddFront(i);
        else{
            C.AddEnd(i);
            C.Reverse();
        }
    }
    //printarray(C);
    cout << "Check 3:" << boolalpha << checkarray(C, vector<int>{19, 16, 15, 12, 11, 8, 7, 4, 3, 0, 1, 2, 5, 6, 9, 10, 13, 14, 17, 18})
         << " C => 19 16 15 12 11 8 7 4 3 0 1 2 5 6 9 10 13 14 17 18" << endl;

    // Check 4
    // test addend but when doubling if the power of 2 is even addfront or if it's odd then addend
    // this should have: 64 16 4 1 0 2 3 5 6 7 8 9 10 11 12 13 14 15 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63
    CDA<int> D;
    int pow = 0;
    for (int i = 0; i < 65; i++){
        if (i > 0 && ispow2(i)){
            if (pow % 2 == 0)
                D.AddFront(i);
            else
                D.AddEnd(i);
            pow++;
        }
        else
            D.AddEnd(i);
    }
    //printarray(D);
    cout << "Check 4:" << boolalpha << checkarray(D, vector<int>{64, 16, 4, 1, 0, 2, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63})
         << " D => 64 16 4 1 0 2 3 5 6 7 8 9 10 11 12 13 14 15 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63" << endl;
    return 0;
}