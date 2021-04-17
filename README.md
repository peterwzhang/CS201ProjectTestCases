# Project Test Cases
These are the test cases for my semester project (Data Structure Library) in my data structures and algorithms class. It includes test cases for circular dynamic arrays, red black trees, binary heaps, and binomial heaps 

## Description of Test Cases
Each data structure has its own folder, inside each folder you will find a folder for each test case which contains a main cpp file and the correct output.
1. **Binary Heap [(Heap)]()**
    1. placeholder
2. **Binomial Heap [(BHeap)]()**
    1. placeholder
3. **Circular Dynamic Array [(CDA)]()**  
    *These test cases test for correctness already so they do not come with output files. There is a makefile in the CDA folder to compile these files.*
    1. A few irregular cases that could potentially break your CDA.
    2. Tests the runtimes of the add and delete operations. (irrelevant now due to the grading script linked below)
4. **Red Black Tree [(RBTree)]()**
    1. Tests all functions one by one. 
    2. Tests templates then insertions and deletions.
    3. Tests deletions after inserting 100 elements.

## Usage
1. Either place your makefile and respective DS.cpp file into a test case folder or move the Main.cpp file to your own folder containing makefile and respective DS.cpp file.
2. Run your makefile then run your executable
3. Verify your output with the correct output files given.

Alternatively you can use my project grader found [here](https://github.com/PeterTheAmazingAsian/ProjectGrader) to simulate grading similar to submission grading.