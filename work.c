#include <stdio.h>
#include <string.h>

//  Q114: Write a program to take a string s as input.
// The task is to find the length of the longest substring without repeating characters.
// Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int n = strlen(str);
    int maxLength = 0;

    for (int i = 0; i < n; i++) {
        int visited[256] = {0}; 
        int currentLength = 0;

        for (int j = i; j < n; j++) {
            if (str[j] == '\n') 
            break; 
            if (visited[(unsigned char)str[j]] == 1) {
                break; 
            } else {
                visited[(unsigned char)str[j]] = 1; 
                currentLength++;
            }
        }

        if (currentLength > maxLength) {
            maxLength = currentLength; // Update max length if current is greater
        }
    }

    printf("Length of the longest substring without repeating characters: %d\n", maxLength);
    return 0;
}
