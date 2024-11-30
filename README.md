# Student Grade Manager

## 📚 Project Description

The **Student Grade Manager** is a simple yet powerful C++ console application designed to manage student records efficiently. Users can input student names and grades, and the program provides various functionalities like calculating the average grade, sorting students by grades, and finding the highest and lowest grades.

This tool is perfect for teachers, educators, or anyone needing a lightweight solution for managing and analyzing student performance.

---

## 🚀 Features

- **Add Students**: Add student names and grades with validation for grade values (0–100).
- **Display Students**: View a complete list of students and their respective grades.
- **Sort by Grades**: Automatically sorts students in descending order of grades.
- **Calculate Average Grade**: Computes the average grade for all students.
- **Find Top and Bottom Performers**: Quickly identifies students with the highest and lowest grades.
- **User-Friendly Interface**: Interactive and easy-to-navigate console interface.

---

## 🛠️ Getting Started

### Prerequisites
- A modern C++ compiler (e.g., GCC, Clang, MSVC)
- A terminal or IDE to run the program

### Installation

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/your-repo-url/StudentGradeManager.git
   cd StudentGradeManager
   ```

2. **Compile the Program**:
   ```bash
   g++ -o StudentGradeManager StudentGradeManager.cpp
   ```

3. **Run the Application**:
   ```bash
   ./StudentGradeManager
   ```

---

## 🎮 How to Use

1. **Start the Program**:
   Launch the program from your terminal or IDE.

2. **Enter Number of Students**:
   Input how many students you want to manage.

3. **Add Student Details**:
   - Provide the student's name.
   - Input their grade (must be between 0 and 100).
   - Invalid grades will prompt a re-entry.

4. **View All Students**:
   After entering the details, the program will display all students and their grades.

5. **Additional Features**:
   Modify the `main()` function to access advanced features:
   - **Sort Students**: `sortStudentGrades()` to sort students by grades.
   - **Average Grade**: `calculateAverageGrade()` to display the average grade.
   - **Find Extremes**: `findHighestGrade()` or `findLowestGrade()` to identify the top or bottom performers.

---

## 🔍 Example Output

```plaintext
Enter the number of students: 3
Student 1 of 3:
Enter the name and grade (e.g., John 85): John 85
Student 2 of 3:
Enter the name and grade (e.g., Mary 92): Mary 92
Student 3 of 3:
Enter the name and grade (e.g., Alex 78): Alex 78

All students and their grades:
Name: Mary, Grade: 92
Name: John, Grade: 85
Name: Alex, Grade: 78
```

---

## 🧠 Features in Detail

### 1. Add Students
```cpp
manager.addStudent("John", 85);
```
Validates and adds a student’s grade to the list. Grades must be between 0 and 100.

### 2. Display All Students
```cpp
manager.displayAllStudents();
```
Lists all students with their names and grades in the console.

### 3. Sort Grades
```cpp
manager.sortStudentGrades();
```
Sorts students in descending order of grades, with the highest grades appearing first.

### 4. Calculate Average Grade
```cpp
double average = manager.calculateAverageGrade();
cout << "Average Grade: " << average << endl;
```
Calculates and returns the average grade of all students.

### 5. Find Extremes
```cpp
auto highest = manager.findHighestGrade();
auto lowest = manager.findLowestGrade();
cout << "Top Performer: " << highest.first << " with " << highest.second << "%" << endl;
cout << "Lowest Performer: " << lowest.first << " with " << lowest.second << "%" << endl;
```
Finds and displays the students with the highest and lowest grades.

---

## 💡 Design Highlights

- **Grade Validation**: Ensures only valid grades (0–100) are accepted.
- **Exception Handling**: Gracefully handles empty lists for operations like finding the highest/lowest grades.
- **Interactive UI**: The program clears the screen after every input for a clean user experience.

---

## 🖥️ Built With

- **Language**: C++ (Standard 17 or above recommended)
