#include <stdio.h>
#include <string.h>  // Include this for strcpy function

struct student_data {
    char name[50];
    char subName[6][20];  // Increased the size to hold longer strings
    float marks[100];
};

int main() {
    struct student_data sd;

    // Using strcpy to assign strings to the array elements
    strcpy(sd.subName[0], "student_name");
    strcpy(sd.subName[1], "physics");
    strcpy(sd.subName[2], "chemistry");
    strcpy(sd.subName[3], "math");
    strcpy(sd.subName[4], "bio");
    strcpy(sd.subName[5], "cs");

    // Printing the subject names
    for (int i = 0; i < 6; i++) {
        printf("%s ", sd.subName[i]);
    }

    return 0;
}
