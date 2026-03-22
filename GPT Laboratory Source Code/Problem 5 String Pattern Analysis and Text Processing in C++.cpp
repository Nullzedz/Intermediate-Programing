#include <bits/stdc++.h>
using namespace std;

struct wordRecord
{
    string word;
    int length;
    int vowelCount;
    string Palindrome;
};

int countVowels(string w){
    int vowelcount = 0;
    for(int i = 0; i < w.length(); i++){
        char c = w[i];
        c = toupper(c);
        if(c == 'A' || c == 'E' || c == 'I' ||  c == 'O' || c == 'U'){
            vowelcount++;
        }
    }
    return vowelcount;
}
bool isPalindrome(string w){
    int size = w.length();
    int j = size - 1;
    for (int i = 0; i < size / 2; i++){
        char c = toupper(w[i]);
        char s = toupper(w[j]);
        if (c != s){
            return false;
        }
        j--;
    }
    return true;
}

void inputAndPlaceItems(int amount, vector<wordRecord>& word){
    string input;
    vector<string> words;

    for(int i = 0; i < amount; i++){
        cin >> input;
        words.push_back(input);
    }

    word.resize(words.size());
    for(int i = 0; i < words.size(); i++){
        word.at(i).word = words.at(i);
        word.at(i).length = words.at(i).length();
        int flag = isPalindrome(words.at(i));
        if(flag == 1){
            word.at(i).Palindrome = "YES";
        }else{
            word.at(i).Palindrome = "NO";
        }
        word.at(i).vowelCount = countVowels(words.at(i));
    }
}

int main()
{
    int amount = 0;
    cin >> amount;
    vector<wordRecord>word;
    inputAndPlaceItems(amount, word);

    for(const auto& wordRecord : word){
        cout << '\n' << wordRecord.word << '\n' << wordRecord.length  << '\n' << wordRecord.Palindrome << '\n' << wordRecord.vowelCount << '\n'; 
    }


    return 0;
}