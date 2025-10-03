#include <stdio.h>
#include <string.h>

// Define the union
union college {
    char stu_name[50];
    int age;
    char College_name[50];
    int fee;
};

int main() {
    union college c;

    strcpy(c.stu_name, "Akshya");
    printf("Student_name: %s\n", c.stu_name);

    c.age = 20;
    printf("Age: %d\n", c.age);

    strcpy(c.College_name, "GCT");
    printf("College_Name: %s\n", c.College_name);

    c.fee = 150005;
    printf("Fees Structure: %d\n", c.fee);

    return 0;
}
