
#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

int main() {
    string sentence, word;
    int vowels = 0, words = 0;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    // Count vowels
    for (int i = 0; i < sentence.length(); i++) {
        char ch = tolower(sentence[i]);

        if (ch == 'a' || ch == 'e' ||
            ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
    }

    // Count words and get first word
    stringstream ss(sentence);

    while (ss >> word) {
        words++;
    }

    // Get first word
    ss.clear();
    ss.str(sentence);
    ss >> word;

    // Check palindrome
    string reverseWord = word;
    int n = word.length();

    for (int i = 0; i < n / 2; i++) {
        char temp = reverseWord[i];
        reverseWord[i] = reverseWord[n - 1 - i];
        reverseWord[n - 1 - i] = temp;
    }

    // Print results
    cout << "Characters: " << sentence.length() << endl;
    cout << "Words: " << words << endl;
    cout << "Vowels: " << vowels << endl;

    cout << "UPPERCASE: ";
    for (char ch : sentence)
        cout << (char)toupper(ch);

    cout << endl;

    if (word == reverseWord)
        cout << "First word is palindrome";
    else
        cout << "First word is not palindrome";

    return 0;
}
