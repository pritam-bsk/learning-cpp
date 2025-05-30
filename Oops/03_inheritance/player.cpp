#include "person.h"
#include "player.h"

Player::Player(std::string_view game_param)
{
    m_game=game_param;
}
std::string Player::get_game_name(){
        return m_game;
}
void Player::set_game_name(std::string_view game_param){
    m_game =  game_param ;
}