//
// Created by yumen on 12/4/15.
//

#include <vector>

using namespace std;

int testVector() {

    vector<int> intVec;
    intVec.push_back(1);
    intVec.push_back(2);

    // this is the most valuable but does not work so far
    for (auto i : intVec) {
        intVec.push_back(++i);
    }

    auto front = intVec.front();

    return 0;
}