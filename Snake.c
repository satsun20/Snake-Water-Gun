#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakewatergun(char you, char comp){
    //return 1 if you win and return -1 if computer win and 0 for a draw;

    // condition for draw;;
    if (you == comp){
        return 0;
    }

    // condition for not draw;
    // cases
    // sw sg wg ;;;
    if (you == 's' && comp == 'w'){
        return 1;
    }
    else if (you == 'w' && comp == 's'){
        return -1;
    }

    if (you == 's' && comp == 'g'){
        return -1;
    }
    else if (you == 'g' && comp == 's'){
        return 1;
    }

    if (you == 'w' && comp == 'g'){
        return 1;
    }
    else if (you == 'g' && comp == 'w'){
        return -1;
    }
}

int main()
{   int number;
    char you, comp;
    srand(time(0));
    number = rand() % 100 + 1;
    if(number < 33 && number < 66){
        comp = 's';
    }
    else if(number > 33 && number < 66){
        comp = 'w';
    }
    else{
        comp = 'g';
    }
    printf("Enter s for snake ,w for water ,g for gun\n");
    scanf("%c", &you);
    int result = snakewatergun(you, comp);
    printf("You chose %c and computer chose %c. \n", you, comp);
    if(result == 0){
        printf("Game draw!!\n");
    }
    else if(result == 1){
        printf("you win!!\n");
    }
    else{
        printf("yor lose!!\n");
    }
    return 0;
}