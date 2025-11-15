


#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/View.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Rect.hpp>

struct Posicao{
    float x;
    float y;
};


int main(){



    sf::RectangleShape rectangle1(sf::Vector2f(15.f,380.f));
    rectangle1.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle1.setOutlineColor(sf::Color(100, 250, 50));
    rectangle1.setOutlineThickness(10.f);
    rectangle1.setPosition(450, 285);

    sf::RectangleShape rectangle2(sf::Vector2f(15.f,380.f));
    rectangle2.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle2.setOutlineColor(sf::Color(100, 250, 50));
    rectangle2.setOutlineThickness(10.f);
    rectangle2.setPosition(1440, 285);

    sf::RectangleShape rectangle3(sf::Vector2f(362.f,15.f));
    rectangle3.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle3.setOutlineColor(sf::Color(100, 250, 50));
    rectangle3.setOutlineThickness(10.f);
    rectangle3.setPosition(1070, 285);

    sf::RectangleShape rectangle4(sf::Vector2f(15.f,130.f));
    rectangle4.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle4.setOutlineColor(sf::Color(100, 250, 50));
    rectangle4.setOutlineThickness(10.f);
    rectangle4.setPosition(1060, 135);

    sf::RectangleShape rectangle5(sf::Vector2f(460.f,15.f));
    rectangle5.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle5.setOutlineColor(sf::Color(100, 250, 50));
    rectangle5.setOutlineThickness(10.f);
    rectangle5.setPosition(1050, 110);

    sf::RectangleShape rectangle6(sf::Vector2f(362.f,15.f));
    rectangle6.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle6.setOutlineColor(sf::Color(100, 250, 50));
    rectangle6.setOutlineThickness(10.f);
    rectangle6.setPosition(475, 285);

    sf::RectangleShape rectangle7(sf::Vector2f(15.f,130.f));
    rectangle7.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle7.setOutlineColor(sf::Color(100, 250, 50));
    rectangle7.setOutlineThickness(10.f);
    rectangle7.setPosition(818, 138);

    sf::RectangleShape rectangle8(sf::Vector2f(460.f,15.f));
    rectangle8.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle8.setOutlineColor(sf::Color(100, 250, 50));
    rectangle8.setOutlineThickness(10.f);
    rectangle8.setPosition(352, 110);



    sf::Rect area(12,12,12,12);


    const sf::VideoMode WINDOWED_MODE(1980, 1020);
    Posicao atual, original;
    atual.x = 960;
    atual.y = 1000;
    original.x = 1920;
    original.y= 1020;
    sf::RenderWindow window(WINDOWED_MODE, "My Window", sf::Style::Default);
    window.setFramerateLimit(60);

    bool is_full_screen = false;

    sf::Event event;

    sf::Texture mapa1, mapa2, mapa3, mapa_final;
    if(!mapa1.loadFromFile("CENARIO/image12.png")){
        std::cout << "ERRO AO CARREGAR MAPA 1" << std::endl;
    }
    mapa1.setSmooth(false);
    if(!mapa2.loadFromFile("CENARIO/image2.jpg")){
        std::cout << "ERRO AO CARREGAR MAPA 2" << std::endl;
    }
    if(!mapa3.loadFromFile("CENARIO/image3.jpg")){
        std::cout << "ERRO AO CARREGAR MAPA 3" << std::endl;
    }
    if(!mapa_final.loadFromFile("CENARIO/image4.jpg")){
        std::cout << "ERRO AO CARREGAR MAPA FINAL" << std::endl;
    }

    sf::Texture jogador_img, jogador_direita, jogador_esquerda;
    if(!jogador_img.loadFromFile("PALADINO/idle_sprite.png")){
        std::cout << "ERRO AO CARREGAR ELFA" << std::endl;
    }

    if(!jogador_direita.loadFromFile("PALADINO/right_sprite.png")){
        std::cout << "ERRO AO CARREGAR ELFA_R" << std::endl;
    }

    if(!jogador_esquerda.loadFromFile("PALADINO/left_sprite.png")){
        std::cout << "ERRO AO CARREGAR ELFA_L" << std::endl;
    }

    sf::Sprite mapa;
    mapa.setTexture(mapa1);


    sf::Sprite jogador;
    jogador.setTexture(jogador_img);
    float jogador_scale = 0;
    jogador.setPosition(atual.x, atual.y);
    bool is_moving_right = false;
    bool is_moving_left = false;
    
    
    sf::IntRect sheet;

    sf::Clock clock;
    sf::Time frameDuration = sf::seconds(0.8f);
    int currentFrame = 0;
    const int FRAME_WIDTH = 256;
    const int FRAME_HEIGHT = 256;
    const int FRAMES_PER_ROW = 8;
    const int NUM_ROWS = 6;
    const int NUM_FRAMES = FRAMES_PER_ROW * NUM_ROWS;
    const float ANIM_SPEED = 0.02f;
    const float MOVE_SPEED = 5.0f;
    
    while(window.isOpen()){
        while (window.pollEvent(event)){
            switch (event.type){
                case sf::Event::Closed:
                    window.close();
                    break;

                case sf::Event::KeyPressed:
                    if(event.key.code == sf::Keyboard::F11){
                   is_full_screen = !is_full_screen;
                    
                    if (is_full_screen)
                    {
                        std::cout << "F11 -> Entrando em Fullscreen..." << std::endl;
                        window.create(WINDOWED_MODE, "Alternar Tela Cheia (SFML)", sf::Style::Fullscreen);
                    }
                    else
                    {
                        std::cout << "F11 -> Voltando ao modo Janela..." << std::endl;
                        window.create(WINDOWED_MODE, "Alternar Tela Cheia (SFML)", sf::Style::Default);
                    }
                    window.setFramerateLimit(60);
                    }
                    break;
                case sf::Event::KeyReleased:
                    break;
                }
        }
        
        bool is_moving_x = false;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::E)) {
            std::cout << "x: " << atual.x << std::endl;
            std::cout << "y: " << atual.y << std::endl;
        } 

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
            if(atual.x >=40){
                atual.x -= MOVE_SPEED;
            }
            
            is_moving_x = true;
            jogador.setTexture(jogador_esquerda);
            jogador_scale = 0.7;

            
        } 

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
            if(atual.x <=1880){
                atual.x += MOVE_SPEED;
            }
            is_moving_x = true;
            jogador.setTexture(jogador_direita);
            jogador_scale = 0.7;
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
            if(atual.y >= 135){
                atual.y -= MOVE_SPEED;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
            if(atual.y <= 1005){
                atual.y += MOVE_SPEED;
            }
        }
        
        if(!is_moving_x){
            jogador.setTexture(jogador_img);
            jogador_scale = 0.48;
        }

        if (clock.getElapsedTime().asSeconds() >= ANIM_SPEED) {
            currentFrame = (currentFrame + 1) % NUM_FRAMES;
            clock.restart();
        }

        int col = currentFrame % FRAMES_PER_ROW;
        int row = currentFrame / FRAMES_PER_ROW;

        jogador.setTextureRect(sf::IntRect(
            col * FRAME_WIDTH,
            row * FRAME_HEIGHT,
            FRAME_WIDTH,
            FRAME_HEIGHT
        ));


        
        window.clear();

        window.draw(mapa);
        jogador.setPosition(atual.x, atual.y);
        jogador.setScale(jogador_scale, jogador_scale);
        window.draw(jogador);



        window.draw(rectangle1);
        window.draw(rectangle2);
        window.draw(rectangle3);
        window.draw(rectangle4);
        window.draw(rectangle5);
        window.draw(rectangle6);
        window.draw(rectangle7);
        window.draw(rectangle8);

        window.display();
    }

    return 0;
}