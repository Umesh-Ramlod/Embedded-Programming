#include <stdio.h>
#include <string.h>
#include "./Include/typedefs.h"
#include "./Include/struct_header.h"

typedef struct student_info record;

#define STUDENT_FORMAT "Student name - %s, Student id - %d, Standard - %d, Age - %d\n"

void print_records(record data){
    printf(STUDENT_FORMAT, data.name, data.id, data.standard, data.age);
}

void print_record_ptr(record * data){
    printf(STUDENT_FORMAT, data->name, data->id, data->standard, data->age);
}

int main(){

    record first;

    first.id = 212211017;
    first.standard = 10;
    first.age = 27;
    strncpy(first.name, "Umesh", sizeof(first.name) - 1);
    first.name[sizeof(first.name) - 1] = '\0';

    print_records(first);

    // Pointer example
    record * second = &first;

    second->id = 212211018;
    second->standard = 12;
    strncpy(second->name, "Shilpa", sizeof(second->name) - 1);
    second->name[sizeof(second->name) - 1] = '\0';
    second->age = 25;

    print_record_ptr(second);
    print_records(first);

    return 0;
}