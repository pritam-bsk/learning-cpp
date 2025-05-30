#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include <string_view>
#include "person.h"
using namespace std;

class Player : public Person
{
public:
    Player() = default;
    Player(std::string_view game_param);
    std::string get_game_name();
    void set_game_name(std::string_view game_param);
    void print_player_details();
private : 
    std::string m_game{"None"};
};

#endif