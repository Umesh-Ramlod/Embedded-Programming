#include <stdio.h>
#include "./Include/typedefs.h"
#include "./Include/struct_header.h"

typedef struct student_info records;

void print_records(records data){

    // printf("Student name - %s, Student id - %d , Standard - %d , Age - %d",data->name, data->id, data->standard, data->age);
    printf("Student name - %s, Student id - %d , Standard - %d , Age - %d",data.name, data.id, data.standard, data.age);
    printf("\n");
}

int main(){

    records first;

    first . id = 212211017;
    first . standard = 10;
    first . age = 27;
    first . name = "Umesh";

    print_records(first);

    // Pointer example
    records * second;

    return 0;
}