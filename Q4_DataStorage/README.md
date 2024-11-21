# **Q4: Data Storage and Computation**

## **Overview**

This program records and stores student data, including their names and grades for three courses:
- **Programming in C**
- **Mobile Application Development**
- **Introduction to Blockchain Development**

The data is entered by the user, validated, and then saved to a file (`students.txt`) in the same directory as the program. Each student's details are stored on a separate row in a structured format.

---

## **Features**

1. **Student Data Entry**:
   - Users can input the full name and grades (out of 100) for up to 100 students.

2. **Validation**:
   - Ensures the number of students is between 5 and 100.

3. **File Storage**:
   - Saves student data to `students.txt` in a structured format for future reference.

4. **Dynamic Memory Management**:
   - Allocates memory for storing student data based on user input.

---

## **Folder Structure**

```plaintext
Q4_DataStorage/
├── src/
│   ├── main.c           # Main program implementation
├── include/
│   ├── student.h        # Header file for the Student structure and functions
├── Makefile             # Build automation file
├── README.md            # Documentation
├── students.txt         # Output file containing student data (generated at runtime)
```

---

## **How to Use**

### **Step 1: Compile the Program**
Use the provided `Makefile` to compile the program:
```bash
make
```

### **Step 2: Run the Program**
Execute the compiled file:
```bash
./data_storage
```

### **Step 3: Input Data**
- Enter the number of students (between 5 and 100).
- For each student, enter:
  - Full name
  - Grade for Programming in C (/100)
  - Grade for Mobile Application Development (/100)
  - Grade for Introduction to Blockchain Development (/100)

### **Step 4: View Output**
- After all data is entered, the program saves the information to `students.txt`.
- Each student's data is recorded on a separate line in the file.

---

## **Sample Input and Output**

### **Input:**
```plaintext
Enter the number of students (5 < n < 100): 3

Entering data for student 1:
Enter full name: John Doe
Enter grade for Programming in C (/100): 85
Enter grade for Mobile Application Development (/100): 90
Enter grade for Introduction to Blockchain Development (/100): 95

Entering data for student 2:
Enter full name: Jane Smith
Enter grade for Programming in C (/100): 88
Enter grade for Mobile Application Development (/100): 92
Enter grade for Introduction to Blockchain Development (/100): 89

Entering data for student 3:
Enter full name: Alice Brown
Enter grade for Programming in C (/100): 78
Enter grade for Mobile Application Development (/100): 85
Enter grade for Introduction to Blockchain Development (/100): 80
```

### **Output (`students.txt`):**
```plaintext
Name,Programming in C,Mobile App Development,Blockchain Development
John Doe,85,90,95
Jane Smith,88,92,89
Alice Brown,78,85,80
```

---

## **Compilation and Execution Commands**

### **Compile**
```bash
make
```

### **Run**
```bash
./data_storage
```

### **Clean**
To remove compiled files and the generated `students.txt`:
```bash
make clean
```

---

## **Key Functions**

1. **`inputStudentData(Student* student)`**:
   - Collects input for a single student's name and grades.
   - Removes any trailing newline character from the name for consistency.

2. **`saveStudentsToFile(Student* students, int count, const char* filename)`**:
   - Writes all student data to the specified file in CSV format.

3. **Dynamic Memory Allocation**:
   - Allocates memory dynamically for the array of `Student` structures based on the user-provided count.

---

## **Learning Outcomes**

1. **Data Structures**:
   - Efficient use of `struct` to organize and manage student data.

2. **File Handling**:
   - Writing structured data to a file for persistent storage.

3. **Memory Management**:
   - Using `malloc` and `free` for dynamic memory allocation.

4. **Input Validation**:
   - Ensuring user inputs meet predefined constraints (e.g., valid number of students).

## **Author**
**Name:** Joshua Alana  
**School:** African Leadership University  
**Year:** 2  
**Term:** 3  
**Repository:** [GitHub Repository](https://github.com/Joshua-Coded/Programming_C_Summative.git)  

---
