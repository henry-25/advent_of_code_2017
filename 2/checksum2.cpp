#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int get_divisible_result(string line) {
    istringstream iss (line);
    do {
        string subs;
        iss >> subs;
        cout << subs << endl;
    } while (iss);

    return 0;
}

int main() {
    string line;
    ifstream myfile ("./input_example.txt");

    int sum = 0;

    if (myfile.is_open()) {
        while(getline(myfile, line)) {
            get_divisible_result(line);
        }
        myfile.close();
    } else {
        cout << "Unable to open file" << endl;
    }
}