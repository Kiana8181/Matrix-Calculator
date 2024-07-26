# Matrix Calculator

A C++ matrix calculator developed in Visual Studio, capable of performing various matrix operations, including addition, subtraction, multiplication, division, and determinant calculation.

## Features

- **Matrix Operations:**
  - Addition
  - Subtraction
  - Multiplication
  - Division (using matrix inversion)
- **Determinant Calculation**
- **Matrix Size:** Up to 100x100

## Commands

The program provides a command-line interface with the following options:

1. **Get Matrix A**  
   Enter matrix A with specified dimensions.

2. **Get Matrix B**  
   Enter matrix B with specified dimensions.

3. **Transfer A to B**  
   Copy matrix A to matrix B.

4. **Transfer B to A**  
   Copy matrix B to matrix A.

5. **A = A * B**  
   Multiply matrix A by matrix B and store the result in matrix A.

6. **A = A + B**  
   Add matrix B to matrix A and store the result in matrix A.

7. **A = A / B**  
   Divide matrix A by matrix B (matrix B is inverted before multiplication) and store the result in matrix A.

8. **A = A - B**  
   Subtract matrix B from matrix A and store the result in matrix A.

9. **A = a * A**  
   Multiply matrix A by a scalar value `a` and store the result in matrix A.

10. **Determinant of A**  
    Calculate and display the determinant of matrix A.

11. **Determinant of B**  
    Calculate and display the determinant of matrix B.

12. **Print A**  
    Print matrix A to the console.

13. **Print B**  
    Print matrix B to the console.

14. **End**  
    Exit the program.

## Sample Scenarios

1. **Calculate Determinant of Matrix A:**
   - Choose option 1 and enter matrix A.
   - Select option 10 to calculate and display the determinant of matrix A.

2. **Matrix Operations:**
   - Choose option 1 and enter matrix A.
   - Choose option 2 and enter matrix B.
   - Select option 8 to subtract matrix B from matrix A (result stored in A).
   - Select option 9 to multiply matrix A by a scalar value `a`.
   - Select option 12 to print the resulting matrix A.

## Code Overview

The main code performs matrix operations based on user input, utilizing functions for matrix manipulation and determinant calculation. The `determinant` function computes the determinant of a matrix using recursive expansion by minors.

## How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/matrix-calculator.git

2. Open the project in Visual Studio.

3. Build and run the project.

## Requirements

- Visual Studio
- C++ compiler

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Inspired by various matrix computation algorithms and practices.

