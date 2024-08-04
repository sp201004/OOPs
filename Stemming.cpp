#include <iostream>
#include <algorithm>
#include <fstream>
#include <sstream>
using namespace std;

string remove(string word)
{

    if (!word.empty() && (word[word.length() - 1] == '.' || word[word.length() - 1] == ','))
        word.erase(word.length() - 1);

    return word;
}
string ing(string word)
{
    if (word.size() >= 3 && word.substr(word.length() - 3) == "ing")
        return word.substr(0, word.length() - 3);
    return word;
}

string ed(string word)
{
    if (word.size() >= 2 && word.substr(word.length() - 2) == "ed")
        return word.substr(0, word.length() - 2);
    return word;
}

string er(string word)
{
    if (word.size() >= 2 && word.substr(word.length() - 2) == "er")
        return word.substr(0, word.length() - 2);
    return word;
}

string ion(string word)
{
    if (word.size() >= 3 && word.substr(word.length() - 3) == "ion")
        return word.substr(0, word.length() - 3);
    return word;
}

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    string line;
    if (!input.is_open() || !output.is_open())
    {
        cerr << "Error: Unable to open files." << endl;
        return 1;
    }
    while (getline(input, line))
    {
        istringstream iss(line);
        string word;
        while (iss >> word)
        {
            word = remove(word);
            word = ing(word);
            word = ed(word);
            word = er(word);
            word = ion(word);
            output << word << " ";
        }
        output << endl;
    }
    cout << "Stemming is completed." << endl;
    input.close();
    output.close();
    return 0;
}
