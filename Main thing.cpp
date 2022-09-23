#include <SFML/Graphics.hpp>

class tree {
private:
	int xpos;
	int ypos;
	int size;
	sf::CircleShape circle;
	sf::RectangleShape rect;
	sf::RectangleShape rect2;
	sf::RectangleShape rect3;
	sf::RectangleShape rect4;
public:
	tree(int x, int y, int s); //constructor
	void draw(sf::RenderWindow& window);
};

class shrub {
private:
	int xpos;
	int ypos;
	int size;
	sf::CircleShape circle;
public:
	shrub(int r, int t, int u); //constructor
	void draw(sf::RenderWindow& window);
};

tree::tree(int x, int y, int s) {
	xpos = x;
	ypos = y;
	size = s;
}

shrub::shrub(int r, int t, int u) {
	xpos = r;
	ypos = t;
	size = u;
}


void tree::draw(sf::RenderWindow& window) {
	circle.setRadius(size);
	circle.setFillColor((sf::Color(0, 100, 0)));
	circle.setPosition(xpos, ypos);
	rect.setPosition(140, 190);
	rect2.setPosition(340, 390);
	rect3.setPosition(540, 590);
	rect4.setPosition(740, 590);
	rect.setFillColor(sf::Color(100, 80, 0));
	rect.setSize(sf::Vector2f(20, 100));
	rect2.setFillColor(sf::Color(100, 80, 0));
	rect2.setSize(sf::Vector2f(20, 100));
	rect3.setFillColor(sf::Color(100, 80, 0));
	rect3.setSize(sf::Vector2f(20, 100));
	rect4.setFillColor(sf::Color(100, 80, 0));
	rect4.setSize(sf::Vector2f(20, 100));
	window.draw(circle);
	window.draw(rect);
	window.draw(rect2);
	window.draw(rect3);
	window.draw(rect4);
}

void shrub::draw(sf::RenderWindow& window) {
	circle.setRadius(size);
	circle.setFillColor((sf::Color(30, 100, 0)));
	circle.setPosition(xpos, ypos);
	window.draw(circle);

}

tree t1(100, 100, 50);
tree t2(300, 300, 50);
tree t3(500, 500, 50);
tree t4(700, 500, 50);

shrub r1(200, 200, 50);
shrub r2(400, 400, 50);

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "Trees"); //set up screen
	sf::CircleShape circle;
	sf::RectangleShape rect;
	sf::RectangleShape rect2;
	sf::RectangleShape rect3;
	sf::RectangleShape rect4;
	



	while (window.isOpen())//GAME LOOP--------------------------------
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

		}

		//render section-------------------------------
		window.clear();
		t1.draw(window);
		t2.draw(window);
		t3.draw(window);
		t4.draw(window);
		r1.draw(window);
		r2.draw(window);

		window.display(); //flip the buffer

	}//end game loop-------------------------------------------------

	return 0;
} //end main
