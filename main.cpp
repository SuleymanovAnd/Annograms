#include <iostream>
#include <map>
#include <string>
using namespace std;
map<char,int> WordComposition (string &str){
    map<char,int> tmp;
    for (int i = 0; i < str.length(); i++){
        tmp[(char)tolower(str[i])]++;
    }
    return tmp;
}

int main() {
    cout << "Enter 2 words: ";
    string word1, word2;
    cin >> word1 >> word2;

    if (WordComposition(word1) == WordComposition (word2)){
        cout << "These words are an anagram";
    }else {cout << "These words are not an anagram";}
}
