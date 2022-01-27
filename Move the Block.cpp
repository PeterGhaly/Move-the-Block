#include<SFML/Graphics.hpp>
#include<iostream>
using namespace std;
using namespace sf;

// *function bta5od makan el mouse w 7dod el block w tshof eza kan el mouse gowa el block wala bra * (for menu buttons)

bool isSpriteHover(FloatRect sprite, Vector2f mp)
{
	if (sprite.contains(mp)) {
		return true;
	}
	return false;
}

// (new window function + back button)

void new_window(Texture background, Sprite S_background, string imgpath, int win_width, int win_hight)
{

	RenderWindow new_window(VideoMode(win_width, win_hight), " move the block GEN 27", Style::Close | Style::Resize);
	// (background insert)
	Texture back;
	Sprite S_back;
	if (!back.loadFromFile("resources/back sel.PNG"))
		cout << "could not load the image file " << endl;
	S_back.setTexture(back);
	S_back.setPosition(80, 65);

	if (!background.loadFromFile(imgpath))
		cout << "could not load the image file " << endl;
	S_background.setTexture(background);

	if (!back.loadFromFile("resources/back.png"))
		cout << "could not load the image file " << endl;
	S_back.setTexture(back);

	// **gameloop**
	while (new_window.isOpen()) {
		Event event;
		while (new_window.pollEvent(event))
		{
			switch (event.type)
			{
				// **close event**

			case  Event::Closed:
				new_window.close();


				break;

				// ** resized event**

			case Event::Resized:
				printf("new window width %i  new window height %i /n", event.size.width, event.size.height);
				break;
			}
			if (isSpriteHover(S_back.getGlobalBounds(), Vector2f(event.mouseMove.x, event.mouseMove.y)))
			{ // * function call for play button select* // b tcheck 2n el mouse gowa el block fa bb3tlo 7dodo w makan el mouse


				back.loadFromFile("resources/back sel.PNG");
			}
			else { back.loadFromFile("resources/back.PNG"); }


			if (isSpriteHover(S_back.getGlobalBounds(), Vector2f(event.mouseButton.x, event.mouseButton.y)) == true)
			{ // * function call for play button new page*

				while (Mouse::isButtonPressed(Mouse::Left))

				{

					new_window.close();

				}
			}

		}
		new_window.clear();
		new_window.draw(S_background);
		new_window.draw(S_back);
		new_window.display();
	}
}


// (menu function)

void menu()
{
main_menu:RenderWindow window(VideoMode(1250, 750), " move the block GEN 27", Style::Close | Style::Resize);


	// (background insert)

	Texture  background;
	Sprite Sbackground;
	if (!background.loadFromFile("resources/game background.jpg"))
		cout << "could not load the image file " << endl;
	Sbackground.setTexture(background);



	// (play button insert)

	Texture  b1;
	Sprite S_b1;
	if (!b1.loadFromFile("resources/play sel.PNG"))
		cout << "could not load the image file " << endl;
	S_b1.setTexture(b1);
	S_b1.setPosition(370, 300);

	// (leaderboard button insert)

	Texture  b2;
	Sprite S_b2;
	if (!b2.loadFromFile("resources/leader sel.PNG"))
		cout << "could not load the image file " << endl;
	S_b2.setTexture(b2);
	S_b2.setPosition(370, 450);

	// (credits button insert)

	Texture  b3;
	Sprite S_b3;
	if (!b3.loadFromFile("resources/cre sel.PNG"))
		cout << "could not load the image file " << endl;
	S_b3.setTexture(b3);
	S_b3.setPosition(370, 600);

	// (credits button insert)

	Texture  b4;
	Sprite S_b4;
	if (!b4.loadFromFile("resources/exit sel.PNG"))
		cout << "could not load the image file " << endl;
	S_b4.setTexture(b4);
	S_b4.setPosition(60, 550);


	//(MENU loop)

	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
				// (close event)

			case  Event::Closed:
				window.close();
				break;

				//  (resized event)

			case Event::Resized:
				printf("new window width %i  new window height %i /n", event.size.width, event.size.height);
				break;


			}

			// * ana hena ba5od makan el mouse fi victor asmo mp *

			Vector2f mp; b1;
			mp.x = sf::Mouse::getPosition(window).x;
			mp.y = sf::Mouse::getPosition(window).y;

			// ( play button animation)
			if (isSpriteHover(S_b1.getGlobalBounds(), Vector2f(event.mouseMove.x, event.mouseMove.y)))
			{
				// * function call for play button select* // b tcheck 2n el mouse gowa el block fa bb3tlo 7dodo w makan el mouse


				b1.loadFromFile("resources/play sel.PNG");
			}
			else { b1.loadFromFile("resources/play.PNG"); }


			if (isSpriteHover(S_b1.getGlobalBounds(), Vector2f(event.mouseButton.x, event.mouseButton.y)) == true)
			{
				// * function call for play button new page*

				while (Mouse::isButtonPressed(Mouse::Left))

				{

                    RenderWindow window(VideoMode(1250, 750), "Level 1", Style::Close | Style::Resize);
                    Font acmesa; acmesa.loadFromFile("Game/segoepr.ttf"); int txt = 0; String str = to_string(txt);
                    Text moves; moves.setString(str); moves.setCharacterSize(72); moves.setFillColor(Color(13, 14, 6)); moves.setFont(acmesa);
                    Sprite bg, RedB, block1, block2, block3, block4, block5, block6, reset, undo, back;
                    Texture bg_tux, RedB_tux, block1_tux, block2_tux, block3_tux, block4_tux, block5_tux, block6_tux, reset_tux, undo_tux, back_tux;
                    Vector2f mp; float x; bool reset_bt = false; const float RedB_pos_x = 426, Redb_pos_y = 404, block1_pos_x = 423.5, block1_pos_y = 297, block2_pos_x = 802, block2_pos_y = 351, block3_pos_x = 804,
                        block3_pos_y = 513.5, block4_pos_x = 588.5, block4_pos_y = 460.5, block5_pos_x = 802.5, block5_pos_y = 188, block6_pos_x = 373.5, block6_pos_y = 565.5,
                        top = 130, bottom = 675.5, left = 317, right = 962.6;
                    bg_tux.loadFromFile("Game/BG 2.png"), RedB_tux.loadFromFile("Game/RedB.png"),
                        block1_tux.loadFromFile("Game/1.png"), block2_tux.loadFromFile("Game/2.png"),
                        block3_tux.loadFromFile("Game/3.png"), block4_tux.loadFromFile("Game/4.png"),
                        block5_tux.loadFromFile("Game/5.png"), block6_tux.loadFromFile("Game/6.png"),
                        reset_tux.loadFromFile("Game/reset.png"), undo_tux.loadFromFile("Game/undo.png"), back_tux.loadFromFile("Game/Back.png");
                    bg.setTexture(bg_tux), RedB.setTexture(RedB_tux), block1.setTexture(block1_tux), block2.setTexture(block2_tux),
                        block3.setTexture(block3_tux), block4.setTexture(block4_tux), block5.setTexture(block5_tux), block6.setTexture(block6_tux),
                        reset.setTexture(reset_tux), undo.setTexture(undo_tux), back.setTexture(back_tux);
                    RedB.setOrigin(RedB.getGlobalBounds().width / 2, RedB.getGlobalBounds().height / 2);
                    block1.setOrigin(block1.getGlobalBounds().width / 2, block1.getGlobalBounds().height / 2);
                    block2.setOrigin(block2.getGlobalBounds().width / 2, block2.getGlobalBounds().height / 2);
                    block3.setOrigin(block3.getGlobalBounds().width / 2, block3.getGlobalBounds().height / 2);
                    block4.setOrigin(block4.getGlobalBounds().width / 2, block4.getGlobalBounds().height / 2);
                    block5.setOrigin(block5.getGlobalBounds().width / 2, block5.getGlobalBounds().height / 2);
                    block6.setOrigin(block6.getGlobalBounds().width / 2, block6.getGlobalBounds().height / 2);
                    reset.setOrigin(reset.getGlobalBounds().width / 2, reset.getGlobalBounds().height / 2);
                    undo.setOrigin(undo.getGlobalBounds().width / 2, undo.getGlobalBounds().height / 2);
                    back.setOrigin(back.getGlobalBounds().width / 2, back.getGlobalBounds().height / 2);
                Reset:RedB.setPosition(RedB_pos_x, Redb_pos_y); block1.setPosition(block1_pos_x, block1_pos_y); block2.setPosition(block2_pos_x, block2_pos_y); block3.setPosition(block3_pos_x, block3_pos_y);
                    block4.setPosition(block4_pos_x, block4_pos_y); block5.setPosition(block5_pos_x, block5_pos_y); block6.setPosition(block6_pos_x, block6_pos_y);
                    reset.setPosition(1106.5, 107.5); moves.setPosition(147.3, 320), undo.setPosition(1106.5, 264.5), back.setPosition(120.5, 107.5);
                    float block_1[2][7] = { { RedB.getPosition().x,block1.getPosition().x,
                    block2.getPosition().x,block3.getPosition().x,block4.getPosition().x,block5.getPosition().x,block6.getPosition().x},
                        { RedB.getPosition().y, block1.getPosition().y, block2.getPosition().y,
                    block3.getPosition().y, block4.getPosition().y, block5.getPosition().y, block6.getPosition().y} },
                        block_2[2][7] = { { RedB.getPosition().x,block1.getPosition().x,
                        block2.getPosition().x,block3.getPosition().x,block4.getPosition().x,block5.getPosition().x,block6.getPosition().x },
                       { RedB.getPosition().y, block1.getPosition().y, block2.getPosition().y,
                        block3.getPosition().y, block4.getPosition().y, block5.getPosition().y, block6.getPosition().y} };
                    bool undo_ch = true, undo_bt = false;
                    while (window.isOpen())
                    {
                        Event event;
                        while (window.pollEvent(event))
                        {
                            if (event.type == Event::Closed)
                                window.close();
                            mp.x = Mouse::getPosition(window).x;
                            mp.y = Mouse::getPosition(window).y;
                            if (RedB.getGlobalBounds().contains(mp) && Mouse::isButtonPressed(Mouse::Left)) {
                                if (Mouse::getPosition(window).x > RedB.getPosition().x) {
                                    for (int i = RedB.getPosition().x; i < Mouse::getPosition(window).x; i++) {
                                        RedB.setPosition(i, Redb_pos_y);
                                        if (RedB.getGlobalBounds().intersects(block6.getGlobalBounds()) ||
                                            RedB.getGlobalBounds().intersects(block2.getGlobalBounds()) ||
                                            RedB.getGlobalBounds().intersects(block4.getGlobalBounds()) ||
                                            RedB.getGlobalBounds().left + RedB.getGlobalBounds().width > 1141.3) {
                                            RedB.setPosition(i - 1, Redb_pos_y);
                                            break;
                                        }
                                    }
                                }
                                else if (Mouse::getPosition(window).x < RedB.getPosition().x) {
                                    for (int i = RedB.getPosition().x; i > Mouse::getPosition(window).x; i--) {
                                        RedB.setPosition(i, Redb_pos_y);
                                        if (RedB.getGlobalBounds().intersects(block6.getGlobalBounds()) ||
                                            RedB.getGlobalBounds().intersects(block2.getGlobalBounds()) ||
                                            RedB.getGlobalBounds().intersects(block4.getGlobalBounds()) ||
                                            RedB.getGlobalBounds().left < left) {
                                            RedB.setPosition(i + 1, Redb_pos_y);
                                            break;
                                        }
                                    }
                                }
                                undo_bt = false; reset_bt = false;
                            }
                            if (block1.getGlobalBounds().contains(mp)) {
                                if (Mouse::isButtonPressed(Mouse::Left)) {
                                    if (Mouse::getPosition(window).x > block1.getPosition().x) {
                                        for (int i = block1.getPosition().x; i < Mouse::getPosition(window).x; i++) {
                                            block1.setPosition(i, block1_pos_y);
                                            if (block1.getGlobalBounds().intersects(block6.getGlobalBounds()) ||
                                                block1.getGlobalBounds().intersects(block2.getGlobalBounds()) ||
                                                block1.getGlobalBounds().intersects(block4.getGlobalBounds()) ||
                                                block1.getGlobalBounds().left + block1.getGlobalBounds().width > right) {
                                                block1.setPosition(i - 1, block1_pos_y);
                                                break;
                                            }
                                        }
                                    }
                                    else if (Mouse::getPosition(window).x < block1.getPosition().x) {
                                        for (int i = block1.getPosition().x; i > Mouse::getPosition(window).x; i--) {
                                            block1.setPosition(i, block1_pos_y);
                                            if (block1.getGlobalBounds().intersects(block6.getGlobalBounds()) ||
                                                block1.getGlobalBounds().intersects(block2.getGlobalBounds()) ||
                                                block1.getGlobalBounds().intersects(block4.getGlobalBounds()) ||
                                                block1.getGlobalBounds().left < left) {
                                                block1.setPosition(i + 1, block1_pos_y);
                                                break;
                                            }
                                        }
                                    }
                                }
                                undo_bt = false; reset_bt = false;
                            }
                            if (block2.getGlobalBounds().contains(mp)) {
                                if (Mouse::isButtonPressed(Mouse::Left)) {
                                    if (Mouse::getPosition(window).y > block2.getPosition().y) {
                                        for (int i = block2.getPosition().y; i < Mouse::getPosition(window).y; i++) {
                                            block2.setPosition(block2_pos_x, i);
                                            if (block2.getGlobalBounds().intersects(block1.getGlobalBounds()) ||
                                                block2.getGlobalBounds().intersects(block3.getGlobalBounds()) ||
                                                block2.getGlobalBounds().intersects(RedB.getGlobalBounds()) ||
                                                block2.getGlobalBounds().intersects(block5.getGlobalBounds()) ||
                                                block2.getGlobalBounds().top + block2.getGlobalBounds().height > bottom) {
                                                block2.setPosition(block2_pos_x, i - 1);
                                                break;
                                            }
                                        }
                                    }
                                    else if (Mouse::getPosition(window).y < block2.getPosition().y) {
                                        for (int i = block2.getPosition().y; i > Mouse::getPosition(window).y; i--) {
                                            block2.setPosition(block2_pos_x, i);
                                            if (block2.getGlobalBounds().intersects(block1.getGlobalBounds()) ||
                                                block2.getGlobalBounds().intersects(block3.getGlobalBounds()) ||
                                                block2.getGlobalBounds().intersects(RedB.getGlobalBounds()) ||
                                                block2.getGlobalBounds().intersects(block5.getGlobalBounds()) ||
                                                block2.getGlobalBounds().top < top) {
                                                block2.setPosition(block2_pos_x, i + 1);
                                                break;
                                            }
                                        }
                                    }
                                }
                                undo_bt = false; reset_bt = false;
                            }if (block3.getGlobalBounds().contains(mp)) {
                                if (Mouse::isButtonPressed(Mouse::Left)) {
                                    if (Mouse::getPosition(window).x > block3.getPosition().x) {
                                        for (int i = block3.getPosition().x; i < Mouse::getPosition(window).x; i++) {
                                            block3.setPosition(i, block3_pos_y);
                                            if (block3.getGlobalBounds().intersects(block4.getGlobalBounds()) ||
                                                block3.getGlobalBounds().intersects(block6.getGlobalBounds()) ||
                                                block3.getGlobalBounds().intersects(block2.getGlobalBounds()) ||
                                                block3.getGlobalBounds().left + block3.getGlobalBounds().width > right) {
                                                block3.setPosition(i - 1, block3_pos_y);
                                                break;
                                            }
                                        }
                                    }
                                    else if (Mouse::getPosition(window).x < block3.getPosition().x) {
                                        for (int i = block3.getPosition().x; i > Mouse::getPosition(window).x; i--) {
                                            block3.setPosition(i, block3_pos_y);
                                            if (block3.getGlobalBounds().intersects(block4.getGlobalBounds()) ||
                                                block3.getGlobalBounds().intersects(block6.getGlobalBounds()) ||
                                                block3.getGlobalBounds().intersects(block2.getGlobalBounds()) ||
                                                block3.getGlobalBounds().left < left) {
                                                block3.setPosition(i + 1, block3_pos_y);
                                                break;
                                            }
                                        }
                                    }

                                }
                                undo_bt = false; reset_bt = false;
                            }if (block4.getGlobalBounds().contains(mp))
                            {
                                if (Mouse::isButtonPressed(Mouse::Left)) {
                                    if (Mouse::getPosition(window).y > block4.getPosition().y) {
                                        for (int i = block4.getPosition().y; i < Mouse::getPosition(window).y; i++) {
                                            block4.setPosition(block4_pos_x, i);
                                            if (block4.getGlobalBounds().intersects(RedB.getGlobalBounds()) ||
                                                block4.getGlobalBounds().intersects(block1.getGlobalBounds()) ||
                                                block4.getGlobalBounds().intersects(block3.getGlobalBounds()) ||
                                                block4.getGlobalBounds().intersects(block5.getGlobalBounds()) ||
                                                block4.getGlobalBounds().top + block4.getGlobalBounds().height > bottom) {
                                                block4.setPosition(block4_pos_x, i - 1);
                                                break;
                                            }
                                        }
                                    }
                                    else if (Mouse::getPosition(window).y < block4.getPosition().x) {
                                        for (int i = block4.getPosition().y; i > Mouse::getPosition(window).y; i--) {
                                            block4.setPosition(block4_pos_x, i);
                                            if (block4.getGlobalBounds().intersects(RedB.getGlobalBounds()) ||
                                                block4.getGlobalBounds().intersects(block1.getGlobalBounds()) ||
                                                block4.getGlobalBounds().intersects(block3.getGlobalBounds()) ||
                                                block4.getGlobalBounds().intersects(block5.getGlobalBounds()) ||
                                                block4.getGlobalBounds().top < top) {
                                                block4.setPosition(block4_pos_x, i + 1);
                                                break;
                                            }
                                        }
                                    }
                                }
                                undo_bt = false; reset_bt = false;
                            }if (block5.getGlobalBounds().contains(mp))
                            {
                                if (Mouse::isButtonPressed(Mouse::Left)) {
                                    if (Mouse::getPosition(window).x > block5.getPosition().x) {
                                        for (int i = block5.getPosition().x; i < Mouse::getPosition(window).x; i++) {
                                            block5.setPosition(i, block5_pos_y);
                                            if (block5.getGlobalBounds().intersects(block6.getGlobalBounds()) ||
                                                block5.getGlobalBounds().intersects(block2.getGlobalBounds()) ||
                                                block5.getGlobalBounds().intersects(block4.getGlobalBounds()) ||
                                                block5.getGlobalBounds().left + block5.getGlobalBounds().width > right) {
                                                block5.setPosition(i - 1, block5_pos_y);
                                                break;
                                            }
                                        }
                                    }
                                    else if (Mouse::getPosition(window).x < block5.getPosition().x) {
                                        for (int i = block5.getPosition().x; i > Mouse::getPosition(window).x; i--) {
                                            block5.setPosition(i, block5_pos_y);
                                            if (block5.getGlobalBounds().intersects(block6.getGlobalBounds()) ||
                                                block5.getGlobalBounds().intersects(block2.getGlobalBounds()) ||
                                                block5.getGlobalBounds().intersects(block4.getGlobalBounds()) ||
                                                block5.getGlobalBounds().left < left) {
                                                block5.setPosition(i + 1, block5_pos_y);
                                                break;
                                            }
                                        }
                                    }

                                }
                                undo_bt = false; reset_bt = false;
                            }if (block6.getGlobalBounds().contains(mp))
                            {
                                if (Mouse::isButtonPressed(Mouse::Left)) {
                                    if (Mouse::getPosition(window).y > block6.getPosition().y) {
                                        for (int i = block6.getPosition().y; i < Mouse::getPosition(window).y; i++) {
                                            block6.setPosition(block6_pos_x, i);
                                            if (block6.getGlobalBounds().intersects(RedB.getGlobalBounds()) ||
                                                block6.getGlobalBounds().intersects(block1.getGlobalBounds()) ||
                                                block6.getGlobalBounds().intersects(block3.getGlobalBounds()) ||
                                                block6.getGlobalBounds().intersects(block5.getGlobalBounds()) ||
                                                block6.getGlobalBounds().top + block6.getGlobalBounds().height > bottom) {
                                                block6.setPosition(block6_pos_x, i - 1);
                                                break;
                                            }
                                        }
                                    }
                                    else if (Mouse::getPosition(window).y < block6.getPosition().x) {
                                        for (int i = block6.getPosition().y; i > Mouse::getPosition(window).y; i--) {
                                            block6.setPosition(block6_pos_x, i);
                                            if (block6.getGlobalBounds().intersects(RedB.getGlobalBounds()) ||
                                                block6.getGlobalBounds().intersects(block1.getGlobalBounds()) ||
                                                block6.getGlobalBounds().intersects(block3.getGlobalBounds()) ||
                                                block6.getGlobalBounds().intersects(block5.getGlobalBounds()) ||
                                                block6.getGlobalBounds().top < top) {
                                                block6.setPosition(block6_pos_x, i + 1);
                                                break;
                                            }
                                        }
                                    }

                                }
                                undo_bt = false; reset_bt = false;
                            }
                            if (event.type == Event::MouseButtonReleased && !reset_bt && !undo_bt) {
                                txt++; str = to_string(txt); moves.setString(str);
                                if (undo_ch) {
                                    block_1[0][0] = RedB.getPosition().x;
                                    block_1[1][0] = RedB.getPosition().y;
                                    block_1[0][1] = block1.getPosition().x;
                                    block_1[1][1] = block1.getPosition().y;
                                    block_1[0][2] = block2.getPosition().x;
                                    block_1[1][2] = block2.getPosition().y;
                                    block_1[0][3] = block3.getPosition().x;
                                    block_1[1][3] = block3.getPosition().y;
                                    block_1[0][4] = block4.getPosition().x;
                                    block_1[1][4] = block4.getPosition().y;
                                    block_1[0][5] = block5.getPosition().x;
                                    block_1[1][5] = block5.getPosition().y;
                                    block_1[0][6] = block6.getPosition().x;
                                    block_1[1][6] = block6.getPosition().y;
                                    undo_ch = false;
                                }
                                else
                                {
                                    block_2[0][0] = RedB.getPosition().x;
                                    block_2[1][0] = RedB.getPosition().y;
                                    block_2[0][1] = block1.getPosition().x;
                                    block_2[1][1] = block1.getPosition().y;
                                    block_2[0][2] = block2.getPosition().x;
                                    block_2[1][2] = block2.getPosition().y;
                                    block_2[0][3] = block3.getPosition().x;
                                    block_2[1][3] = block3.getPosition().y;
                                    block_2[0][4] = block4.getPosition().x;
                                    block_2[1][4] = block4.getPosition().y;
                                    block_2[0][5] = block5.getPosition().x;
                                    block_2[1][5] = block5.getPosition().y;
                                    block_2[0][6] = block6.getPosition().x;
                                    block_2[1][6] = block6.getPosition().y;
                                    undo_ch = true;
                                }
                            }
                            if (RedB.getPosition().x >= 1032.5) {
                                cout << "you won";
                            }
                            if (back.getGlobalBounds().contains(mp)) {
                                if (Mouse::isButtonPressed(Mouse::Left)) {
                                    //Back Function 
                                }
                            }
                            if (reset.getGlobalBounds().contains(mp))
                            {
                                if (Mouse::isButtonPressed(Mouse::Left)) {
                                    txt = 0; str = to_string(txt); moves.setString(str); reset_bt = true;
                                    goto Reset;

                                }
                            }
                            if (undo.getGlobalBounds().contains(mp) && Mouse::isButtonPressed(Mouse::Left)) {
                                if (undo_ch) {
                                    RedB.setPosition(block_1[0][0], block_1[1][0]);
                                    block1.setPosition(block_1[0][1], block_1[1][1]);
                                    block2.setPosition(block_1[0][2], block_1[1][2]);
                                    block3.setPosition(block_1[0][3], block_1[1][3]);
                                    block4.setPosition(block_1[0][4], block_1[1][4]);
                                    block5.setPosition(block_1[0][5], block_1[1][5]);
                                    block6.setPosition(block_1[0][6], block_1[1][6]);
                                    txt--; str = to_string(txt); moves.setString(str);
                                }
                                else {
                                    RedB.setPosition(block_2[0][0], block_2[1][0]);
                                    block1.setPosition(block_2[0][1], block_2[1][1]);
                                    block2.setPosition(block_2[0][2], block_2[1][2]);
                                    block3.setPosition(block_2[0][3], block_2[1][3]);
                                    block4.setPosition(block_2[0][4], block_2[1][4]);
                                    block5.setPosition(block_2[0][5], block_2[1][5]);
                                    block6.setPosition(block_2[0][6], block_2[1][6]);
                                    txt--; str = to_string(txt); moves.setString(str);
                                }
                                undo_bt = true;
                            }
                        }
                        if (txt < 0)
                            txt = 0;

                        window.clear();
                        window.draw(bg); window.draw(RedB); window.draw(block1); window.draw(block2); window.draw(block3); window.draw(block4);
                        window.draw(block5); window.draw(block6); window.draw(reset); window.draw(moves); window.draw(undo); window.draw(back);
                        window.display();
                    }


				}
			}


			// (leaderboard button animation)



			if (isSpriteHover(S_b2.getGlobalBounds(), Vector2f(event.mouseMove.x, event.mouseMove.y)))
			{ // * function call for leaderboard button select* // b tcheck 2n el mouse gowa el block fa bb3tlo 7dodo w makan el mouse


				b2.loadFromFile("resources/leader sel.PNG");
			}
			else { b2.loadFromFile("resources/leader.PNG"); }


			if (isSpriteHover(S_b2.getGlobalBounds(), Vector2f(event.mouseButton.x, event.mouseButton.y)) == true)
			{ // * function call for leaderboard button new page*

				while (Mouse::isButtonPressed(Mouse::Left))

				{

					//play_window();

				}
			}

			// (credits button animation)



			if (isSpriteHover(S_b3.getGlobalBounds(), Vector2f(event.mouseMove.x, event.mouseMove.y)))
			{ // * function call for creits button select* // b tcheck 2n el mouse gowa el block fa bb3tlo 7dodo w makan el mouse


				b3.loadFromFile("resources/cre sel.PNG");
			}
			else { b3.loadFromFile("resources/cre.PNG"); }


			if (isSpriteHover(S_b3.getGlobalBounds(), Vector2f(event.mouseButton.x, event.mouseButton.y)) == true)
			{ // * function call for creidts button new page*

				while (Mouse::isButtonPressed(Mouse::Left))

				{
					Texture credits;
					Sprite scredits;
					window.close();
					new_window(credits, scredits, "resources/credit background.jpg", 1250, 750);
					goto main_menu;
				}
			}
			// (exit button animation)



			if (isSpriteHover(S_b4.getGlobalBounds(), Vector2f(event.mouseMove.x, event.mouseMove.y)))
			{ // * function call for play button select* // b tcheck 2n el mouse gowa el block fa bb3tlo 7dodo w makan el mouse


				b4.loadFromFile("resources/exit sel.PNG");
			}
			else { b4.loadFromFile("resources/exit.PNG"); }


			if (isSpriteHover(S_b4.getGlobalBounds(), Vector2f(event.mouseButton.x, event.mouseButton.y)) == true)
			{ // * function call for play button new page*

				while (Mouse::isButtonPressed(Mouse::Left))

				{

					window.close();

				}
			}
		}

		window.clear();

		window.draw(Sbackground);
		window.draw(S_b1);
		window.draw(S_b2);
		window.draw(S_b3);
		window.draw(S_b4);


		window.display();

	}
}



// (main function)


int main()
{
	menu();

	return 0;
}