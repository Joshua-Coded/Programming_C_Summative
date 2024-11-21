## **Folder Structure**

```
Q1_SortingNames/
├── src/
│   ├── main.c           # Main program implementation
│   ├── sort.c           # Sorting logic implementation
│   ├── count.c          # Counting logic implementation
│   └── utils.c          # Utility functions for displaying and handling names
├── include/
│   ├── sort.h           # Header file for sorting logic
│   ├── count.h          # Header file for counting logic
│   └── utils.h          # Header file for utility functions
├── README.md            # Documentation for the project
├── Makefile             # Build automation file
```

---

## **Project Overview**

This project demonstrates sorting and counting operations on an array of 100 student names using function pointers and callback functions. The user can choose between sorting names in ascending or descending order or counting the number of names in the list.

---

## **Tasks**

### **Task 1: Sorting Names Using a Callback Function**
- **Objective:** Sort a list of student names based on user input (`asc` or `desc`).
- **Implementation:**
  - A function pointer (`callback`) is used to select the appropriate sorting order.
  - Sorting is performed using `strcmp` to compare strings.

### **Task 2: Counting the Number of Names**
- **Objective:** Count the total number of student names in the array.
- **Implementation:**
  - Iterate through the array and count non-empty entries.

### **Task 3: Array of Functions for User Selection**
- **Objective:** Allow the user to dynamically choose between sorting and counting.
- **Implementation:**
  - Use an array of function pointers to dynamically invoke the desired operation.

---

## **How to Use**

### **Step 1: Compilation**
Use the provided `Makefile` to compile the program:
```bash
make
```

### **Step 2: Running the Program**
Run the compiled executable:
```bash
./sorting_names
```

### **Step 3: User Interaction**
- **Option 1:** Sort Names
  - Input `1` to select sorting.
  - Enter `asc` for ascending or `desc` for descending order.
  - View the sorted list of names.
- **Option 2:** Count Names
  - Input `2` to count names.
  - View the total number of names.

---

## **Example Output**

### **Sorting Example**
```plaintext
Choose an option:
1. Sort Names
2. Count Names
1
Enter sorting order (asc/desc): asc
Sorted Names:
Alice
Bob
Charlie
David
Eve
```

### **Counting Example**
```plaintext
Choose an option:
1. Sort Names
2. Count Names
2
Total Names: 5
```

---

## **Folder Details**

### **1. src/**
Contains the main implementation files for the project:
- `main.c`: The entry point for the program.
- `sort.c`: Contains functions for ascending and descending sorting.
- `count.c`: Implements the counting functionality.
- `utils.c`: Includes helper functions such as displaying names.

### **2. include/**
Contains header files for each implementation:
- `sort.h`: Prototypes for sorting functions.
- `count.h`: Prototypes for counting functions.
- `utils.h`: Prototypes for utility functions.

### **3. Makefile**
Automates the build process:
- `make`: Compiles all source files into an executable.
- `make clean`: Removes all compiled files.

---

## **Learning Outcomes**

1. **String Manipulation:**
   - Mastery of string comparison and sorting using `strcmp`.
2. **Function Pointers:**
   - Dynamic selection of operations through callback functions.
3. **Program Structure:**
   - Modular programming with separate files for sorting, counting, and utilities.

---

## **Future Improvements**

1. **Dynamic Input:**
   - Allow users to input names dynamically instead of hardcoding them.
2. **Case-Insensitive Sorting:**
   - Enhance sorting logic to handle case insensitivity.
3. **Enhanced Error Handling:**
   - Add robust checks for invalid inputs.

---

## **Author**
**Name:** Joshua Alana  
**School:** African Leadership University  
**Year:** 2  
**Term:** 3  
**Repository:** [GitHub Repository](git@github.com:Joshua-Coded/Programming_C_Summative.git)  

--- 
