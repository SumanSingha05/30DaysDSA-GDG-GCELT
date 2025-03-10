// Reverse the string.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverseWords(char str[]) {
    int i = 0, start = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i + 1] == '\0') {
            int end = (str[i] == ' ') ? (i - 1) : i;
            reverseWord(str, start, end);
            start = i + 1;
        }
        i++;
    }
}

int main() {
    char str[10005];  
    cin.getline(str, 10005); 
    reverseWords(str);
    cout << str << endl; 
    return 0;
}