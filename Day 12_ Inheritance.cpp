#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        Student (
            string firstName_,
            string lastName_,
            int identification_,
            vector<int> testScores_
        ) :
            Person(firstName_, lastName_, identification_),
            testScores(testScores_)
        {
            
        }
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate(){
            char letterGrade = '.';
            float average;

            for (auto & score : testScores) {
                average += score;
            }
            average = average / testScores.size();

            if(average >= 90.0) {
                letterGrade = 'O';
            }
            else if (average >= 80.0) {
                letterGrade = 'E';
            }
            else if (average >= 70.0) {
                letterGrade = 'A';
            }
            else if (average >= 55.0) {
                letterGrade = 'P';
            }
            else if (average >= 40.0) {
                letterGrade = 'D';
            }
            else {
                letterGrade = 'T';
            }
            return letterGrade;
        }
};

int main() {
