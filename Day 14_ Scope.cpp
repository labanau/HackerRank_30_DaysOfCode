#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	// Add your code here
    Difference(vector<int> arr) {
        elements = arr;
        maximumDifference = 0;
    }

    void computeDifference(){
        int size = elements.size()-1;

        for(int i=0; i < size; i++) {
            for(int j = i; j < size; j++) {
                if(maximumDifference < abs(elements[i] - elements[j+1]))
                    maximumDifference = abs(elements[i] - elements[j+1]);
            }
        }
    }
}; // End of Difference class
