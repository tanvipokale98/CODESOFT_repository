#include<iostream>
#include<ctime>
using namespace std;
void board(char *spaces){
      
      cout<<"       |       |       "<<endl;
      cout<<"   "<<spaces[0]<<"   |   "<<spaces[1]<<"   |   "<<spaces[2]<<endl;
      cout<<"_______|_______|_______"<<endl;
      cout<<"       |       |      "<<endl;
      cout<<"   "<<spaces[3]<<"   |   "<<spaces[4]<<"   |   "<<spaces[5]<<endl;
      cout<<"_______|_______|_______"<<endl;
      cout<<"       |       |      "<<endl;
      cout<<"   "<<spaces[6]<<"   |   "<<spaces[7]<<"   |   "<<spaces[8]<<endl;
      cout<<"       |       |      "<<endl;
      
     
}
void player1(char *spaces){
    while(true){
        int move;
        cout<<"Enter your move(1-9):";
        cin>>move;
        if((move>0 && move<=9) && spaces[move-1]==' '){
            spaces[move-1]='X';
            break;
        }
    }
    board(spaces);
}

void player2(char *spaces){
    while(true){
        int move;
        cout<<"Enter your move(1-9):";
        cin>>move;
        if((move>0 && move<=9) && spaces[move-1]==' '){
            spaces[move-1]='O';
            break;
        }
    }
    board(spaces);
}
bool checkWin(char *spaces){
        if((spaces[0]=='X' && spaces[1]=='X' && spaces[2]=='X')|| (spaces[3]=='X' && spaces[4]=='X' && spaces[5]=='X') || (spaces[6]=='X' && spaces[7]=='X' && spaces[8]=='X')||(spaces[0]=='X' && spaces[3]=='X' && spaces[6]=='X')|| (spaces[1]=='X' && spaces[4]=='X' && spaces[7]=='X')|| (spaces[2]=='X' && spaces[5]=='X' && spaces[8]=='X') ||(spaces[0]=='X' && spaces[4]=='X' && spaces[8]=='X') || (spaces[2]=='X' && spaces[4]=='X' && spaces[6]=='X')){
            return true;
        }
        else if((spaces[0]=='O' && spaces[1]=='O' && spaces[2]=='O')|| (spaces[3]=='O' && spaces[4]=='O' && spaces[5]=='O') || (spaces[6]=='O' && spaces[7]=='O' && spaces[8]=='O')||(spaces[0]=='O' && spaces[3]=='O' && spaces[6]=='O')|| (spaces[1]=='O' && spaces[4]=='O' && spaces[7]=='O')|| (spaces[2]=='O' && spaces[5]=='O' && spaces[8]=='O') ||(spaces[0]=='O' && spaces[4]=='O' && spaces[8]=='O') || (spaces[2]=='O' && spaces[4]=='O' && spaces[6]=='O')){
            return true;
        }
        else{
            return false;
        }

}
bool checkTie(char *spaces){
    for(int i=0;i<9;i++){
        if(spaces[i]==' '){
            return false;
        }
    }
    return true;
}


int main(){
    char spaces[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char temp[9]={'1','2','3','4','5','6','7','8','9'};
    cout<<"Choose your Move by entering a number given below:"<<endl;
    board(temp);
while(true){
    char ans;
    cout<<"Do you want to start Tic-Tac-Toe Game? Enter y/n"<<endl;
    cin>>ans;
    if(ans=='y' || ans=='Y'){
        while(true){
           player1(spaces);
           if(checkWin(spaces)){
            cout<<"Hurray!! Player1 Win"<<endl;
            break;
           }
           if(checkTie(spaces)){
            cout<<"Its's a Tie"<<endl;
            break;
           }
           player2(spaces);
           if(checkWin(spaces)){
            cout<<"Hurray !! Player 2 Win"<<endl;
            break;
           }
           if(checkTie(spaces)){
            cout<<"It's a Tie"<<endl;
            break;
           }
        
    }
    }
    else break;  
}
    
cout<<"Thanks for Playing"<<endl;

}