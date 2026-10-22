#include<iostream>
#include "Player.hpp"

using namespace std;

void Player::move_up(){
  this->position.second -= 1;
  if(this->position.second<1){
    this->position.second = board_size_y;
    return;
  }
  cout<<"moved up\n";
}

void Player::move_down(){
  this->position.second += 1;
  if(this->position.second>board_size_y){
    this->position.second = 1;
    return;
  }
  cout<<"moved down\n";
}

void Player::move_left(){
  this->position.first -= 1;
  if(this->position.first<1){
    this->position.first = board_size_x;
    return;
  }
  cout<<"moved left\n";
}

void Player::move_right(){
  this->position.first += 1;
  if(this->position.first>board_size_x){
    this->position.first = 1;
    return;
  }
  cout<<"moved right\n";
}

void Player::input_handle(char input){
  if(input == 'w'){
    this->move_up();
  }else if(input == 'a'){
    this->move_left();
  }
  else if(input == 's'){
    this->move_down();
  }
  else if(input == 'd'){
    this->move_right();
  }
}

pair<int,int> Player::get_pos()
{
  return this->position;
}

pair<int,int> Player::get_pos_ghost(){
  return this->position_ghost;
}

void Player::set_pos_ghost(pair<int, int> pos)
{
  this->position_ghost = pos;
}
