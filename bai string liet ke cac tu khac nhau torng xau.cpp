#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <set>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    stringstream ss(str);
    string word;
    set<string> lexorderwords;
    vector<string> apporderwords;
    
    while (ss >> word){
        lexorderwords.insert(word);
        apporderwords.push_back(word);
    }
    
    for (const string &lexorderword : lexorderwords){
        cout << lexorderword << " ";
    }
    cout << endl;
    
    for (const string &apporderword : apporderwords){
        if (lexorderwords.find(apporderword) != lexorderwords.end()){
            cout << apporderword << " ";
        }
    }
    cout << endl;
    
    return 0;
}
