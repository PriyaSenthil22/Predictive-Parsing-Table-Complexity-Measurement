#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;
    int total_cells, filled_cells = 0;
    float density;
    float threshold = 0.5;

    // Input table size
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Declare table (1 = filled, 0 = empty)
    int table[rows][cols];

    printf("\nEnter the parsing table (1 for filled, 0 for empty):\n");

    // Input table values
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &table[i][j]);

            if(table[i][j] == 1) {
                filled_cells++;
            }
        }
    }

    // Calculate total cells
    total_cells = rows * cols;

    // Calculate density
    density = (float)filled_cells / total_cells;

    // Output results
    printf("\nTotal Cells: %d", total_cells);
    printf("\nFilled Cells: %d", filled_cells);
    printf("\nParsing Table Density: %.2f\n", density);

    // Check complexity
    if(density > threshold) {
        printf("Result: Table is COMPLEX\n");
    } else {
        printf("Result: Table is NOT complex\n");
    }

    return 0;
}
