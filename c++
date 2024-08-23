#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

int main() {
  // Inicializar a janela
  sf::RenderWindow window(sf::VideoMode(800, 600), "Jogo de Corrida");

  // Carregar os recursos
  sf::Texture carTexture;
  carTexture.loadFromFile("car.png");
  sf::Sprite car(carTexture);

  sf::Texture roadTexture;
  roadTexture.loadFromFile("road.png");
  sf::Sprite road(roadTexture);

  // Definir as variáveis do jogo
  float carSpeed = 0;
  float roadSpeed = 0;

  // Loop do jogo
  while (window.isOpen()) {
    // Tratar eventos
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        window.close();
      }
    }

    // Atualizar o jogo
    carSpeed += 0.1;
    roadSpeed += 0.01;

    // Desenhar o jogo
    window.clear();
    window.draw(road);
    window.draw(car);
    window.display();
  }

  return 0;
}
