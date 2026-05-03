Predictive Parsing Table Complexity Measurement

 Project Overview

This project analyzes the complexity of a predictive parsing table used in compiler design. It evaluates efficiency by computing the **Parsing Table Density** and identifying whether the table is complex or not.

 Objective

* To process parsing table entries using C
* To compute **Parsing Table Density**
* To identify complexity using a flag: **Is_Table_Complex**

 Technologies Used

* **Programming Language:** C
* **Concepts:**

  * Arrays
  * Loops
  * Conditional statements
  * Basic arithmetic operations

 How It Works

1. Input

* Number of rows
* Number of columns
* Parsing table values (0 or 1)

2. Data Processing

* Table values are stored in a 2D array
* Filled cells are counted (value = 1)

3. Feature Computation

* **Parsing Table Density = Filled Cells / Total Cells**

4. Flag Generation

* If density > 0.5
  → `Is_Table_Complex = YES`
* Otherwise
  → `NO`

5. Output

* Displays:

  * Total Cells
  * Filled Cells
  * Parsing Table Density
  * Complexity Flag

 How to Run

1. Open the `.c` file in Dev-C++ / Code::Blocks
2. Compile the program
3. Run the executable
4. Enter inputs as prompted

 Sample Input

Enter number of rows: 3
Enter number of columns: 3

1 0 1
0 1 0
1 0 1

 Sample Output

Total Cells: 9
Filled Cells: 5
Parsing Table Density: 0.56
Is_Table_Complex: YES

 Feature Justification

* Low density → Simple table (efficient)
* High density → Complex table (less efficient)
* Threshold used: **0.5 (50%)**

 File Structure

```
RegNo_Name_HoT.c
RegNo_Name_Output.png
RegNo_Name_Explanation.pdf
README.md
```

 Conclusion

This program demonstrates how parsing table data can be analyzed to measure complexity. It converts structural data into meaningful insights using simple C programming techniques.
