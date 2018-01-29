#include <iostream>
#include <allegro5/allegro.h>
#include<allegro5/allegro_font.h>
#include<allegro5/allegro_ttf.h>
using namespace std;

int main() {
	int num = 40;

	ALLEGRO_DISPLAY *gamewindow = NULL;

	al_init();
	al_init_font_addon();
	al_init_ttf_addon();
	gamewindow = al_create_display(900, 980);
	al_set_window_position(gamewindow, 200, 200);
	cout << "How old are you" << endl;
	cin >> num;
	ALLEGRO_FONT *font = al_load_ttf_font("arial.ttf", 72, 0);
	//al_draw_text(font, al_map_rgb(255, 0, 0), 50, 90, ALLEGRO_ALIGN_LEFT, ("Happy " << num << "th Birthday"));
	al_draw_textf(font, al_map_rgb(70, 20, 100), 100, 100, ALLEGRO_ALIGN_LEFT, "Happy %d Birthday", num);

	//al_clear_to_color(al_map_rgb(128, 0, 0));


	al_flip_display();//write whatever is in memory to the screen
	al_rest(100.0);//pauses game
	al_destroy_display(gamewindow);//clear memory


}
