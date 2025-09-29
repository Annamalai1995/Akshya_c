#include <stdio.h>
struct Mobile {
    char Model_name[50];
    int Ram, Storage;
    double price;
};

int times;

void insert(struct Mobile *m);
void print(struct Mobile *m);

int main() {
    struct Mobile supreme[4];
    times = 0;
    insert(supreme);  //Read
    times = 0;
    print(supreme); // Print
    return 0;
}

void insert(struct Mobile *m) {
    if (times >= 4) {   
        return;
    } else {
        printf("\nEnter the mobile details  ");
        scanf("%s %d %d %lf", m->Model_name, &m->Ram, &m->Storage, &m->price);
        times++;
        insert(m + 1);  
    }
}

void print(struct Mobile *m) {
    if (times >= 4) {   
        return;
    } else {
        printf("\nMobile details: ");
        printf("\n%s\t%dGB\t%dGB\t%.1lf", m->Model_name, m->Ram, m->Storage, m->price);
        times++;
        print(m + 1);   
    }
}
