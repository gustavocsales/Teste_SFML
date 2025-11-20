#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/View.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Rect.hpp>
#include <math.h>

struct Posicao{
    float x;
    float y;
};

int main(){

    sf::RectangleShape rectangle1(sf::Vector2f(25.f,380.f));
    rectangle1.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle1.setOutlineColor(sf::Color(100, 250, 50));
    rectangle1.setOutlineThickness(10.f);
    rectangle1.setPosition(460, 280);

    sf::RectangleShape rectangle2(sf::Vector2f(25.f,380.f));
    rectangle2.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle2.setOutlineColor(sf::Color(100, 250, 50));
    rectangle2.setOutlineThickness(10.f);
    rectangle2.setPosition(1470, 280);

    sf::RectangleShape rectangle3(sf::Vector2f(330.f,20.f));
    rectangle3.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle3.setOutlineColor(sf::Color(100, 250, 50));
    rectangle3.setOutlineThickness(10.f);
    rectangle3.setPosition(1120, 280);

    sf::RectangleShape rectangle4(sf::Vector2f(20.f,290.f));
    rectangle4.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle4.setOutlineColor(sf::Color(100, 250, 50));
    rectangle4.setOutlineThickness(10.f);
    rectangle4.setPosition(1090, 5);

    sf::RectangleShape rectangle5(sf::Vector2f(470.f,20.f));
    rectangle5.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle5.setOutlineColor(sf::Color(100, 250, 50));
    rectangle5.setOutlineThickness(10.f);
    rectangle5.setPosition(1120, 110);

    sf::RectangleShape rectangle6(sf::Vector2f(330.f,20.f));
    rectangle6.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle6.setOutlineColor(sf::Color(100, 250, 50));
    rectangle6.setOutlineThickness(10.f);
    rectangle6.setPosition(500, 280);

    sf::RectangleShape rectangle7(sf::Vector2f(20.f,290.f));
    rectangle7.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle7.setOutlineColor(sf::Color(100, 250, 50));
    rectangle7.setOutlineThickness(10.f);
    rectangle7.setPosition(850, 5);

    sf::RectangleShape rectangle8(sf::Vector2f(490.f,15.f));
    rectangle8.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle8.setOutlineColor(sf::Color(100, 250, 50));
    rectangle8.setOutlineThickness(10.f);
    rectangle8.setPosition(350, 120);

    sf::RectangleShape rectangle9(sf::Vector2f(280.f,60.f));
    rectangle9.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle9.setOutlineColor(sf::Color(100, 250, 50));
    rectangle9.setOutlineThickness(10.f);
    rectangle9.setPosition(1635, 600);

    sf::RectangleShape rectangle10(sf::Vector2f(15.f,180.f));
    rectangle10.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle10.setOutlineColor(sf::Color(100, 250, 50));
    rectangle10.setOutlineThickness(10.f);
    rectangle10.setPosition(1900, 400);

    sf::RectangleShape rectangle11(sf::Vector2f(170.f,15.f));
    rectangle11.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle11.setOutlineColor(sf::Color(100, 250, 50));
    rectangle11.setOutlineThickness(10.f);
    rectangle11.setPosition(1710, 400);

    sf::RectangleShape rectangle12(sf::Vector2f(15.f,150.f));
    rectangle12.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle12.setOutlineColor(sf::Color(100, 250, 50));
    rectangle12.setOutlineThickness(10.f);
    rectangle12.setPosition(1710, 240);

    sf::RectangleShape rectangle13(sf::Vector2f(70.f,40.f));
    rectangle13.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle13.setOutlineColor(sf::Color(100, 250, 50));
    rectangle13.setOutlineThickness(10.f);
    rectangle13.setPosition(1650, 190);

    sf::RectangleShape rectangle14(sf::Vector2f(80.f,50.f));
    rectangle14.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle14.setOutlineColor(sf::Color(100, 250, 50));
    rectangle14.setOutlineThickness(10.f);
    rectangle14.setPosition(1600, 130);

    sf::RectangleShape rectangle15(sf::Vector2f(140.f,120.f));
    rectangle15.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle15.setOutlineColor(sf::Color(100, 250, 50));
    rectangle15.setOutlineThickness(10.f);
    rectangle15.setPosition(1775, 675);

    sf::RectangleShape rectangle16(sf::Vector2f(245.f,160.f));
    rectangle16.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle16.setOutlineColor(sf::Color(100, 250, 50));
    rectangle16.setOutlineThickness(10.f);
    rectangle16.setPosition(1670, 810);

    sf::RectangleShape rectangle17(sf::Vector2f(230.f,85.f));
    rectangle17.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle17.setOutlineColor(sf::Color(100, 250, 50));
    rectangle17.setOutlineThickness(10.f);
    rectangle17.setPosition(1460, 990);

    sf::RectangleShape rectangle18(sf::Vector2f(220.f,85.f));
    rectangle18.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle18.setOutlineColor(sf::Color(100, 250, 50));
    rectangle18.setOutlineThickness(10.f);
    rectangle18.setPosition(440, 990);

    sf::RectangleShape rectangle19(sf::Vector2f(120.f,85.f));
    rectangle19.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle19.setOutlineColor(sf::Color(100, 250, 50));
    rectangle19.setOutlineThickness(10.f);
    rectangle19.setPosition(300, 940);

    sf::RectangleShape rectangle20(sf::Vector2f(120.f,85.f));
    rectangle20.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle20.setOutlineColor(sf::Color(100, 250, 50));
    rectangle20.setOutlineThickness(10.f);
    rectangle20.setPosition(170, 890);

    sf::RectangleShape rectangle21(sf::Vector2f(150.f,200.f));
    rectangle21.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle21.setOutlineColor(sf::Color(100, 250, 50));
    rectangle21.setOutlineThickness(10.f);
    rectangle21.setPosition(10, 680);

    sf::RectangleShape rectangle22(sf::Vector2f(260.f,60.f));
    rectangle22.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle22.setOutlineColor(sf::Color(100, 250, 50));
    rectangle22.setOutlineThickness(10.f);
    rectangle22.setPosition(70, 600);

    sf::RectangleShape rectangle23(sf::Vector2f(20.f,270.f));
    rectangle23.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle23.setOutlineColor(sf::Color(100, 250, 50));
    rectangle23.setOutlineThickness(10.f);
    rectangle23.setPosition(70, 320);

    sf::RectangleShape rectangle24(sf::Vector2f(100.f,90.f));
    rectangle24.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle24.setOutlineColor(sf::Color(100, 250, 50));
    rectangle24.setOutlineThickness(10.f);
    rectangle24.setPosition(70, 220);

    sf::RectangleShape rectangle25(sf::Vector2f(150.f,90.f));
    rectangle25.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle25.setOutlineColor(sf::Color(100, 250, 50));
    rectangle25.setOutlineThickness(10.f);
    rectangle25.setPosition(180, 120);

    sf::RectangleShape rectangle26(sf::Vector2f(300.f,320.f));
    rectangle26.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle26.setOutlineColor(sf::Color(100, 250, 50));
    rectangle26.setOutlineThickness(10.f);
    rectangle26.setPosition(500, 320);

    sf::RectangleShape rectangle27(sf::Vector2f(300.f,320.f));
    rectangle27.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle27.setOutlineColor(sf::Color(100, 250, 50));
    rectangle27.setOutlineThickness(10.f);
    rectangle27.setPosition(1150, 320);

    sf::RectangleShape rectangle28(sf::Vector2f(80.f,90.f));
    rectangle28.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle28.setOutlineColor(sf::Color(100, 250, 50));
    rectangle28.setOutlineThickness(10.f);
    rectangle28.setPosition(810, 520);

    sf::RectangleShape rectangle29(sf::Vector2f(80.f,90.f));
    rectangle29.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle29.setOutlineColor(sf::Color(100, 250, 50));
    rectangle29.setOutlineThickness(10.f);
    rectangle29.setPosition(1060, 520);

    sf::RectangleShape rectangle30(sf::Vector2f(250.f,90.f));
    rectangle30.setFillColor(sf::Color(255, 0, 0, 0));
    rectangle30.setOutlineColor(sf::Color(100, 250, 50));
    rectangle30.setOutlineThickness(10.f);
    rectangle30.setPosition(810, 520);
    

//BARREIRAS FÍSICAS: nomeação -> número é igual ao do respectivo retangulo desenhado; letra (WASD) é do limitador da tecla apertada
    sf::FloatRect area1A(395.f, 190.f, 60.f, 420.f);
    sf::FloatRect area1D(370.f, 190.f, 50.f, 420.f);
    sf::FloatRect area1W(375.f, 600.f, 100.f, 25.f);


    sf::FloatRect area2A(1410.f, 190.f, 60.f, 420.f);
    sf::FloatRect area2D(1380.f, 190.f, 50.f, 420.f);
    sf::FloatRect area2W(1375.f, 600.f, 100.f, 25.f);

    sf::FloatRect area3S(1010.f, 180.f, 440.f, 40.f);
    sf::FloatRect area3W(1010.f, 240.f, 440.f, 40.f);

    sf::FloatRect area4A(1020.f, 110.f, 60.f, 90.f);
    sf::FloatRect area4D(1000.f, -100.f, 10.f, 350.f);

    sf::FloatRect area5W(1020.f, 110.f, 550.f, 25.f);

    sf::FloatRect area6S(390.f, 180.f, 440.f, 40.f);
    sf::FloatRect area6W(390.f, 240.f, 440.f, 40.f);
    
    sf::FloatRect area7D(760.f, 110.f, 60.f, 90.f);
    sf::FloatRect area7A(770.f, -100.f, 70.f, 350.f);

    sf::FloatRect area8W(300.f, 110.f, 500.f, 25.f);

    sf::FloatRect area9D(1560.f, 520.f, 300.f, 100.f);
    sf::FloatRect area9S(1570.f, 510.f, 300.f, 30.f);
    sf::FloatRect area9W(1570.f, 600.f, 300.f, 30.f);

    sf::FloatRect area10D(1800.f, 400.f, 30.f, 120.f);
    
    sf::FloatRect area11W(1640.f, 400.f, 300.f, 10.f);

    sf::FloatRect area12D(1620.f, 180.f, 15.f, 200.f);

    sf::FloatRect area13D(1590.f, 130.f, 60.f, 48.f);
    sf::FloatRect area13W(1580.f, 130.f, 60.f, 60.f);

    sf::FloatRect area14D(1530.f, 110.f, 45.f, 60.f);
    sf::FloatRect area14W(1530.f, 110.f, 45.f, 30.f);

    sf::FloatRect area15D(1700.f, 600.f, 40.f, 180.f);

    sf::FloatRect area16D(1600.f, 740.f, 140.f, 200.f);
    sf::FloatRect area16S(1605.f, 740.f, 140.f, 20.f);

    sf::FloatRect area17D(1360.f, 905.f, 250.f, 150.f);
    sf::FloatRect area17S(1365.f, 900.f, 250.f, 150.f);

    sf::FloatRect area18A(380.f, 905.f, 250.f, 150.f);
    sf::FloatRect area18S(375.f, 900.f, 250.f, 150.f);

    sf::FloatRect area19A(220.f, 845.f, 160.f, 70.f);
    sf::FloatRect area19S(220.f, 840.f, 150.f, 90.f);

    sf::FloatRect area20A(100.f, 795.f, 160.f, 70.f);
    sf::FloatRect area20S(100.f, 790.f, 150.f, 90.f);

    sf::FloatRect area21A(0.f, 600.f, 140.f, 200.f);

    sf::FloatRect area22A(0.f, 520.f, 300.f, 100.f);
    sf::FloatRect area22S(0.f, 510.f, 300.f, 30.f);
    sf::FloatRect area22W(0.f, 600.f, 300.f, 30.f);

    sf::FloatRect area23A(0.f, 230.f, 80.f, 300.f);

    sf::FloatRect area24A(0.f, 160.f, 140.f, 115.f);
    sf::FloatRect area24W(0.f, 160.f, 135.f, 120.f);

    sf::FloatRect area25A(100.f, 80.f, 210.f, 115.f);
    sf::FloatRect area25W(100.f, 80.f, 205.f, 120.f);

    sf::FloatRect area26A(410.f, 190.f, 370.f, 425.f);
    sf::FloatRect area26W(410.f, 190.f, 365.f, 430.f);

    sf::FloatRect area27D(1060.f, 190.f, 390.f, 425.f);
    sf::FloatRect area27W(1065.f, 190.f, 385.f, 430.f);

    sf::FloatRect area28A(760.f, 435.f, 110.f, 135.f);
    sf::FloatRect area28S(760.f, 430.f, 105.f, 140.f);
    sf::FloatRect area28W(760.f, 435.f, 105.f, 140.f);

    sf::FloatRect area29D(980.f, 435.f, 110.f, 135.f);
    sf::FloatRect area29S(985.f, 430.f, 105.f, 140.f);
    sf::FloatRect area29W(985.f, 435.f, 105.f, 140.f);

    sf::FloatRect area30W(860.f, 438.f, 130.f, 135.f);

    sf::FloatRect area31W(0.f, -20.f, 1920.f, 30.f);

    sf::FloatRect area32S(0.f, 990.f, 1920.f, 30.f);



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
    if(!mapa1.loadFromFile("CENARIO/image.png")){
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

    sf::Texture inimigo_idle, inimigo_close, inimigo_far, inimigo_attack; 
    if(!inimigo_idle.loadFromFile("LOBO/idle_sprite.png")){
        std::cout << "ERRO AO CARREGAR LOBO" << std::endl;
    }
    if(!inimigo_far.loadFromFile("LOBO/deitado_sprite.png")){
        std::cout << "ERRO AO CARREGAR LOBO1" << std::endl;
    }
    if(!inimigo_close.loadFromFile("LOBO/levanta_sprite.png")){
        std::cout << "ERRO AO CARREGAR LOBO" << std::endl;
    }
    if(!inimigo_attack.loadFromFile("LOBO/attack_sprite.png")){
        std::cout << "ERRO AO CARREGAR LOBO2" << std::endl;
    }

    sf::Texture mercador_idle;
    if(!mercador_idle.loadFromFile("MERCADOR/idle_sprite.png")){
        std::cout << "ERRO AO CARREGAR MERCADOR" << std::endl;
    }

    sf::Sprite mapa;
    mapa.setTexture(mapa1);


    sf::Sprite jogador;
    jogador.setTexture(jogador_img);
    jogador.setPosition(atual.x, atual.y);
    jogador.setScale(0.5, 0.5);
    bool is_moving_right = false;
    bool is_moving_left = false;

    sf::Sprite inimigo;
    inimigo.setTexture(inimigo_far);
    inimigo.setPosition(200, 200);
    inimigo.setScale(0.5, 0.5);

    sf::Sprite mercador;
    mercador.setTexture(mercador_idle);
    mercador.setPosition(1640, 760);
    mercador.setScale(0.8, 0.8);
    
    
    sf::IntRect sheet;

    sf::Clock clock;
    sf::Time frameDuration = sf::seconds(0.8f);
    int currentFrame = 0;
    const int FRAME_WIDTH = 256;
    const int FRAME_HEIGHT = 256;
    const int FRAMES_PER_ROW = 8;
    const int NUM_ROWS = 6;
    const int NUM_FRAMES = FRAMES_PER_ROW * NUM_ROWS;
    const float ANIM_SPEED = 0.04f;
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
            if(!area1A.contains(atual.x, atual.y) && !area2A.contains(atual.x, atual.y) && !area4A.contains(atual.x, atual.y) && !area7A.contains(atual.x, atual.y) && !area18A.contains(atual.x, atual.y) && !area19A.contains(atual.x, atual.y) && !area20A.contains(atual.x, atual.y) && !area21A.contains(atual.x, atual.y) && !area22A.contains(atual.x, atual.y) && !area23A.contains(atual.x, atual.y) && !area24A.contains(atual.x, atual.y) && !area25A.contains(atual.x, atual.y) && !area26A.contains(atual.x, atual.y) && !area28A.contains(atual.x, atual.y)){
                atual.x -= MOVE_SPEED;
            }
            is_moving_x = true;
            jogador.setTexture(jogador_esquerda);

            
        } 

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
            if(!area1D.contains(atual.x, atual.y) && !area2D.contains(atual.x, atual.y) && !area4D.contains(atual.x, atual.y) && !area7D.contains(atual.x, atual.y) && !area9D.contains(atual.x, atual.y) && !area10D.contains(atual.x, atual.y) && !area12D.contains(atual.x, atual.y) && !area13D.contains(atual.x, atual.y) && !area14D.contains(atual.x, atual.y) && !area15D.contains(atual.x, atual.y) && !area16D.contains(atual.x, atual.y) && !area17D.contains(atual.x, atual.y) && !area27D.contains(atual.x, atual.y) && !area29D.contains(atual.x, atual.y)){
                atual.x += MOVE_SPEED;
            }
            is_moving_x = true;
            jogador.setTexture(jogador_direita);
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
            if(!area1W.contains(atual.x, atual.y) && !area2W.contains(atual.x, atual.y) && !area3W.contains(atual.x, atual.y) && !area5W.contains(atual.x, atual.y) && !area6W.contains(atual.x, atual.y) && !area8W.contains(atual.x, atual.y) && !area9W.contains(atual.x, atual.y) && !area11W.contains(atual.x, atual.y) && !area13W.contains(atual.x, atual.y) && !area14W.contains(atual.x, atual.y) && !area22W.contains(atual.x, atual.y) && !area24W.contains(atual.x, atual.y) && !area25W.contains(atual.x, atual.y) && !area26W.contains(atual.x, atual.y) && !area27W.contains(atual.x, atual.y) && !area28W.contains(atual.x, atual.y) && !area29W.contains(atual.x, atual.y) && !area31W.contains(atual.x, atual.y)){
                    atual.y -= MOVE_SPEED;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
            if(!area3S.contains(atual.x, atual.y) && !area6S.contains(atual.x, atual.y) && !area9S.contains(atual.x, atual.y) && !area16S.contains(atual.x, atual.y) && !area17S.contains(atual.x, atual.y) && !area18S.contains(atual.x, atual.y) && !area19S.contains(atual.x, atual.y) && !area20S.contains(atual.x, atual.y) && !area22S.contains(atual.x, atual.y) && !area28S.contains(atual.x, atual.y) && !area29S.contains(atual.x, atual.y) && !area32S.contains(atual.x, atual.y)){
                    atual.y += MOVE_SPEED;
            }
        }
        
        if(!is_moving_x){
            jogador.setTexture(jogador_img);
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
        inimigo.setTextureRect(sf::IntRect(
            col * FRAME_WIDTH,
            row * FRAME_HEIGHT,
            FRAME_WIDTH,
            FRAME_HEIGHT
        ));
        mercador.setTextureRect(sf::IntRect(
            col * FRAME_WIDTH,
            row * FRAME_HEIGHT,
            FRAME_WIDTH,
            FRAME_HEIGHT
        ));

        window.clear();

        window.draw(mapa);
        jogador.setPosition(atual.x, atual.y);
        window.draw(jogador);
        window.draw(inimigo);
        window.draw(mercador);



        /*window.draw(rectangle1);
        window.draw(rectangle2);
        window.draw(rectangle3);
        window.draw(rectangle4);
        window.draw(rectangle5);
        window.draw(rectangle6);
        window.draw(rectangle7);
        window.draw(rectangle8);
        window.draw(rectangle9);
        window.draw(rectangle10);
        window.draw(rectangle11);
        window.draw(rectangle12);
        window.draw(rectangle13);
        window.draw(rectangle14);
        window.draw(rectangle15);
        window.draw(rectangle16);
        window.draw(rectangle17);
        window.draw(rectangle18);
        window.draw(rectangle19);
        window.draw(rectangle20);
        window.draw(rectangle21);
        window.draw(rectangle22);
        window.draw(rectangle23);
        window.draw(rectangle24);
        window.draw(rectangle25);
        window.draw(rectangle26);
        window.draw(rectangle27);
        window.draw(rectangle28);
        window.draw(rectangle29);
        window.draw(rectangle30);*/

        window.display();
    }

    return 0;
}