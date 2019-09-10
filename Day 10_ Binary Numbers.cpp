#include <bits/stdc++.h>

using namespace std;

int returnConsecutive(int number) {
    int count = 0, max;
    while(number>0) {
        if(number % 2 == 1) {
            count++;
            if(count > max) {
                max = count;
            }
        }
        else {
            count = 0;
        }
        number = number / 2;
    }
    return max;
}

int main()
{
    int n;
    cin >> n;
    cout << returnConsecutive(n) << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return 0;
}
