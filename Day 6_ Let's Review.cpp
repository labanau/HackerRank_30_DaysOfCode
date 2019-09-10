#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string seperate(string word) {
    string odd, even;
    for (int i = 0; i < word.length(); i++) {
        if ((i + 1) % 2 == 0)
            even += word[i];
        else
            odd += word[i];
    }
    return odd + " " + even;
}

int main() {
    int n;
    string words;
    vector<string> result;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> words;
        result.push_back(seperate(words));
    }
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
    return 0;
}
