/*
Below we will define an n-interesting polygon. Your task is to find the area of a polygon for a given n.

A 1-interesting polygon is just a square with a side of length 1. 
An n-interesting polygon is obtained by taking the n - 1-interesting polygon and appending 1-interesting polygons to its rim, side by side. 
You can see the 1-, 2-, 3- and 4-interesting polygons in the picture below.

Example

For n = 2, the output should be
solution(n) = 5;
For n = 3, the output should be
solution(n) = 13.
Input/Output

[execution time limit] 0.5 seconds (cpp)

[memory limit] 1 GB

[input] integer n

Guaranteed constraints:
1 ≤ n < 104.

[output] integer

The area of the n-interesting polygon.
*/


//forward declaration for squareCount
int squareCount(int n);

int solution(int n) {
    /*logic:
      find nth odd number
      find total square count
      calculate area*/
    int areaOfsquare = 1;
    int numOfsquare = squareCount(n);
    int soln;
    soln = numOfsquare*areaOfsquare;
    return soln;
}

//returns the nth odd number
int oddnumbersequenceat(int n){
    int num;
    num = (n*2)-1;
    return num;
}

//counts total number of square
int squareCount(int n){
    int totalCount = 0;
    int maxRow = oddnumbersequenceat(n);
    for (int i = 1; i<= maxRow; i= i+2){
        totalCount = totalCount + i;
    }
    for (int i = 1; i <= maxRow-2; i = i+2){
        totalCount = totalCount + i;
    }
    return totalCount;
}
