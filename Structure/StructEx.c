#include <stdio.h>
#include <string.h>

struct mobile {
    char model[50];
    int ram, internal;
    double price;
};

void print(struct mobile);

int main() {
    struct mobile mob1;
    strcpy(mob1.model, "Iphone");
    mob1.ram = 128;
    mob1.internal =128;
    mob1.price = 69000.5;

    struct mobile mob2 = {"Vivo v20", 8, 128, 25000.5};

    struct mobile mob3;
     printf("Enter model name, RAM, Internal Storage, and Price:\n");
    // scanf(" %[^\n]", mob3.model);  
    scanf("%d %d %lf", &mob3.ram, &mob3.internal, &mob3.price);
  
    print(mob1);
    print(mob2);
    print(mob3);

    return 0;
}

void print(struct mobile m) {
    printf("\nMobile details: %s\t%d GB RAM\t%d GB Storage\tRs. %.2lf",
           m.model, m.ram, m.internal, m.price);
}
