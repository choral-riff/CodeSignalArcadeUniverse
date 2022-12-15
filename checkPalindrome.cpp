/*
Given the string, check if it is a palindrome.

Example

For inputString = "aabaa", the output should be
solution(inputString) = true;
For inputString = "abac", the output should be
solution(inputString) = false;
For inputString = "a", the output should be
solution(inputString) = true.
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string inputString

A non-empty string consisting of lowercase characters.

Guaranteed constraints:
1 ≤ inputString.length ≤ 105.

[output] boolean

true if inputString is a palindrome, false otherwise.
*/
//checkPalindrome
bool solution(string inputString) {
    int length = inputString.size();
    // base case 
    if (length == 1){
        return true;
    }
    int mid = length / 2; // ignores the mid letter if length is odd 
    int correctness = 0; // takes count of if all the top letters equal the corresponding bottom ones below mid
    for (int i = 0; i < mid; i++){
        if (inputString[i] == inputString[length - 1 - i]){
            correctness++;
        }
    }
    if (correctness == mid){
        return true;
    }
    else{
        return false;
    }
}
