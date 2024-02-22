#include <stdio.h>

int main() {
    int passed_count = 0, failed_count = 0;
    int highest_grade = 0, lowest_grade = 100, total_grade = 0;

    int arr1[] = {87, 54, 23, 72, 91, 12, 36, 68, 45, 98};
    int arr2[] = {33, 79, 62, 15, 42, 88, 10, 57, 95, 27};
    int arr3[] = {67, 14, 81, 39, 50, 73, 26, 94, 60, 8};

    for (int i = 0; i < 10; i++) {
        total_grade += arr1[i];
        if (arr1[i] >= 50) {
            passed_count++;
        } else {
            failed_count++;
        }
        if (arr1[i] > highest_grade) {
            highest_grade = arr1[i];
        }
        if (arr1[i] < lowest_grade) {
            lowest_grade = arr1[i];
        }
    }

    for (int i = 0; i < 10; i++) {
        total_grade += arr2[i];
        if (arr2[i] >= 50) {
            passed_count++;
        } else {
            failed_count++;
        }
        if (arr2[i] > highest_grade) {
            highest_grade = arr2[i];
        }
        if (arr2[i] < lowest_grade) {
            lowest_grade = arr2[i];
        }
    }

    for (int i = 0; i < 10; i++) {
        total_grade += arr3[i];
        if (arr3[i] >= 50) {
            passed_count++;
        } else {
            failed_count++;
        }
        if (arr3[i] > highest_grade) {
            highest_grade = arr3[i];
        }
        if (arr3[i] < lowest_grade) {
            lowest_grade = arr3[i];
        }
    }

    float average_grade = (float)total_grade / 30; 

    printf("Number of passed students: %d\n", passed_count);
    printf("Number of failed students: %d\n", failed_count);
    printf("Highest grade: %d\n", highest_grade);
    printf("Lowest grade: %d\n", lowest_grade);
    printf("Average grade: %.2f\n", average_grade);

    return 0;
}
