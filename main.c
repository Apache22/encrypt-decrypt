/**
 * @file main.c
 * @brief Main file where all the functions are called from.
 *
 * @author Balana Ovidiu Gabriel
 *
 * Allows the user to select options based on what he wants from the program.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "functions.h"
int main()
 /**
     * @fn int main()
     * @brief Main function that takes user input for generating output
     */
{ int choice;

  printf("\nInitiating Start Up Sequence");
  Sleep(500);
  printf(".");
  Sleep(500);
  printf(".");
  Sleep(500);
  printf(".\n");
  printf("\nSummoning Demons");
  Sleep(500);
  printf(".");
  Sleep(500);
  printf(".");
  Sleep(500);
  printf(".\n");
  printf("\nSummoning Complete!");
  printf("\n");
  Sleep(1500);
  printf("\nWhat can I do for you,mortal?");
  Sleep(1500);
  printf("\n");
  options(choice);
    return 0;
}
