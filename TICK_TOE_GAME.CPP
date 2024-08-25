#include<iostream>
using namespace std;

char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn= 'o';
int row,cols;
bool draw = false;


void display(){
    system("cls");
    cout <<"             WELCOME TO TICK TOE GAME           \n";

    cout << "     Player1[o]  \n     Player2[x]\n ";



    cout<< "\t      |      |      \n";
    cout<< "\t "<<board[0][0]<<"    | "<<board[0][1]<<"    | "<<board[0][2]<<"    \n";
    cout<< "\t______|______|______\n";
    cout<< "\t      |      |      \n";
    cout<< "\t "<<board[1][0]<<"    | "<<board[1][1]<<"    | "<<board[1][2]<<"    \n";
    cout<< "\t______|______|______\n";
    cout<< "\t      |      |      \n";
    cout<< "\t "<<board[2][0]<<"    | "<<board[2][1]<<"    | "<<board[2][2]<<"    \n";
    cout<< "\t      |      |      \n";
}

void player_turn(){
    int choice;
    if(turn=='o')
    cout << " Player1[o] turn:";
    if(turn=='x')
    cout << " Player2[x] turn:";

    cin>>choice;
    switch(choice){
        case 1: row=0; cols=0; break;
        case 2: row=0; cols=1; break;
        case 3: row=0; cols=2; break;
        case 4: row=1; cols=0; break;
        case 5: row=1; cols=1; break;
        case 6: row=1; cols=2; break;
        case 7: row=2; cols=0; break;
        case 8: row=2; cols=1; break;
        case 9: row=2; cols=2; break;
        default:
        cout<<"invalid";
        break;
           


    }


    if(turn=='o' && board[row][cols]!='x' && board[row][cols]!='o'){
    board[row][cols] = 'o';
    turn='x';
    }
     else if(turn=='x' && board[row][cols]!='x' && board[row][cols]!='o'){
    board[row][cols] = 'x';
    turn='o';

    }
    else{
        cout<<"box already filled \n Please try again";
        player_turn();
    }

    display();

}

bool gameover(){
    //check wins
    for(int i=0;i<3;i++)
    if(board[i][0]==board[i][1]  && board[i][0]==board[i][2] || board[0][i]==board[1][i]  && board[0][i]==board[2][i])
    return false;

    if(board[0][0]==board[1][1]&& board[0][0]==board[2][2] || board[0][2]==board[1][1]&& board[0][0]==board[2][0])
    return false;


    // if there is any box filled
    for(int i=0;i<3;i++)
    for(int j=0;j<3;i++)
    if(board[i][j]!='x'&& board[i][j]!='0' )
    return true;


    // game draw

    draw =true;
    return false;

}







int main() {
   while(gameover()) {
    display();
    player_turn();
    gameover();

    
   }

   if (turn=='0' && draw == false)
   cout<<"Player2[x] wins! \n";
   else if (turn=='x' && draw== false)
   cout<<"Player1[o] wins! \n";
   else
   cout << "Game Draw \n";

}