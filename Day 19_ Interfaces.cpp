#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};

#include <numeric>
class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) override{
        int sum = 0;
        if (n == 1) {
            return 1;
        }

        for (int i = 1, j = n ; i < j ; ++i) {
            if (n % i) { continue; }
            sum += i;
            j = (n / i);
            if (j <= i) { break; }
            sum += j;
        }

        return sum;
    }
};

int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}
