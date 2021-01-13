#include<stdio.h>
#include "appconst.h"
#ifndef STUDENT_H_INCLUDE
#define STUDENT_H_INCLUDE

typedef struct _student_ Student;

struct _student_ {
    char name[STUDENT_NAME_LEN];
    int32_t regnumber[REGISTRATION_NUMBER_LEN];
    char program[PROGRAM_NAME_LEN];
    char email[PROGRAM_STATUS_LEN];

};

typedef struct _program_ Program;

struct _program_{
    int8_t machine_learning_seats;
    int8_t bigdata_seats;
    int8_t es_seats;

    int8_t ml_filled_seats;
    int8_t bda_filled_seats;
    int8_t es_filled_seats;


};




Program program_seats(int8_t ml, int8_t bda, int8_t es);
Student student_new(char name[], char prg[], char mail[]);
int8_t test_admission_status(Student s1);
int8_t filled_seats_machine_learning();

#endif //STUDENT_H_INCLUDE