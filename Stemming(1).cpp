#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

string ing(string word) {
    if (word.length() >= 3 && word.substr(word.length() - 3) == "ing") {
        return word.substr(0, word.length() - 3);
    }
    return word;
}

string ed(string word) {
    if (word.length() >= 2 && word.substr(word.length() - 2) == "ed") {
        return word.substr(0, word.length() - 2);
    }
    return word;
}

string er(string word) {
    if (word.length() >= 2 && word.substr(word.length() - 2) == "er") {
        return word.substr(0, word.length() - 2);
    }
    return word;
}

string ion(string word) {
    if (word.length() >= 3 && word.substr(word.length() - 3) == "ion") {
        return word.substr(0, word.length() - 3);
    }
    return word;
}

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");
    string line;
    if (!input.is_open()) {
        cout << "Error opening file";
        return 1;
    }

    while (getline(input, line)) {
        istringstream iss(line);
        string word;

    while (iss >> word) {
        word = ing(word);
        word = ed(word);
        word = er(word);
        word = ion(word);
        
        output << word << " ";
    }
    output << endl;
    }
    cout << "Stemming is  completed";

    input.close();
    output.close();

    return 0;
}
