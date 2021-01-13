#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include <assert.h>
void test_program_seats()
{
    Program pg=program_seats(40,40,40);
    assert(pg.machine_learning_seats==40);
    assert(pg.bda_seats_filled==0);

}
int main ()
{
    test_program_seats();
    return 0;
}