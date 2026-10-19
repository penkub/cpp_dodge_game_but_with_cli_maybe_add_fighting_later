#include<iostream>
#include "player.hpp"

using namespace std;

void move_up(){
  cout<<"moved up";
}

void move_down(){
  cout<<"moved down";
}

void move_left(){
  cout<<"moved left";
}

void move_right(){
  cout<<"moved right";
}

void player::input_handle(char input){
  if(input == 'w'){
    this->move_up();
  }else if(input == 'a'){
    this->move_down();
  }
  else if(input == 's'){
    this->move_left();
  }
  else if(input == 'd'){
    this->move_right();
  }
}
