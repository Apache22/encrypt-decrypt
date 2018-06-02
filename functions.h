#ifndef MAIN_FUNCTIONS_H
#define MAIN_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>

int shift_distance (char enc_letter);
void encrypt_message (char *message, char enc_letter);
void decrypt_message (char *message, char enc_letter);
void options (int choice);

#endif // MAIN_FUNCTIONS_H
