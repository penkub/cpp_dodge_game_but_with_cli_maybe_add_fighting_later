#ifndef PLAYER_HPP
#define PLAYER_HPP

class player {
  private:
    int position_x = 5;
    int position_y = 5;
    int hp = 5;
    void move_up();
    void move_down();
    void move_left();
    void move_right();
  public:
    void input_handle(char input);
};

#endif PLAYER_HPP