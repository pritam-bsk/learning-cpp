#include <iostream>
#include "player.h"


int main(){

  Player p1;
  p1.set_first_name("Virat");
  p1.set_last_name("Kohli");
  p1.set_game_name("Cricket");
  p1.print_player_details();
  return 0;
}