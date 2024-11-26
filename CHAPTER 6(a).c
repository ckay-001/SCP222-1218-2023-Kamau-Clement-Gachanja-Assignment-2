#include <stdio.h>
#include <string.h>

#define SIZE 5

// Define a record (structure) for a student
struct Student {
    int id;
    char name[50];
    float grade;
};

// Function to display the array of students
void display_students(struct Student students[], int size) {
    printf("ID\tName\tGrade\n");
    for (int i = 0; i < size; i++) {
        printf("%d\t%s\t%.2f\n", students[i].id, students[i].name, students[i].grade);
    }
}

// Bubble sort function to sort by 'id' field
void sort_students_by_id(struct Student students[], int size) {
    struct Student temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].id > students[j + 1].id) {
                // Swap the records
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Initialize an array of students
    struct Student students[SIZE] = {
        {3, "lorette", 85.5},
        {1, "latasha", 90.0},
        {5, "Clement", 72.3},
        {2, "Daisy", 88.4},
        {4, "Roy", 79.5}
    };

    printf("Unsorted Students:\n");
    display_students(students, SIZE);

    // Sort students by 'id'
    sort_students_by_id(students, SIZE);

    printf("\nSorted Students by ID:\n");
    display_students(students, SIZE);

    return 0;
}
