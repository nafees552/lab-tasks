#include <stdio.h>

int main() {
    float fscMarks, ntsMarks;
    printf("Enter your F.Sc marks: ");
    scanf("%f", &fscMarks);

    printf("Enter your NTS marks: ");
    scanf("%f", &ntsMarks);
    if (fscMarks > 70) {
        if (ntsMarks >= 70) {
            printf("You are eligible for IT at Oxford University.\n");
        } else if (ntsMarks >= 60) {
            printf("You are eligible for Electronics at Oxford University.\n");
        } else if (ntsMarks >= 50) {
            printf("You are eligible for Telecommunication at Oxford University.\n");
        } else {
            printf("You do not qualify for Oxford University.\n");
        }
    } else if (fscMarks >= 60) {
        if (ntsMarks >= 50) {
            printf("You are eligible for IT at MIT.\n");
        } else {
            printf("You do not qualify for MIT.\n");
        }
    } else if (fscMarks >= 50) {
        if (ntsMarks >= 50) {
            printf("You are eligible for Chemical Engineering at MIT.\n");
        } else {
            printf("You do not qualify for MIT.\n");
        }
    } else if (fscMarks >= 40) {
        if (ntsMarks >= 50) {
            printf("You are eligible for Computer Science at MIT.\n");
        } else {
            printf("You do not qualify for MIT.\n");
        }
    } else {
        printf("You do not qualify for any department based on your marks.\n");
    }
}

