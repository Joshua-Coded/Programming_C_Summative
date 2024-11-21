# **Q3: Multithreads - Sum of n Numbers**

## **Overview**

This program calculates the sum of `n` numbers using **10 threads**. The user enters the value of `n` (greater than 1000) via the keyboard, and the program divides the array of `n` numbers equally across the 10 threads. Each thread computes the sum of its assigned slice, and the partial sums are combined to produce the final total sum.

This implementation demonstrates efficient use of multithreading in C for parallel computation.

---

## **Features**

1. **Dynamic Array Allocation**:
   - Supports large `n` values by dynamically allocating memory for the array.

2. **Multithreading**:
   - Divides the array into 10 slices, with each slice processed by a separate thread.

3. **Partial Sum Calculation**:
   - Each thread computes the sum of its assigned slice.

4. **Thread Debugging**:
   - Prints detailed information about each thread, including:
     - Thread ID
     - Range of indices processed
     - Partial sum calculated

5. **Final Sum Computation**:
   - Combines partial sums from all threads to calculate the total sum.

---

## **Folder Structure**

```plaintext
Q3_Multithreads/
├── src/
│   ├── main.c           # Main program implementation
├── include/
│   ├── multithread_sum.h # Header file for multithreading logic
├── Makefile             # Build automation file
├── README.md            # Documentation
```

---

## **How to Use**

### **Step 1: Compile the Program**
Use the provided `Makefile` for easy compilation:
```bash
make
```

### **Step 2: Run the Program**
Run the compiled executable:
```bash
./multithread_sum
```

### **Step 3: Provide Input**
When prompted, enter a value of `n` (greater than 1000). Example:
```plaintext
Enter the value of n (greater than 1000): 1001
```

### **Step 4: Observe Output**
The program will display the partial sums calculated by each thread and the final total sum.

---

## **Sample Output**

### **Input:**
```plaintext
Enter the value of n (greater than 1000): 1001
```

### **Output:**
```plaintext
Thread 1 processed indices [0 - 99], Partial Sum: 5050
Thread 2 processed indices [100 - 199], Partial Sum: 15050
Thread 3 processed indices [200 - 299], Partial Sum: 25050
Thread 4 processed indices [300 - 399], Partial Sum: 35050
Thread 5 processed indices [400 - 499], Partial Sum: 45050
Thread 6 processed indices [500 - 599], Partial Sum: 55050
Thread 7 processed indices [600 - 699], Partial Sum: 65050
Thread 8 processed indices [700 - 799], Partial Sum: 75050
Thread 9 processed indices [800 - 899], Partial Sum: 85050
Thread 10 processed indices [900 - 1000], Partial Sum: 105550
Total sum of the array: 501501
```

---

## **Implementation Details**

### **Thread Arguments (`ThreadArgs`)**
- **Fields**:
  - `array`: Pointer to the array to process.
  - `startIndex`: Starting index of the array slice for the thread.
  - `endIndex`: Ending index of the array slice for the thread.
  - `partialSum`: Sum of the slice calculated by the thread.
  - `threadId`: ID of the thread (for debugging purposes).

### **Core Functions**
1. **`computePartialSum`**:
   - Computes the sum of the assigned slice for each thread.
   - Prints thread details for debugging.

2. **`calculateTotalSum`**:
   - Creates threads to process slices of the array.
   - Joins threads and accumulates partial sums to compute the total.

---

## **Learning Outcomes**

1. **Threading Basics**:
   - Creation, execution, and joining of threads using the `pthread` library.

2. **Data Division**:
   - Efficiently dividing large datasets across multiple threads for parallel processing.

3. **Memory Management**:
   - Dynamic allocation of memory for arrays to handle large inputs.

4. **Debugging Multithreaded Programs**:
   - Using thread IDs and detailed output for debugging and verification.

---

## **Compilation and Execution Commands**

### **Compile**
```bash
make
```

### **Run**
```bash
./multithread_sum
```

### **Clean**
Remove compiled files:
```bash
make clean
```
## **Author**
**Name:** Joshua Alana  
**School:** African Leadership University  
**Year:** 2  
**Term:** 3  
**Repository:** [GitHub Repository](https://github.com/Joshua-Coded/Programming_C_Summative.git)  

---
