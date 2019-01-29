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
    int contents_length = contents.size() / 2;

    for(int i = 0; i < contents.size(); i++) {
        if (contents[i] == contents[(i+contents_length) % contents.size()]) {
            sum += (contents[i] - '0');
        }
    }

    cout << sum << endl;
}