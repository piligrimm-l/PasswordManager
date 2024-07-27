#include "PasManG.h"

s_Password_t* addPass(char* login, char* password,
                      char* resurs) {
  s_Password_t* newPass = (s_Password_t*)calloc(1, sizeof(s_Password_t));
  newPass->login = login;
  newPass->password = password;
  newPass->resurs = resurs;
  newPass->recording_time = time(NULL);
  return newPass;
}

void encription(){
}

char* generatorPass() {
  char* word = (char*)calloc(MAX_PASS_LEN, sizeof(char));
  if (word) {
  } 
  return word;
}

void freeWord(char* word) {
  if (word) {
    free(word);
  }
  return;
}

s_Password_t* generatingPass(char* login, char* resurs) {
  s_Password_t* newPass = (s_Password_t*)calloc(1, sizeof(s_Password_t));
  newPass->login = login;
  newPass->password = generatorPass();// здесь вызывается функция генерации пароля
  newPass->resurs = resurs;
  newPass->recording_time = time(NULL);
  return newPass;
}

void freePass(s_Password_t* password) {
  if (password) {
    free(password);
  }
  return;
}
