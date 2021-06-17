# CS201 Project Test Cases
These are my test cases for my semester project (Data Structure Library) in my data structures and algorithms class. It includes test cases for circular dynamic arrays, red black trees, binary heaps, and binomial heaps written in C++. 

## Description of Test Cases
Each data structure has its own folder, inside each folder you will find a folder for each test case which contains a main cpp file and the correct output.
1. **Binary Heap [(Heap)](/Heap)**
    1. This will use a queue to test peekKey and extractMin after 10000 inserts.
    2. This will test templates and copy constructors.
2. **Binomial Heap [(BHeap)](/BHeap)**
    1. This will use a queue to test peekKey and extractMin after 10000 inserts.
    2. This will test merge after constructing various heaps.
    3. This will test templates and copy constructors.
3. **Circular Dynamic Array [(CDA)](/CDA)**  
    *These test cases test for correctness already so they do not come with output files. There is a makefile in the CDA folder to compile these files.*
    1. This will test a few irregular cases that could potentially break your CDA.
    2. This will test the runtimes of the add and delete operations. (irrelevant now due to the grading script linked below)
4. **Red Black Tree [(RBTree)](/RBTree)**
    1. This will test all functions one by one. 
    2. This will test templates then insertions and deletions.
    3. This will test deletions after inserting 100 elements.

## Usage
1. Either place your makefile and respective DS.cpp file into a test case folder or move the Main.cpp file to your own folder containing makefile and respective DS.cpp file.
2. Run your makefile then run your executable
3. Verify your output with the correct output files given.

**Alternatively** you can use my project grader found [here](https://github.com/PeterTheAmazingAsian/ProjectGrader) to simulate grading similar to submission grading. I ***highly recommend*** using this project grader on the cs-intro server to test your projects.

## Note to future CS201 takers
To my knowledge, the projects slightly change every semester, the general data structure should be the same (some dynamic array, some balanced tree, some form of heaps). There is no guarantee that a perfect score on my test cases will yield a perfect score on your actual project grade because of this. In any case you should use these as a base for testing files and build more test cases or build on top of these to fully check the correctness of your data structures.  
Additionally, some extra userscripts for [usfca's visualizers](https://www.cs.usfca.edu/~galles/visualization/Algorithms.html) that will probably help you check your test cases will be linked below:
- [Red Black Tree](https://gist.github.com/PeterTheAmazingAsian/6705757360af6df3d3396fd2b41af2ab)
- [Binomial Queue](https://gist.github.com/PeterTheAmazingAsian/761bd3cd7f175dc4f284ed513b6fa2b5)
- [Min Heap](https://gist.github.com/PeterTheAmazingAsian/80aa990c232e19b19565c9c3c83bc5e3)

You can either use greasemonkey to install them or follow the instructions in the comments to paste the code into the javascript console of your browser.
