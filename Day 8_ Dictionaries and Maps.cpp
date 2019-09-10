#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i, n;
    cin>>n;
    string name, number, key;
    map<string, string> phone_dir;
    for(i=0; i<n; i++)
    {
        cin>>name>>number;
        phone_dir.insert(pair <string, string> (name, number));
    }
    while(cin>>key)
    {
        if (auto res = phone_dir.find(key); res != phone_dir.end())
        {
            std::cout << key << "=" << res->second << std::endl;
        } else {
            std::cout << "Not found" << std::endl;
        }
    }

    return 0;
}
