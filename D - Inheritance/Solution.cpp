#include <iostream>
#include <vector>

using namespace std;

class Person {
protected:
    string firstName;
    string lastName;
    int id;
public:
    Person(string firstName, string lastName, int identification) {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }

    void printPerson() {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
    }

};

class Student : public Person {
private:
    vector<int> testScores;
public:
    // Write your constructor
    Student(string firstName, string lastName, int id, vector<int> scores) : Person(firstName, lastName, id) {
        this->testScores = scores;
    }

    // Write char calculate()
    char calculate() {
        int total = 0;

        for (int i = 0; i < this->testScores.size(); i++)
            total += this->testScores[i];

        int avg = (int) (total / testScores.size());

        if (avg >= 90 && avg <= 100) return 'O';
        if (avg >= 80 && avg < 90) return 'E';
        if (avg >= 70 && avg < 80) return 'A';
        if (avg >= 55 && avg < 70) return 'P';
        if (avg >= 40 && avg < 55) return 'D';
        return 'T';
    }
};

int main() {
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for (int i = 0; i < numScores; i++) {
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student *s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}
