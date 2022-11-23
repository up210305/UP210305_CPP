// Libraries used in the program.
#include <iostream>
#include <conio.h>
#include <stdlib.h>

// Use of namespace to avoid std::
using namespace std;

char square[9];
void print_board();
int check_win();
int computer_mark();

int main()
{

    int choice, mark, p, q, r, k, j=1, win=0, mark_2;
    
    cout<<"\033[1;31m"<<"\n\n*************** Tic Tac Toe ****************\n\n";
     
    cout<<"\033[0;36m"<<" Games Modes \n\n Enter 1 for player vs computer. \n Enter 2 for player vs player." << "\033[1;36m"<< "\n Your choice -> ";             //Enter number of player.
    cin>>choice;
     
	for(k=1;k<=9; k++)                                                                   
    { 
        square[k] = '-';
    }
    print_board();
    
        //If you choose mode 2 you will play player vs player 
        if(choice == 2)                                                                    //For 2 player
            {
                cout<<"\033[1;32m"<<" \n For player 1 - (X)       "<< "\033[0;31m"<< "   For player 2 - (O)";
  
                while(win == 0)
                {
                    cout<< "\033[1;36m"<<"\n Player 1 enter your move, in which box you want to mark -> ";        //Player1 move
                    cin>>mark;
                    square[mark] = 'X';
                    print_board();
                     
                    win = check_win();
    	                if (win==1)
                        {
                           cout<<"\033[1;32m"<<"\n Player 1 win!!";
                           exit(0);
                        }
                        else if (win==2)
                        {
                            cout<<"\033[1;30m"<<"\n Its a tie!!";
                            exit(0);
                        }
           
                        cout<< "\033[1;36m"<<"\n Player 2 enter your move, in which box you want to mark -> ";        //Player 2 move
                        cin>>mark;
                        square[mark] = 'O' ;
                        print_board();
                            
                        win = check_win();   
	     			    if (win==1)
                        {
                            cout<< "\033[0;31m"<<"\n Player 2 win!!";
                            exit(0);
                        }
                }
           }
    //If you choose mode 1 you will play player vs computer 
	else if(choice==1)                                                                      // For 1 player game
    {
        cout<<"\033[1;32m"<<" \n For player 1 - (X)       "<< "\033[0;31m"<< "   For Computer - (O)";
         
		    while(win ==0)
            {
                cout<< "\033[1;36m"<<"\n Player 1 enter your move, in which box you want to mark -> ";           //Player move
                cin>>mark;
                square[mark] = 'X' ;
                j++;
                print_board();
                  
                win = check_win();
			        if(win==1)
                    {
                        cout<<"\033[1;32m"<<"\n Player win";
                        exit(0);
                    }
                 
				    else if(win==2)
                    {
                        cout<<"\033[1;30m"<<"\n Its a Tie";
                        exit(0);
                    }
              
                mark_2 = computer_mark();                                               
                for(int i=1;i<=j;i++)                                                   //To check repetition of move to avoid overwrite.
                {
				    if(square[mark_2]== '-')
				    {
				   	    mark=mark_2;  
				   	    break;
				    }        
				    else
			        {
				        mark_2 = computer_mark();
		   		    }
			    }
			    
                square[mark] = 'O' ;
                j++;
                cout<< "\033[1;36m"<<"\n Computer's move -> "<<mark<<"\n";                                                 //Computer move 
                print_board();
              
                win = check_win();
			    if(win==1)
                {
                    cout<< "\033[0;31m"<<"\n Computer wins";
                    exit(0);
                }
     
	       }
	   }
	   else
        {
            cout<<"\n Invalid Input";
        }
	getch();
    return 0;
}

//Function to print the board and replace 
void print_board()
 {
       cout <<"\033[0;35m"<< "\n   |   | " << endl; 
       cout <<"\033[0;35m"<< " " << square[1] << " | " << square[2] << " | " << square[3] << endl; 
       cout <<"\033[0;35m"<< "___|___|___" << endl;
       cout <<"\033[0;35m"<< "   |   | " << endl; 
       cout <<"\033[0;35m"<< " " << square[4] << " | " << square[5] << " | " << square[6] << endl; 
       cout <<"\033[0;35m"<< "___|___|___" << endl; 
       cout <<"\033[0;35m"<< "   |   | " << endl; 
       cout <<"\033[0;35m"<< " " << square[7] << " | " << square[8] << " | " << square[9] << endl; 
       cout <<"\033[0;35m"<< "   |   | " << endl << endl;
 }

/*
Function to return the status of the game
0 = for game is in progress 
1 = for game is over with result
2 = for game is over and no result
*/
int check_win()
{

    if (square[1] == square[2] && square[2] == square[3] && square[3] != '-')
        
        return 1;
    else if (square[4] == square[5] && square[5] == square[6] && square[6] != '-')

        return 1;
    else if (square[7] == square[8] && square[8] == square[9] && square [9] != '-')

        return 1;
    else if (square[1] == square[4] && square[4] == square[7] && square [7] != '-')
    
        return 1;
    else if (square[2] == square[5] && square[5] == square[8] && square [8] != '-')

        return 1;
    else if (square[3] == square[6] && square[6] == square[9] && square [9] != '-')

        return 1;
    else if (square[1] == square[5] && square[5] == square[9] && square [9] != '-')

        return 1;
    else if (square[3] == square[5] && square[5] == square[7] && square [7] != '-')

        return 1;
    else if (square[1] != '-' && square[2] != '-' && square[3] != '-' 
            && square[4] != '-' && square[5] != '-' && square[6] != '-' 
            && square[7] != '-' && square[8] != '-' && square[9] != '-')
        return 2; 
    else
        return 0;
}

//Function to a random move for computer
int computer_mark()
{
    return (rand()%10);
}
