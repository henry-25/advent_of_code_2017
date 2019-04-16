#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int get_largest_diff(string line) {
    istringstream iss (line);
    int largest_num = -999999;
    int smallest_num = 999999;
    do {
        string subs;
        iss >> subs;
        if(subs.size()) {
            int sub_int = stoi(subs);
            if (sub_int > largest_num) {
                largest_num = sub_int;
            }
            if (sub_int < smallest_num) {
                smallest_num = sub_int;
            }
        }
    } while (iss);
    // cout << largest_num << " : " << smallest_num << endl;
    // cout << largest_num - smallest_num << endl;
    return largest_num - smallest_num;
}

int main() {
    string line;
    ifstream myfile ("./input.txt");

    int sum = 0;

    if (myfile.is_open()) {
        while(getline(myfile, line)) {
            sum += get_largest_diff(line);
        }
        myfile.close();
    } else {
        cout << "Unable to open file" << endl;
    }

    cout << sum << endl;
}