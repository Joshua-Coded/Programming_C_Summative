# **Programming C Summative Assessment**

## **Author Details**
- **Name:** Joshua Alana  
- **School:** African Leadership University  
- **Year:** 2  
- **Term:** 3  

---

## **Overview**
This repository contains the summative assessment for the low-level programming course. The project demonstrates key programming skills in C, including string manipulation, function pointers, multithreading, file systems, and hardware integration using Arduino.

### **Repository Link**
[GitHub Repository](git@github.com:Joshua-Coded/Programming_C_Summative.git)

---

## **Project Structure**

The assessment is divided into four main sections, each addressing specific learning outcomes. Below is the directory structure and description of the files:

### **Directory Structure**

```
├── Q1_SortingNames.c          # Sorting names with callback functions
├── Q2_HomeAutomation.ino      # Arduino home automation code
├── Q3_MultiThreads.c          # Multithreading for calculating sums
├── Q4_DataStorage.c           # File handling for student data storage
├── README.md                  # Academic documentation
```

---

## **File Descriptions**

### **1. Q1_SortingNames.c**
- **Description:** Implements string manipulation using function pointers and callback functions.
- **Key Features:**
  - Sorts a list of 100 student names in ascending or descending order based on user input.
  - Counts the total number of names in the array.
  - Utilizes an array of function pointers for user-driven operations.
- **Usage Instructions:**
  - Compile the file:
    ```bash
    gcc Q1_SortingNames.c -o SortingNames
    ```
  - Run the executable:
    ```bash
    ./SortingNames
    ```

---

### **2. Q2_HomeAutomation.ino**
- **Description:** An Arduino-based home automation program to control a light bulb.
- **Key Features:**
  - Toggles a light bulb on/off using a remote control.
  - Includes components like a relay, bulb, power source, resistors, and sensors.
- **Usage Instructions:**
  - Open the file in the Arduino IDE.
  - Connect the Arduino to your circuit and upload the code.
  - Test the functionality using a remote control.

---

### **3. Q3_MultiThreads.c**
- **Description:** Multithreaded program to calculate the sum of `n` numbers.
- **Key Features:**
  - Uses 10 threads to divide and process `n` numbers.
  - Combines partial sums from threads into a total sum.
- **Usage Instructions:**
  - Compile the file:
    ```bash
    gcc -pthread Q3_MultiThreads.c -o MultiThreads
    ```
  - Run the executable:
    ```bash
    ./MultiThreads
    ```

---

### **4. Q4_DataStorage.c**
- **Description:** File-handling program to store student data, including grades for three courses.
- **Key Features:**
  - Uses `struct` and `typedef` to organize data for students.
  - Records data in a file, with each student’s data on a new line.
- **Usage Instructions:**
  - Compile the file:
    ```bash
    gcc Q4_DataStorage.c -o DataStorage
    ```
  - Run the executable:
    ```bash
    ./DataStorage
    ```

---

## **Learning Outcomes**

### **Q1: Sorting Names**
- Demonstrates callback function usage for dynamic sorting.
- Enhances string manipulation skills.

### **Q2: Home Automation**
- Combines hardware and software concepts for real-world applications.
- Introduces Arduino programming and circuit design.

### **Q3: Multithreading**
- Implements parallel computing for efficient data processing.
- Demonstrates thread synchronization.

### **Q4: Data Storage**
- Develops skills in file handling for data persistence.
- Organizes data using structures for clean and maintainable code.

---

## **How to Clone and Use the Repository**

1. Clone the repository:
   ```bash
   git clone git@github.com:Joshua-Coded/Programming_C_Summative.git
   ```
2. Navigate into the project directory:
   ```bash
   cd Programming_C_Summative
   ```
3. Follow the usage instructions for each file as described above.

## **Conclusion**
This summative assessment showcases a comprehensive understanding of low-level programming concepts in C. Each file demonstrates specific skills required for the successful implementation of practical programming projects.

---

### **Contact**
For questions or feedback, please contact:
- **Author:** Joshua Alana
- **GitHub:** [Joshua-Coded](https://github.com/Joshua-Coded)
