#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Solution {
    private:      
        std::stack<char> word_stack;
        std::queue<char> word_queue;
    public:
        void pushCharacter(char ch) {
            word_stack.push(ch);
        }

        void enqueueCharacter(char ch) {
            word_queue.push(ch);
        }

        char popCharacter() {
            char top = word_stack.top();
            word_stack.pop();
            return top;
        }

        char dequeueCharacter() {
            char c = word_queue.front();
            word_queue.pop();
            return c;
        }
    //Write your code here
};

int main() {
