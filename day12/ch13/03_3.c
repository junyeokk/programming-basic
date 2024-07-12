#include <stdio.h>

typedef struct {
    char street[50];
    char city[50];
    char state[3];
    int zip;
} Address;

typedef struct {
    char name[50];
    int age;
    Address address;
} Person;

void printPersonInfo(Person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Address: %s, %s, %s, %d\n", p.address.street, p.address.city, p.address.state, p.address.zip);
}

int main() {
    Person person = {"John Doe", 30, {"123 Main St", "Anytown", "NY", 12345}};
    printPersonInfo(person);

    return 0;
}