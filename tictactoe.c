#include <stdio.h>
#include <conio.h>
char o[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' }; // 9 ô
//tao bang
void board()
{
	system("cls"); // xoa man hinh
    printf("\tTic Tac Toe\n");
    printf("Player 1 (X)  -  Player 2 (O)\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", o[1], o[2], o[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", o[4], o[5], o[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", o[7], o[8], o[9]);
    printf("     |     |     \n\n");
}
// check 
int win()
{
    if (o[1] == o[2] && o[2] == o[3])
        return 1;
        
    else if (o[4] == o[5] && o[5] == o[6])
        return 1;
        
    else if (o[7] == o[8] && o[8] == o[9])
        return 1;
        
    else if (o[1] == o[4] && o[4] == o[7])
        return 1;
        
    else if (o[2] == o[5] && o[5] == o[8])
        return 1;
        
    else if (o[3] == o[6] && o[6] == o[9])
        return 1;
        
    else if (o[1] == o[5] && o[5] == o[9])
        return 1;
        
    else if (o[3] == o[5] && o[5] == o[7])
        return 1;
        
    else if (o[1] != '1' && o[2] != '2' && o[3] != '3' &&
        o[4] != '4' && o[5] != '5' && o[6] != '6' && o[7] 
        != '7' && o[8] != '8' && o[9] != '9')
        return 0;
   //chon lai
    else
        return  - 1; 
}

int main()
{
    int player = 1, i, choice;

    char mark;
    do
    {
        board();
        //du = 1,ko du = 2
		player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);
        // check =1 chon 'X', =2 chon 'O'
        mark = (player == 1) ? 'X' : 'O';
        if (choice == 1 && o[1] == '1')
            o[1] = mark;
        else if (choice == 2 && o[2] == '2')
            o[2] = mark;
        else if (choice == 3 && o[3] == '3')
            o[3] = mark;
        else if (choice == 4 && o[4] == '4')
            o[4] = mark;
        else if (choice == 5 && o[5] == '5')
            o[5] = mark;
        else if (choice == 6 && o[6] == '6')
            o[6] = mark;
        else if (choice == 7 && o[7] == '7')
            o[7] = mark;
        else if (choice == 8 && o[8] == '8')
            o[8] = mark;
        else if (choice == 9 && o[9] == '9')
            o[9] = mark;
        else
        {
            printf("Choose again ");
            player--;
            getch();
        }
        i = win();
        player++;
    }while (i ==  - 1);    
    board();    
    if (i == 1)
        printf("Player %d win ", --player);
    else
        printf("Draw");
    getch();
    return 0;
}
