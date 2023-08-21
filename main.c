#include <stdio.h>
#include <stdlib.h>
#include "time.h"


// NEW
void clearConsole()
{
    system("clear");
}

// TIME FUNCTION

void time(int choice, int input, FILE *fp);

int main()
{
    FILE *fp = fopen("time.txt", "a");
    if (fp == NULL)
    {
        printf("File Created!.\n");
        fp = fopen("time.txt", "w");
        return 1;
    }
    
    int choice;
    
    do
    {
        printf("What would you like to know?\n\n\t(1) Convert second(s)...\n\t(2) Convert minute(s)...\n\t(3) Convert hour(s)...\n\t(4) Convert day(s)...\n\t(5) Convert year(s)...\n\t(6) Clear File\n\t(7) Stop Program\n\n> ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                time(choice, 0, fp);
                break;
            case 6:
                printf("Clearing File\n");
                fclose(fp);
                fp = fopen("time.txt", "w");
                if (fp == NULL)
                {
                    printf("File could not be cleared.\n");
                    return 1;
                }
                break;
            case 7:
                printf("Closing\n");
                fclose(fp);
                exit(0);
            default:
                printf("Invalid input\n");
                break;
        }
        
        clearConsole();
        fp = fopen("time.txt", "a");
        
    } while (1);

    return 0;
}

void time(int choice, int input, FILE *fp)
{
    printf("Enter your value: ");
    scanf("%d", &input);
    
    switch (choice)
    {
        case 1:
            fprintf(fp, "%d second(s)\n{\nminute(s): %d\nhour(s): %d\nday(s): %d\nyear(s): %d\n}\n\n", input, s_to_m(input), s_to_h(input), s_to_d(input), s_to_y(input));
            break;
        case 2:
            fprintf(fp, "%d minute(s)\n{\nsecond(s): %d\nhour(s): %d\nday(s): %d\nyear(s): %d\n}\n\n", input, m_to_s(input), m_to_h(input), m_to_d(input), m_to_y(input));
            break;
        case 3:
            fprintf(fp, "%d hour(s)\n{\nsecond(s): %d\nminute(s): %d\nday(s): %d\nyear(s): %d\n}\n\n", input, h_to_s(input), h_to_m(input), h_to_d(input), h_to_y(input));
            break;
        case 4:
            fprintf(fp, "%d day(s)\n{\nsecond(s): %d\nminute(s): %d\nhour(s): %d\nyear(s): %d\n}\n\n", input, d_to_s(input), d_to_m(input), d_to_h(input), d_to_y(input));
            break;
        case 5:
            fprintf(fp, "%d year(s)\n{\nsecond(s): %d\nminute(s): %d\nhour(s): %d\nday(s): %d\n}\n\n", input, y_to_s(input), y_to_m(input), y_to_h(input), y_to_d(input));
            break;
        default:
            fprintf(fp, "Error!");
            break;
    }
    
    fclose(fp);
}
