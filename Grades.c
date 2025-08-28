#include <stdio.h>

int main() {
    int m1, m2, m3, total;
    float avg;

    // Input marks
    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    // Check if student failed in any subject
    if (m1 < 35 || m2 < 35 || m3 < 35) {
        printf("Result: FAIL (Less than 35 marks in a subject)\n");
    } else {
        total = m1 + m2 + m3;
        avg = total / 3.0;

        printf("Total = %d\n", total);
        printf("Average = %.2f\n", avg);

        // Grade classification
        if (avg >= 70)
            printf("Grade: Distinction\n");
        else if (avg >= 60)
            printf("Grade: First Class\n");
        else if (avg >= 50)
            printf("Grade: Second Class\n");
        else if (avg >= 35)
            printf("Grade: Third Class\n");
        else
            printf("Result: FAIL\n");
    }

    return 0;
}