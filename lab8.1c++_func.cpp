#include <iostream>
#include <string> 

using namespace std;

bool Find(string& str) {
    return (str.find("aa") != -1) || (str.find("bb") != -1) || (str.find("cc") != -1);
}

string Process(string& str) {
    string newStr = str;
    while (true) {
        size_t pos = newStr.find("aa");
        if (pos == -1) break;
        newStr.replace(pos, 2, "***");
    }
    while (true) {
        size_t pos = newStr.find("bb");
        if (pos == -1) break;
        newStr.replace(pos, 2, "***");
    }
    while (true) {
        size_t pos = newStr.find("cc");
        if (pos == -1) break;
        newStr.replace(pos, 2, "***");
    }
    return newStr;
}

int main() {
    string str = "";

    cout << "Enter string:" << endl;
    getline(cin, str);
    
    bool changed = Find(str);
    string newStr = Process(str);
    if (changed) {
        cout << "String was modified." << endl;
        cout << "Modified string (result): " << newStr << endl;
    }
    else {
        cout << "String was not modified." << endl;
    }


    return 0;
}