#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib> // For system("cls") or system("clear")

using namespace std;

class StudentGradeManager {
private:
    vector<pair<string, int>> students;
public:
    void addStudent(const string &name, int grade) {
        if (grade >= 0 && grade <= 100)
            students.emplace_back(name, grade);
        else
            cout << "Invalid Grade Range" << endl;
    }

    double calculateAverageGrade() {
        if (students.empty()) {
            cout << "No students to calculate average" << endl;
            return 0.0;
        }
        double gradeSum = 0;
        for (const auto &[name, grade] : students) {
            gradeSum += grade;
        }
        return gradeSum / static_cast<double>(students.size());
    }

    void sortStudentGrades() {
        auto comp = [](const pair<string, int> &a, const pair<string, int> &b) {
            return a.second > b.second;
        };
        sort(students.begin(), students.end(), comp);
    }

    void displayAllStudents() {
        if (students.empty()) {
            cout << "No students to display." << endl;
            return;
        }
        for (const auto &[name, grade] : students) {
            cout << "Name: " << name << ", Grade: " << grade << endl;
        }
    }

    [[nodiscard]] pair<string, int> findHighestGrade() const {
        if (students.empty()) {
            throw runtime_error("No students in the list");
        }
        return students.front();
    }

    [[nodiscard]] pair<string, int> findLowestGrade() const {
        if (students.empty()) {
            throw runtime_error("No students in the list");
        }
        return students.back();
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    StudentGradeManager manager;

    int numberOfStudents;
    cout << "Enter the number of students: ";
    cin >> numberOfStudents;

    for (int i = 0; i < numberOfStudents; ++i) {
        string studentName;
        int studentGrade;

        system("cls"); // Clears the screen (use "clear" for Linux/Mac)
        cout << "Student " << (i + 1) << " of " << numberOfStudents << ":" << endl;
        cout << "Enter the name and grade (e.g., John 85): ";
        cin >> studentName >> studentGrade;

        while (studentGrade < 0 || studentGrade > 100) {
            system("cls"); // Clears the screen
            cout << "Invalid grade! Grade must be between 0 and 100." << endl;
            cout << "Re-enter the name and grade for Student " << (i + 1) << ": ";
            cin >> studentName >> studentGrade;
        }

        manager.addStudent(studentName, studentGrade);
    }

    system("cls"); // Clears the screen before displaying the final output
    cout << "All students and their grades:" << endl;
    manager.displayAllStudents();
}
