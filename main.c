#include <stdio.h>
#include <string.h>

#define TEXT_LEN 301

void showMenu();
int isAlphabetLetter(char alphabet[], char input_char);
int isKey(char alphabet[], char input_char);

int main(void)
{
    char option, temp;
    char input_text[TEXT_LEN], output_text[TEXT_LEN];

    // Alphabet letters and its correspondent keys have the same index in different strings
    char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char keys[] = "puoyrwznxvqsticfgljmkdahebPUOYRWZNXVQSTICFGLJMKDAHEB";
    
    
    do {
        showMenu();  // Prints menu
        puts("");

        // Gets option
        puts("Choose option:");
        printf("> ");
        scanf(" %c", &option);

        switch (option) {
            case 'e':  // Encode option
                puts("Enter text to encode (MAX length is 300 characters):");
                scanf("%c", &temp);  // temp var to clear buffer
                fgets(input_text, sizeof(input_text), stdin);  // Get input text to encode

                // Encodes input string char by char
                for (int i = 0; i < TEXT_LEN; i++) {
                    int alphabetCharIndex = isAlphabetLetter(alphabet, input_text[i]); 
                    
                    if (alphabetCharIndex == -1) {
                        output_text[i] = input_text[i];
                    } else {
                        output_text[i] = keys[alphabetCharIndex];
                    }
                }

                // Prints encoded string
                puts("");
                puts("Encoded text");
                puts("-----------------------------");
                printf("%s", output_text);
                puts("-----------------------------");
                break;

            case 'd':  // Decode option
                puts("Enter text to decode (MAX length is 300 characters):");
                scanf("%c", &temp);  // temp var to clear buffer
                fgets(input_text, sizeof(input_text), stdin);  // Get input text to decode

                // Decodes input string char by char
                for (int i = 0; i < TEXT_LEN; i++) {
                    int keyCharIndex = isKey(keys, input_text[i]);
                    
                    if (keyCharIndex == -1) {
                        output_text[i] = input_text[i];
                    } else {
                        output_text[i] = alphabet[keyCharIndex];
                    }
                }

                // Prints decoded string
                puts("");
                puts("Decoded text");
                puts("-----------------------------");
                printf("%s", output_text);
                puts("-----------------------------");
                break;
            case 'q':
                break;
            default:
                puts("Invalid option!");
                break;
        }

    } while (option != 'q');

    puts("Exiting program...");  // Exit message
    return 0;
}

// Prints menu
void showMenu() {
    puts(" ____________________________ ");
    puts("|  __      ___    _  _____   |");
    puts("|  \\ \\    / / |  | |/ ____|  |");
    puts("|   \\ \\  / /| |  | | |       |");
    puts("|    \\ \\/ / | |  | | |       |");
    puts("|     \\  /  | |__| | |____   |");
    puts("|      \\/    \\____/ \\_____|  |");
    puts("|                            |");
    puts("|       Encoder/Decoder      |");
    puts("|  ------------------------  |");
    puts("|         |Options|          |");
    puts("|         e - encode         |");
    puts("|         d - decode         |");
    puts("|          q - quit          |");
    puts("|____________________________|");
}

// If the given 'char' is an alphabet letter returns its index in the string, otherwise returns -1
int isAlphabetLetter(char alphabet[], char input_char) {
    for (size_t i = 0; i < strlen(alphabet); i++) {
        if (input_char == alphabet[i]) {
            return (int)i;
        }
    }
    return -1;
}

// If the given 'char' is a key returns its index in the string, otherwise returns -1
int isKey(char keys[], char input_char) {
    for (size_t i = 0; i < strlen(keys); i++) {
        if (input_char == keys[i]) {
            return (int)i;
        }
    }
    return -1;
}