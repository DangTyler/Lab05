#include <iostream>
#include <vector>
#include <string>
#include "StringData.h"

// Commit #2

using namespace std;

int linear_search(const vector<string>& container, const string& element) {
    cout << "Begin linear search for " << element << endl;
    for (int i = 0; i < container.size(); i++) {
        if (container[i] == element) {
            return i;
        }
    }
    return -1;
}

int binary_search(const vector<string>& container, const string& element) {
    cout << "Begin binary search for " << element << endl;
    int low = 0;
    int high = container.size() - 1;

    while (high >= low) {
        int mid = (high + low) / 2;
        if (container[mid] < element) {
            low = mid + 1;
        } else if (container[mid] > element) {
            high = mid - 1;
        } else {
            return mid;
        }
    }

    return -1;
}

int main() {
    vector<string>& stringData = getStringData();

    long long time_stamp;
    int result;

    time_stamp = systemTimeNanoseconds();
    result = linear_search(stringData, "not_here");
    cout << "Result: " << result << endl;
    cout << "Time: " << systemTimeNanoseconds() - time_stamp << "ms" << endl;

    time_stamp = systemTimeNanoseconds();
    result = binary_search(stringData, "not_here");
    cout << "Result: " << result << endl;
    cout << "Time: " << systemTimeNanoseconds() - time_stamp << "ms" << endl;

    time_stamp = systemTimeNanoseconds();
    result = linear_search(stringData, "mzzzz");
    cout << "Result: " << result << endl;
    cout << "Time: " << systemTimeNanoseconds() - time_stamp << "ms" << endl;

    time_stamp = systemTimeNanoseconds();
    result = binary_search(stringData, "mzzzz");
    cout << "Result: " << result << endl;
    cout << "Time: " << systemTimeNanoseconds() - time_stamp << "ms" << endl;

    time_stamp = systemTimeNanoseconds();
    result = linear_search(stringData, "aaaaa");
    cout << "Result: " << result << endl;
    cout << "Time: " << systemTimeNanoseconds() - time_stamp << "ms" << endl;

    time_stamp = systemTimeNanoseconds();
    result = binary_search(stringData, "aaaaa");
    cout << "Result: " << result << endl;
    cout << "Time: " << systemTimeNanoseconds() - time_stamp << "ms" << endl;

    return 0;
}