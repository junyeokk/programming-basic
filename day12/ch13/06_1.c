typedef unsigned long ulong;
ulong myNumber = 123456789;

typedef struct {
    int x;
    int y;
} Point;

Point p1 = {0, 0}, p2 = {10, 10};

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    char name[50];
    Date birthday;
} Person;
Person person = {"John Doe", {15, 4, 1990}};

typedef struct {
    char name[50];
    float salary;
} Employee;
typedef Employee *EmployeePtr;

Employee e = {"Alice", 70000.0};
// Employee ePtr = &e;