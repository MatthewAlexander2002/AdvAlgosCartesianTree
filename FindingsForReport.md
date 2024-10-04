https://en.wikipedia.org/wiki/Cartesian_tree


Write a report detailing the following aspects of the implementation:

**A high level outline of the algorithm.**


**The application domain(s) of the algorithm, and its effectiveness therein.**


**The theoretical complexity of the algorithm.**
Recursive: 
    worse case: O(n!) 
    average case: O(?) // figure and fill out | O(n log n) has to check the array over on every layer and should have log layers i thing, need to do a little more study on this

Linear: 
    worse/average/best case: O(n) // need to make sure that all of these are true (mainly need to check worst)

**The complexity of your implementation (indicating the level of confidence in any external components used as applicable and necessary).**


**Any compromises, assumptions or changes you made to the algorithm to allow implementation.**
Assumption: if two values are the same the first of the two values is the "smaller" of the two, meaning the second node gets put on the right side of the first node

**An explanation and justification of the effectiveness of the tests provided in assuring algorithmic correctness.**


**Any insights or observations that would help someone else implement the same algorithm.**