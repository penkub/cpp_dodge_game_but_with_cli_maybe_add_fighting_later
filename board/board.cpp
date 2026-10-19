#include<iostream>

#define board_size_x 8
#define board_size_y 8

using namespace std;
int board[board_size_y+5][board_size_x+5];

char user_input;

void show_board(int board[board_size_x+5][board_size_y+5]){
  for(int pos_board_y = 1; pos_board_y <= board_size_y; pos_board_y++){
    for(int pos_board_x = 1; pos_board_x <= board_size_x; pos_board_x++){
      cout<<board[pos_board_y][pos_board_x]<<' ';
    }
    cout<<'\n';
  }
}

int main()
{
  while(1){
    cin>>user_input;
    show_board(board);
  }
}