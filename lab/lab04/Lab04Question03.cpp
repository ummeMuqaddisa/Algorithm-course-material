#include <iostream>
using namespace std;

void prefixTable(string pattern, int lps[], int n) {
    int length = 0;
    int i = 1;
    lps[0] = 0;
    while (i < n) {
        if (pattern[i] == pattern[length]) {
            length++;
            lps[i] = length;
            i++;
        } else {
            if (length != 0) {
                length = lps[length - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

void knuth(string text, string pattern, int lps[]){
    int n = text.length();
    int m =pattern.length();
    int i = 0;
    int j = 0;
    while (i < n) {
        if (pattern[j] == text[i]) {
            j++;
            i++;
        }

        if (j == m) {
            std::cout << "Found pattern at index " << i - j << std::endl;
            j = lps[j - 1];
        } else if (i < n && pattern[j] != text[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i = i + 1;
            }
        }
    }
}



int main() {
    string  text="The quick brown fox jumps over the lazy dog";
    string pattern="fox";
    int a = pattern.length();

    int lps[a];
    prefixTable(pattern, lps, a);
    knuth(text,pattern,lps);


    return 0;
}
