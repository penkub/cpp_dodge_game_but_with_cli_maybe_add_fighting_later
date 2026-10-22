#include<iostream>
#include"player/player.hpp"
#include "./global_variable.hpp"

using namespace std;
int board[board_size_y+5][board_size_x+5];

char user_input;

void board_edit(int board[board_size_x+5][board_size_y+5],int x,int y,int sym){
  board[y][x] = sym;
}

void render_player(int board[board_size_x+5][board_size_y+5], Player* player){
  board_edit(board,player->get_pos().first,player->get_pos().second,5);
  cout << player->get_pos().first<<" "<<player->get_pos().second<<'\n';
  board_edit(board,player->get_pos_ghost().first,player->get_pos_ghost().second,0);
  player->set_pos_ghost(player->get_pos()); 
  cout << player->get_pos_ghost().first<<" "<<player->get_pos_ghost().second<<'\n';
}

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
  //initial shit idk
  Player player;
  board_edit(board,4,4,5);

  //looping stuff
  while(1){
    cin>>user_input;
    player.input_handle(user_input);
    render_player(board,&player);
    show_board(board);
    cout << player.get_pos().first<<" "<<player.get_pos().second<<'\n';
    cout << player.get_pos_ghost().first<<" "<<player.get_pos_ghost().second<<'\n';
  }
}