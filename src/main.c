#include <stdio.h>
#include <espl_lib.h>

int main(int argc, char *argv[]){
    unsigned int number_input;
    char exit_stay_input;
    char help_clear_buffer;
    do{
        printf("Type in a number:\n");
        scanf("%u", &number_input);
        char* returned_string = num_to_words(number_input);
        printf("%s\n", returned_string);

        do{
            printf("If you wish to exit the program, type 'q'. If you wish to run another number, type 's'.\n");
            scanf(" %c", &exit_stay_input);
            while ((help_clear_buffer = getchar()) != '\n' && help_clear_buffer != EOF){
                exit_stay_input = 'a';
            };
        } while (exit_stay_input != 'q' && exit_stay_input != 'Q' && exit_stay_input != 's' && exit_stay_input != 'S');
    } while (exit_stay_input == 's' || exit_stay_input == 'S');

    return 0;
}