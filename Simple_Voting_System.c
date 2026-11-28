#include <stdio.h>
#include <stdbool.h>

int main()
{
    int Candidate1Votes = 0;
    int Candidate2Votes = 0;
    int Candidate3Votes = 0;

    int UserChoice;

    while (true)
    {
        printf("\n -> SIMPLE VOTING SYSTEM <-\n\n");
        printf("1 > Vote Candidate Party : BJP\n");
        printf("2 > Vote Candidate Party : BSP\n");
        printf("3 > Vote Candidate Party : TML\n");
        printf("4 > Show Result & Exit");
        printf("\n");
        printf("\nChoose Your Option [ 1 - 4 ] : ");
        scanf("%d", &UserChoice);

        if (UserChoice == 1)
        {
            Candidate1Votes++;
            printf("\nYou Successfully Vote BJP Party\n");
        }
        else if (UserChoice == 2)
        {
            Candidate2Votes++;
            printf("\nYou Successfully Vote BSP Party\n");
        }
        else if (UserChoice == 3)
        {
            Candidate3Votes++;
            printf("\nYou Successfully Vote TML Party\n");
        }
        else if (UserChoice == 4)
        {
            printf("\nCandidate BJP : %d Votes\n", Candidate1Votes);
            printf("Candidate BSP : %d Votes\n", Candidate2Votes);
            printf("Candidate TML : %d Votes\n\n", Candidate3Votes);
            break;
        }
        else
        {
            printf("Error ! Choose Wrong Option & Choose Option 1 to 4\n");
        }
    }

    return 0;
}