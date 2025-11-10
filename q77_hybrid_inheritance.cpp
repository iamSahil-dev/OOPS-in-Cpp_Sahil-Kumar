// WAP to demonstrate hybrid inheritance

#include <iostream>
using namespace std;

class Student {
protected:
    int roll;
    
public:
    void setRoll(int r) {
        roll = r;
    }
    
    void displayRoll() {
        cout << "Roll: " << roll << endl;
    }
};

class Test : public Student {
protected:
    int marks1, marks2;
    
public:
    void setMarks(int m1, int m2) {
        marks1 = m1;
        marks2 = m2;
    }
    
    void displayMarks() {
        cout << "Marks 1: " << marks1 << endl;
        cout << "Marks 2: " << marks2 << endl;
    }
};

class Sports {
protected:
    int score;
    
public:
    void setScore(int s) {
        score = s;
    }
    
    void displayScore() {
        cout << "Sports Score: " << score << endl;
    }
};

class Result : public Test, public Sports {
public:
    void displayResult() {
        displayRoll();
        displayMarks();
        displayScore();
        cout << "Total: " << marks1 + marks2 + score << endl;
    }
};

int main() {
    Result r;
    
    r.setRoll(101);
    r.setMarks(85, 90);
    r.setScore(75);
    r.displayResult();
    
    return 0;
}
