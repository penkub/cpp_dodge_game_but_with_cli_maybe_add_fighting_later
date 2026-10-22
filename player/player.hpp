#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "../global_variable.hpp"

using namespace std;

class Player {
  private:
    pair<int,int> position = {4,4};
    pair<int,int> position_ghost = {4,4};
    int hp = 5;
    void move_up();
    void move_down();
    void move_left();
    void move_right();
  public:
    void input_handle(char input);
    pair<int,int> get_pos();
    pair<int,int> get_pos_ghost();
    void set_pos_ghost(pair<int,int> pos);
};

#endif PLAYER_HPP