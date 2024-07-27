#ifndef PASMANG_H
#define PASMANG_H

#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_PASS_LEN 64

/*typedef struct {
  int day;
  int month;
  int year;
  int hour;
  int minute;
  int second;
} s_Date_t;*/

typedef struct {
  char* resurs;
  char* login;
  char* password;
  time_t recording_time;
} s_Password_t;

#endif //PASMANG_H
