
Student Grade Manager
Overview
The Student Grade Manager is a C++ program that allows users to manage student grades. The program offers functionalities to add students with their grades, calculate the average grade, sort students by grades in descending order, and display the highest and lowest grades.

Features
Add Students: Input students' names and grades.
Grade Validation: Ensures grades are between 0 and 100.
Display Students: Shows all students and their grades.
Sort Grades: Orders students by their grades in descending order.
Calculate Average: Computes the average grade of all students.
Find Extremes: Identifies the students with the highest and lowest grades.
Requirements
C++ Compiler (e.g., GCC, MSVC)
Console terminal (Windows, Linux, or macOS)
Installation
Clone or download the project.
Open the project folder in your terminal or IDE.
Compile the program using your C++ compiler. For example:
bash
Copy code
g++ -o StudentGradeManager StudentGradeManager.cpp
Run the compiled program:
bash
Copy code
./StudentGradeManager
How to Use

Launch the Program: Run the compiled executable.

Enter the Number of Students: The program will prompt you to enter the total number of students.

Input Student Data: For each student, provide their name and grade. Grades must be between 0 and 100. If an invalid grade is entered, the program will prompt you to re-enter valid data.

View All Students: After inputting all students, their names and grades will be displayed.

Extended Functionalities (modify the main function to use these features):

Sort Grades: Call sortStudentGrades() to sort students by grade in descending order.
Calculate Average Grade: Call calculateAverageGrade() to compute the average.
Find Extremes: Call findHighestGrade() or findLowestGrade() to display the student with the highest or lowest grade.# GradeSystem
