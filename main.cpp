/*Setup*/
//Include Statements
#include <iostream>
#include <SFML/Graphics.hpp>

//Main Function
int main(){
    //Window Definition
    sf::RenderWindow window(sf::VideoMode(800, 600), "C++ Graphics Test");
    //logo definition
    sf::Texture logoTexture;
    if(!logoTexture.loadFromFile("./resources/logo.png")){
        return 1;
    }
    sf::Sprite logoSprite(logoTexture);
    
    //Window Loop
    while(window.isOpen()){
        //Event Handling
        sf::Event e;
        while(window.pollEvent(e)){
            if(e.type==sf::Event::Closed){
                window.close();
            }
        }
        
        //Rendering/Drawing
        window.clear();
        window.draw(logoSprite);
        //Display Window
        window.display();
    }
    return 0;
}
