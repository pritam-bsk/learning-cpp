#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <cmath>

float BALL_SIZE = 20.f;
unsigned int FPS = 60;

float ballVelX = -0.5f;
float ballVelY = 0.f;

float g = 1.f;
float cor = 0.6f;
float friction = 0.98f;

int main(){
    bool isDraging = false;
    sf::Vector2f prevMousePos;

    sf::RenderWindow window(sf::VideoMode(1440,900),"collision");
    window.setFramerateLimit(FPS);
    sf::Texture backgroundTexture;
    if(!backgroundTexture.loadFromFile("assets/background.jpg")){
        std::cout<<"background image not loaded"<<std::endl;
        return -1;
    }
    sf::Sprite background(backgroundTexture);

    sf::CircleShape ball(BALL_SIZE);
    ball.setFillColor(sf::Color(0,0,0,200));

    float ballX = (window.getSize().x-ball.getRadius())/2;
    float ballY = 0 ;
    ball.setPosition(sf::Vector2f(ballX,ballY));

    float ballZeroVelPosY = 0.f;

    sf::SoundBuffer collision_;
    if(!collision_.loadFromFile("assets/tap.wav")){
        std::cout<<"assets/downcollision.wav load error"<<std::endl;
        return -1;
    }
    sf::Sound collision;
    collision.setBuffer(collision_);

    sf::SoundBuffer drag_;
    if(!drag_.loadFromFile("assets/drag.wav")){
        std::cout<<"assets/drag.wav load error"<<std::endl;
        return -1;
    }
    sf::Sound drag;
    drag.setBuffer(drag_);
    

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
            if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
                window.close();
        }
        sf::Vector2f mousePos = static_cast<sf::Vector2f>(sf::Mouse::getPosition(window));
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            ballVelX = 0.f;
            ballVelY = 0.f;

            float dx = mousePos.x - ballX - BALL_SIZE;
            float dy = mousePos.y - ballY - BALL_SIZE;
            float dist = std::sqrt((dx*dx)+(dy*dy));         
            if(dist > BALL_SIZE && !isDraging){
                isDraging = true;
            }   
            if(isDraging){
                ballX = mousePos.x - BALL_SIZE;
                ballY = mousePos.y - BALL_SIZE;
            }
            prevMousePos = mousePos;
        }
        if(!sf::Mouse::isButtonPressed(sf::Mouse::Left) && isDraging){
            drag.play();
            isDraging = false;
            sf::Vector2f currMousePos = static_cast<sf::Vector2f>(sf::Mouse::getPosition(window));
            ballVelX = (currMousePos.x - prevMousePos.x) * 0.5f;
            ballVelY = (currMousePos.y - prevMousePos.y) * 0.5f;
        }
        ballY += ballVelY;
        ballVelY += g; if(ballVelY == 0) ballZeroVelPosY = ballY;
        ballX += ballVelX;
        ball.setPosition(sf::Vector2f(ballX,ballY));

        sf::Vector2u windowSize = window.getSize();
        float r = ball.getRadius();

        if (ballX < 0) {
            ballX = 0;
            float impactVelocity = std::abs(ballVelX);
            float volume = std::clamp(impactVelocity,0.f,100.f);
            ballVelX = -ballVelX * cor;
            if(impactVelocity<1.f){
                ballVelX = 0.f;
                ballVelY *= friction;
            }
            collision.setVolume(volume);
            collision.play();
        }
        if (ballY < 0) {
            ballY = 0;
            float impactVelocity = std::abs(ballVelY);
            float volume = std::clamp(impactVelocity,0.f,100.f);
            ballVelY = -ballVelY * cor;
            if(impactVelocity<1.f){
                ballVelY = 0.f;
                ballVelX *= friction;
            }
            collision.setVolume(volume);
            collision.play();
        }
        if (ballX + r * 2 > windowSize.x){
            ballX = windowSize.x - r * 2;
            float impactVelocity = std::abs(ballVelX);
            float volume = std::clamp(impactVelocity,0.f,100.f);
            ballVelX = -ballVelX * cor;
            if(impactVelocity<1.f){
                ballVelX = 0.f;
                ballVelY *= friction;
            }
            collision.setVolume(volume);
            collision.play();
        }
        if (ballY + r * 2 > windowSize.y){
            ballY = windowSize.y - r * 2;
            float impactVelocity = std::abs(ballVelY);
            float volume = std::clamp(impactVelocity*5.f,0.f,100.f);
            ballVelY = -ballVelY * cor;
            if(impactVelocity<4.f){
                ballVelY = 0.f;
                ballVelX *= friction;
                if (std::abs(ballVelX) < 2.f) {
                 ballVelX = 0.f;
                }
            }else{
                collision.setVolume(volume);
                collision.play();
            }
        }

        window.clear();
        window.draw(background);
        window.draw(ball);
        window.display();
    }
    

    return 0;
}