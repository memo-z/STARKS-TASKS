#include <stdio.h>

int main() {
    typedef struct {
        int salary;
        int bonus;
        int deduction;
    } employee;

    employee ahmed, waleed, ali;
    employee arr[] = {ahmed, waleed, ali};

    for (int j = 0; j < 3; j++) {
        printf("enter the salary, bonus, and deduction for employee %d: ", j + 1);
        scanf("%d %d %d", &arr[j].salary, &arr[j].bonus, &arr[j].deduction);
    }

    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += arr[i].salary + arr[i].bonus - arr[i].deduction;
    }
    printf("total sum: %d\n", sum);
    return 0;
}
