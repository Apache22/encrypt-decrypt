/**
 * @file functions.c
 * @brief C library containing the functions used for encrypting or decrpyting.
 * @author Balana Ovidiu Gabriel
 */
#include <stdio.h>
#include "functions.h"
#include <string.h>
#include <windows.h>
  int iterator;
  int first_iterator;
  int second_iterator;
  int message_length;
  char message[256];
  char enc_letter;

  char first_row[] = "qwertyuiop";
  char second_row[] = "asdfghjkl";
  char third_row[] = "zxcvbnm";

  int first_row_length = 10;
  int second_row_length = 9;
  int third_row_length = 7;

int shift_distance (char enc_letter){
 /**
     * @fn int shift_distance (char enc_letter)
     * @brief Calculates the shift distance.
     * @param enc_letter The encryption letter chosen by the user.
     *
     * The function finds the shift distance used on each row of the keyboard.
     */
 char second_row[] = "asdfghjkl";
 int second_row_length = 9;


 for (iterator = 0; iterator < second_row_length; iterator++)
    if (second_row[iterator] == enc_letter)
        return iterator;
 return 0;
 }

 void encrypt_message (char *message, char enc_letter){
/**
     * @fn void encrypt_message (char *message, char enc_letter)
     * @brief Encrypts the message.
     * @param *message The message used as input.
     * @param enc_letter The encryption letter chosen by the user.
     *
     * The function encrypts the message using the chosen encryption letter.
     *
     */

  int shift;

  shift = shift_distance(enc_letter);

  for (first_iterator = 2; first_iterator < message_length; first_iterator++)

    if (message[first_iterator] == ' ')
         printf(" ");
     else

         for (second_iterator = 0; second_iterator < first_row_length; second_iterator++)

            if (message[first_iterator] == first_row[second_iterator])
                 {
                 printf ("%c", first_row[(second_iterator + shift) % first_row_length]);
                 break;
                 }
                else

                    if (message[first_iterator] == second_row[second_iterator])
                         {
                         printf ("%c", second_row[(second_iterator + shift) % second_row_length]);
                         break;
                         }
                         else

                            if (message[first_iterator] == third_row[second_iterator])
                                 {
                                 printf ("%c", third_row[(second_iterator + shift) % third_row_length]);
                                 break;
                                 }

  printf ("\n");
  }

 void decrypt_message (char *message, char enc_letter){
/**
     * @fn void decrypt_message (char *message, char enc_letter)
     * @brief Decrypts the message.
     * @param *message The message used as input.
     * @param enc_letter The encryption letter chosen by the user.
     *
     * The function decrypts the message using the given encryption letter.
     *
     */
  int shift;

  shift = shift_distance(enc_letter);

  for (first_iterator = 2; first_iterator < message_length; first_iterator ++)

    if (message[first_iterator] == ' ')
         printf(" ");

     else

         for (second_iterator = 0; second_iterator < first_row_length; second_iterator++)

            if (message[first_iterator] == first_row[second_iterator])
                 {
                 printf ("%c", first_row[(second_iterator - shift + first_row_length) % first_row_length]);
                 break;
                 }
                else

                    if (message[first_iterator] == second_row[second_iterator])
                         {
                         printf ("%c", second_row[(second_iterator - shift + second_row_length) % second_row_length]);
                         break;
                         }
                         else

                            if (message[first_iterator] == third_row[second_iterator])
                                 {
                                 printf ("%c", third_row[(second_iterator - shift + 2*third_row_length) % third_row_length]);
                                 break;
                                 }


  printf ("\n");
  }

  void options (int choice){
/**
     * @fn void options (int choice){
     * @brief Lets the user pick an option.
     * @param choice The option's number picked by the user.
     *
     * The function does several actions based on the options picked by the user.
     *
     */
  while( 1 > 0 )
    {
        printf("\nPress 1 for entering message: ");
        printf("\nPress 2 for encrypting:");
        printf("\nPress 3 for decrypting :");
        printf("\nPress 4 for help :");
        printf("\nPress 5 to conquer the world :");
        printf("\nPress 6 for beer :");
        printf("\nPress 7 to join the cult :");
        printf("\nPress 8 to exit :");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                 printf ("Enter your message: \n");
                 getchar();
                 fgets (message, 256, stdin);
                 enc_letter = message[0];
                 message_length = strlen(message);
                break;

            case 2:
                printf("\nEncrypting Message");
                Sleep(500);
                printf(".");
                Sleep(500);
                printf(".");
                Sleep(500);
                printf(".\n");
                encrypt_message (message, enc_letter);
                break;

            case 3:
                printf("\nDecrypting Message");
                Sleep(500);
                printf(".");
                Sleep(500);
                printf(".");
                Sleep(500);
                printf(".\n");
                decrypt_message (message, enc_letter);
                printf("\n");
                break;

            case 4:
               printf("\nHello mortal.I am Pachimari the Eater Of Pancakes.");
               printf("\nI am here to serve you for now.");
               printf("\nMy main use is to encrypt or decrypt messages");
               printf("\nthrough various magic rituals and summonings");
               printf("\nPower does not grow on trees so mine is limited as well");
               printf("\nFor that I require you to always introduce");
               printf("\nthe first letter of the message followed by a space");
               printf("\nas the codification letter.After that write the message");
               printf("\nand I will do the rest for you.");
               printf("\n");
               break;

            case 5:
               printf("\nA wise choice mortal.MWHAHAHAHA");
               printf("\nSummoning demonic armies");
               Sleep(500);
               printf(".");
               Sleep(500);
               printf(".");
               Sleep(500);
               printf(".\n");
               Sleep(1500);
               printf("\nUnleashing cute hamsters and puppies");
               Sleep(500);
               printf(".");
               Sleep(500);
               printf(".");
               Sleep(500);
               printf(".\n");
               Sleep(1500);
               printf("\nCONGRATULATIONS HUMAN.The world is yours now.");
               printf("\n");
               break;
               
            case 6:
               printf("\nDo I look like a vending machine? Go buy it from the store.");
               printf("\n");
               break;
               
            case 7:
                printf("\nHOOORAY!Congratulations you are part of the cult now! :D :D :D :D :D");
                printf("\n");
                break;
            
            case 8:
                 printf("\nFarewell Human. See you again.");
                 printf("\n");
                 exit(0);
                break;
            
            default: printf("\nYou have entered an invalid choice. Please try again");
        }
    }
}

