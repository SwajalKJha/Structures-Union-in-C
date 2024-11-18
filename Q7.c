#include <stdio.h>

struct data {
    int id;
    char name[50];
};
struct data createData() {
    struct data var1;
    var1.id = 1;
    snprintf(var1.name, sizeof(var1.name), "CDAC Pune");
    return var1; 
}

int main() {
    struct data var = createData();
    printf("ID: %d\n", var.id);
    printf("Name: %s\n", var.name);
    
    return 0;
}

