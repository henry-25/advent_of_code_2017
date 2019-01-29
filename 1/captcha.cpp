#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line;
    ifstream myfile ("./input.txt");

    string contents;

    if (myfile.is_open()) {
        while(getline(myfile, line)) {
            contents = line;
        }
        myfile.close();
    } else {
        cout << "Unable to open file" << endl;
    }

    int sum = 0;

    for(int i = 0; i < contents.size() - 1; i++) {
        if (contents[i] == contents[i + 1]) {
            sum += (contents[i] - '0');
        }
    }
    if (contents.back() == contents[0]) {
        sum += (contents.back() - '0');
    }
    cout << sum << endl;
}