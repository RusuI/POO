// Laborator 8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;

class Compare {
public:
    bool operator()(pair<string, int> n1, pair<string, int>n2)
    {
        if (n1.second < n2.second)
            return true;
        if (n1.second > n2.second) 
            return false;
        if (n1.first > n2.first) 
            return true;
        return false;
    }
};
int main()
{
    ifstream file ("Text.txt");
    if (!file) {
        cout << "Unable to open the file";
        return 0;
    }
    string phrase;

    if (!getline(file, phrase)) {
        printf("error la citirea din fisier: input.txt");
        return 0;
    }
    std::for_each(phrase.begin(), phrase.end(), [](char& c) {
        c = ::tolower(c);
        });
    printf("Sirul de caractere citit este: %s\n",phrase.c_str());
    map <string, int> map;
    string delim = "  !?.,";
    size_t begin_word, position = 0;
    while ((begin_word = phrase.find_first_not_of(delim, position)) != std::string::npos)
    {
        position = phrase.find_first_of(delim, begin_word + 1);
        string  word= phrase.substr(begin_word, position - begin_word);
        map[word]++;
    }
    
    for (auto mapIterator = map.begin(); mapIterator != map.end(); mapIterator++) {
        cout<<mapIterator->first<< " : "<< mapIterator->second << endl;
    }
    priority_queue< pair<string,int>, vector<pair<string,int>>, Compare>s;
    for (auto mapIterator = map.begin(); mapIterator != map.end(); mapIterator++) {
        s.push( make_pair(mapIterator->first, mapIterator->second));

    }
    cout << "Finally: " << "\n";
    while (s.empty() == false)
    {
        pair<string, int>word = s.top();
        cout << word.first << " => " << word.second << "\n";
        s.pop();
    }







}

