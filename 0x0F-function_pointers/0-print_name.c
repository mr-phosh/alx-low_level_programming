#include <stdio.h>

void print_name(char *name, void (*f)(char *)) {
    if (name != NULL && f != NULL) {
        f(name); // Call the function pointed to by f with the name as an argument
    }
}

// Example function to print a name
void print_name_default(char *name) {
    printf("Hello, my name is %s\n", name);
}

int main() {
    char *myName = "John";

    // Call print_name with the print_name_default function to print the name
    print_name(myName, print_name_default);

    return 0;
}

