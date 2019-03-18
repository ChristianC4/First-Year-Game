#include <iostream>
#include "windows.h"
#include <ctime>
#include "time.h"
#include <fstream>
#include <string>
#include <MMSystem.h>
#include <conio.h>
#include <vector>
#include "fmod.h"
#include "SoundSystem.h"
#define FOREGROUND_YELLOW 0x000E
#define FOREGROUND_WHITE 0x000F

//#pragma comment(lib, "fmod_vc.lib")

using namespace std;
/////////////////////////////////level 1 easy
char Emap1[20][79] = { //[y][x] // castle's health # 58 
	" _____________________________________________________________________",
	"|                                                                    |",
	"|                                                                    |",
	"|                                                                    |",
	"| # # # # #                                                   ###    |",
	"| #########                                                   ## #   |",
	"| #  # #  #                                                   ##  #  |",
	"| #########                                                   ##   # |",
	"|  #     #                                                    ##    #|",
	"|  #     #                                                    #######|",
	"| # #   # # @                                  &              ##     |",
	"| #       #                                      ####################|",
	"| #       #                                      #   ###      ###   #|",
	"| #       #                                       #  # #      # #  # |",
	"| #       #                                        # ###      ### #  |",
	"| #  ###  #                                         ##############   |",
	"| #  ###  #                                                          |",
	"| #########                                                          |",
	"|                                                                    |",
	"______________________________________________________________________",
};//creates the map of characters 

void Emove1();//creates the enemies movement as well as the shooting of the troops

string EupdateHealth1();//updates the health for the human castle

string Hhuman1();//updates the health for the human commander

void EmapUpdate1();//prints the map of characters with all castle components

string EupdateHealth();//updates the health for the enemy castle

void EenemyMove1();//creates the movements and shooting for the enemy character

int EhumanHealth1 = 20;//creates the health for the human commander

int Ehumancastlehealth1 = 25;//creates the health for the human castle

int Enemycastlehealth1 = 20;//creates the enemy castle health 

int easybullets1 = 10;//creates the troop amount that is allowed to be shot

/////////////////////////////////////////// level 2 easy
char Emap2[20][69] = {
	" ___________________________________________________________________",
	"|                                                                  |",
	"|                                                                  |",
	"|# # # # #                                                 #       |",
	"|#########                                                ###      |",
	"|#  # #  #                                               # # #     |",
	"|#########                                               # # #     |",
	"| #     #                                               #######    |",
	"| #     #                                              # #   # #   |",
	"|# #   # #                                            #  #   #  #  |",
	"|#       # @                                      &  #   #   #   # |",
	"|#       #                                          #   #######   #|",
	"|#       #                                            ###     ###  |",
	"|#       #                                           #  #     #  # |",
	"|#  ###  #                                          #  #########  #|",
	"|#  ###  #                                             #       #   |",
	"|#########                                             #       #   |",
	"|                                                      #########   |",
	"|                                                                  |",
	"____________________________________________________________________",
};

void EenemyMove2();

string Enemyhealth2();

string Playerhealth2();

string Hhuman2();

void EmapUpdate2();

void Emove2();

int Eenemycastlehealth2 = 22;//20

int Ehumancastlehealth2 = 25;

int easybullets2 = 10;

int EhumanHealth2 = 20;
/////////////////////////////////////easy level 3
void Emove3();

void EmapUpdate3();

string Enemyhealth3();

string Humanhealth3();

string Hhuman3();

void EenemyMove3();

void easywallMove3();

char Emap3[20][70] = {
	" ____________________________________________________________________",
	"|                                                                   |",
	"|                                                                   |",
	"|# # # # #                                                   #      |",
	"|#########                                                  ###     |",
	"|#  # #  #                        l                        #  /#    |",
	"|#########                        l                       #  / /#   |",
	"| #     #                         l                      #  / /  #  |",
	"| #     #                         l                     #  / /   /# |",
	"|# #   # #                        l                    #  / /   / /#|",
	"|#       # @                      l                  & # / /   / / #|",
	"|#       #                        l                    #/ /   / /  #|",
	"|#       #                        l                    # /   / /   #|",
	"|#       #                        l                    #### / /    #|",
	"|#  ###  #                                              ###/ /    # |",
	"|#  ###  #                                               #########  |",
	"|#########                                                          |",
	"|                                                                   |",
	"|                                                                   |",
	"_____________________________________________________________________",

};

int easybullets3 = 10;

int Eenemycastlehealth3 = 24;//20

int Ehumancastlehealth3 = 21;

int EhumanHealth3 = 20;
/////////////////////////////////////hard level 1
char Hmap1[20][70] = {
	" ____________________________________________________________________",
	"|                                                                   |",
	"|                                                                   |",
	"|# # # # #                                               #  # # #  #|",
	"|#########                                                # # # # # |",
	"|#  # #  #                        l                       ######### |",
	"|#########                        l                       #  # #  # |",
	"| #     #                         l                       ######### |",
	"| #     #                         l                        # # # #  |",
	"|# #   # #                        l                        ##   ##  |",
	"|#       # @                      l                    &   #  #  #  |",
	"|#       #                        l                       #  # #  # |",
	"|#       #                        l                       #   #   # |",
	"|#       #                        l                       #  ###  # |",
	"|#  ###  #                                                #  ###  # |",
	"|#  ###  #                                                ######### |",
	"|#########                                                          |",
	"|                                                                   |",
	"|                                                                   |",
	"_____________________________________________________________________",
};

string Enemyhealth4();

string Humanhealth4();

string Hhuman4();

void Hmove1();

void HwallMove1();

void HmapUpdate1();

void HenemyMove1();

int Hhumancastlehealth1 = 20;

int Henemycastlehealth1 = 26;

int hardbullets1 = 10;

int Hhumanhealth1 = 20;

////////////////////////////////////hard level 2
char Hmap2[20][70] = {
	" ____________________________________________________________________",
	"|                                                                   |",
	"|                                                                   |",
	"|# # # # #                                            #            #|",
	"|#########                                            ##############|",
	"|#  # #  #                        l                    # #      # # |",
	"|#########                        l                     # #    # #  |",
	"| #     #                         l                      # #### #   |",
	"| #     #                         l                      #  ##  #   |",
	"|# #   # #                        l                      #  ##  #   |",
	"|#       # @                      l                  &    # ## #    |",
	"|#       #                        l                        #  #     |",
	"|#       #                        l                         ##      |",
	"|#       #                        l                         ##      |",
	"|#  ###  #                                                  ##      |",
	"|#  ###  #                                               ########   |",
	"|#########                                                          |",
	"|                                                                   |",
	"|                                                                   |",
	"_____________________________________________________________________",

};

void Hmove2();

string Enemyhealth5();

string Humanhealth5();

string Hhuman5();

void HmapUpdate2();

void HenemyMove2();

void hardwallMove2();

int hardbullets2 = 10;

int Henemycastlehealth2 = 28;

int Hhumancastlehealth2 = 20;

int Hhumanhealth2 = 20;
/////////////////////////////////////

bool gameOver = false;

bool level1 = false;

bool level2 = false;

bool level3 = false;

bool level4 = false;

bool level5 = false;

char playAgain;

const int speed = 5;

int rNum = 0;

int enemyHealth = 100000;

int seconds = 0;

int bulletRegen;

void game_over();

bool Timer();

bool ShootingTimer1();

bool ShootingTimer2();

bool ShootingTimer3();

bool ShootingTimer4();

bool ShootingTimer5();

void winScreen();

void titlescreen(vector<string> *s);

void gameoverscreen(vector<string> *s);

vector<string> gameover_screen;

vector<string> title;

void pause_menu(bool pause);

SoundSystemClass sound;
M_Sound soundSample;

SoundSystemClass soundend;
M_Sound soundSampleend;


int main() {
	sound.createSound(&soundSample.sound, "./TitleScreen.wav");
	sound.playSound(soundSample, true);
	int start;
	int menu;
	int goBack;
	srand(time(NULL));

	system("color 0d");
	

		titlescreen(&title);
		for (unsigned int i = 0; i < title.size(); i++)	//print titlescreen
		{
			cout << title[i] << endl;
		}

		cout << endl;

		cout << endl;
	check:
		cin >> start;
		if (start == 2) {

			system("cls");
			std::ifstream   file("instructions.txt");//reads the instructions txt file


			std::string  paragraph;
			while (std::getline(file, paragraph))
			{
				// Print the line
				std::cout << paragraph << endl;//prints the instructions 
			}
			cout << endl;
			cout << "Please enter 1 to go back to the main screen" << endl;
			cin >> goBack;
			if (goBack == 1) {
				system("cls");
				for (unsigned int i = 0; i < title.size(); i++)	//print titlescreen
				{
					cout << title[i] << endl;
				}

				goto check;

			}
		}
		
		if (start == 1) {
			sound.SetPause(soundSample, true);//pauses the sound 
			system("cls");
			sound.createSound(&soundSample.sound, "./speed.wav");//plays pirate music
			sound.playSound(soundSample, true);
			while (level1 == false)//level 1 easy
			{
				system("cls");
				EmapUpdate1();
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
				cout << "\t\t\t\t\tEnemy HP " << EupdateHealth1() << endl;//prints enemy castle HP
				SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				cout << "Player HP " << EupdateHealth() << endl;// prints players castle HP
				cout << endl;
				Emove1();
				cout << endl;
				cout << "Commander HP " << Hhuman1() << endl;//prints the @ health
				Timer();
				EenemyMove1();

				if (Enemycastlehealth1 == 0) {//checks to see if the enemy castle has been destroyed if so move to next level
					sound.SetPause(soundSample, true);
					system("cls");
					cout << "You have destroyed the enemy castle" << endl;
					cout << "\n\n  ] \n  ]                         # # # # #\n" "                            #########\n" "                            #  # #  #\n" "                            #########\n" "                             #     #\n" "                             #     #\n" "                            # #   # #\n" "                            #       #\n" "                            #       #\n" "                            #  ###  #\n" "                            #  ###  #\n" "                            #########\n";
					Sleep(2000);
					system("cls");
					cout << "\n\n  ) ] \n  ) ]                    # # # # #\n" "                         #########\n" "                         #  # #  #\n" "                         #########\n" "                          #     #\n" "                          #     #\n" "                         # #   # #\n" "                         #       #\n" "                         #       #\n" "                         #  ###  #\n" "                         #  ###  #\n" "                         #########\n";
					Sleep(2000);
					system("cls");
					cout << "\n\n 0 ) ] \n 0 ) ]""              # # # # #\n" "                    #########\n" "                    #  # #  #\n" "                    #########\n" "                     #     #\n" "                     #     #\n" "                    # #   # #\n" "                    #       #\n" "                    #       #\n" "                    #  ###  #\n" "                    #  ###  #\n" "                    #########\n";
					Sleep(2000);
					system("cls");
					level1 = true;
				}

				else if (EhumanHealth1 == 0) {//when the @ dies the gameover screen appears
					gameOver = true;
					if (gameOver == true) {//checks to see if the game has ended
						game_over();
						break;
					}
					break;
				}

				else if (Ehumancastlehealth1 == 0) {//checks if the human castle health has hit 0 and end the game
					sound.SetPause(soundSample, true);
					cout << "The enemy has destroyed your castle you lose" << endl;
					gameOver = true;
					system("cls");
					if (gameOver == true) {
						game_over();
						cout << "To go back to the main menu please press 1" << endl;
						cin >> menu;
						if (menu == 1) {
							system("cls");
							system("color 0d");
							std::ifstream   file("Title Screen.txt");
							std::string  paragraph;
							while (std::getline(file, paragraph))
							{
								// Print the line
								std::cout << paragraph << endl;
							}
						}
						break;
					}
				}
				
			}
			if (level1 == true) {
				sound.createSound(&soundSample.sound, "./Japan.wav");
				sound.playSound(soundSample, true);
				while (level2 == false) {//easy level 2
					system("cls");
					EmapUpdate2();
					HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "\t\t\t\t\tEnemy HP " << Enemyhealth2() << endl;
					SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					cout << "Player HP " << Playerhealth2() << endl;
					cout << endl;
					Emove2();
					cout << endl;
					cout << "Commander HP " << Hhuman2() << endl;
					EenemyMove2();
					Timer();

					if (Eenemycastlehealth2 == 0) {
						sound.SetPause(soundSample, true);
						system("cls");
						cout << "You have destroyed the enemy castle" << endl;
						cout << "\n\n  ] \n  ]                            # # # # #\n" "                               #########\n" "                               #  # #  #\n" "                               #########\n" "                                #     #\n" "                                #     #\n" "                               # #   # #\n" "                               #       #\n" "                               #       #\n" "                               #  ###  #\n" "                               #  ###  #\n" "                               #########\n";
						Sleep(2000);
						system("cls");
						cout << "\n\n  ) ] \n  ) ]                         # # # # #\n" "                              #########\n" "                              #  # #  #\n" "                              #########\n" "                               #     #\n" "                               #     #\n" "                              # #   # #\n" "                              #       #\n" "                              #       #\n" "                              #  ###  #\n" "                              #  ###  #\n" "                              #########\n";
						Sleep(2000);
						system("cls");
						cout << "\n\n 0 ) ] \n 0 ) ]""                       # # # # #\n" "                             #########\n" "                             #  # #  #\n" "                             #########\n" "                              #     #\n" "                              #     #\n" "                             # #   # #\n" "                             #       #\n" "                             #       #\n" "                             #  ###  #\n" "                             #  ###  #\n" "                             #########\n";
						Sleep(2000);
						system("cls");
						level2 = true;
					}

					else if (EhumanHealth2 == 0) {
						gameOver = true;
						if (gameOver == true) {
							game_over();
							break;
						}
						break;
					}

					else if (Ehumancastlehealth2 == 0) {
						system("cls");
						cout << "Your castle has been destroyed" << endl;
						gameOver = true;
						if (gameOver == true) {
							game_over();
							cout << "To go back to the main menu please press 1" << endl;
							cin >> menu;
							if (menu == 1) {
								system("cls");
								system("color 0d");
								std::ifstream   file("Title Screen.txt");
								std::string  paragraph;
								while (std::getline(file, paragraph))
								{
									// Print the line
									std::cout << paragraph << endl;
								}
							}
						}
						break;
					}
				}//end of easy level 2
			}
			if (level2 == true) {
				sound.createSound(&soundSample.sound, "./Russia.wav");
				sound.playSound(soundSample, true);
				while (level3 == false) {//easy level 3
					system("cls");
					EmapUpdate3();
					HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "\t\t\t\t\tEnemy HP " << Enemyhealth3() << endl;
					SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					cout << "Player HP " << Humanhealth3() << endl;
					cout << endl;
					Emove3();
					cout << endl;
					cout << "Commander HP " << Hhuman3() << endl;
				
					EenemyMove3();
					Timer();
					easywallMove3();
					

					if (Eenemycastlehealth3 == 0) {
						sound.SetPause(soundSample, true);
						system("cls");
						cout << "You have destroyed the enemy castle" << endl;
						cout << "\n\n  ] \n  ]                            # # # # #\n" "                               #########\n" "                               #  # #  #\n" "                               #########\n" "                                #     #\n" "                                #     #\n" "                               # #   # #\n" "                               #       #\n" "                               #       #\n" "                               #  ###  #\n" "                               #  ###  #\n" "                               #########\n";
						Sleep(2000);
						system("cls");
						cout << "\n\n  ) ] \n  ) ]                         # # # # #\n" "                              #########\n" "                              #  # #  #\n" "                              #########\n" "                               #     #\n" "                               #     #\n" "                              # #   # #\n" "                              #       #\n" "                              #       #\n" "                              #  ###  #\n" "                              #  ###  #\n" "                              #########\n";
						Sleep(2000);
						system("cls");
						cout << "\n\n 0 ) ] \n 0 ) ]""                       # # # # #\n" "                             #########\n" "                             #  # #  #\n" "                             #########\n" "                              #     #\n" "                              #     #\n" "                             # #   # #\n" "                             #       #\n" "                             #       #\n" "                             #  ###  #\n" "                             #  ###  #\n" "                             #########\n";
						Sleep(2000);
						system("cls");
						level3 = true;
					}

					else if (EhumanHealth3 == 0) {
						gameOver = true;
						if (gameOver == true) {
							game_over();
							break;
						}
						break;
					}

					else if (Ehumancastlehealth3 == 0) {
						sound.SetPause(soundSample, true);
						system("cls");
						cout << "Your castle has been destroyed" << endl;
						gameOver = true;
						if (gameOver == true) {
							game_over();
							cout << "To go back to the main menu please press 1" << endl;
							cin >> menu;
							if (menu == 1) {
								system("cls");
								system("color 0d");
								std::ifstream   file("Title Screen.txt");
								std::string  paragraph;
								while (std::getline(file, paragraph))
								{
									// Print the line
									std::cout << paragraph << endl;
								}
							}
						}
						break;
					}
				}//end of easy level 3
			}
			//hardLevel1:
			if (level3 == true) {
				sound.createSound(&soundSample.sound, "./ScotchGood.wav");
				sound.playSound(soundSample, true);
				while (level4 == false) {//start of hard level 1
					system("cls");
					HmapUpdate1();
					HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "\t\t\t\t\tEnemy HP " << Enemyhealth4() << endl;
					SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					cout << "Player HP " << Humanhealth4() << endl;
					cout << endl;
					Hmove1();
					cout << endl;
					cout << "Commander HP " << Hhuman4() << endl;
					HenemyMove1();
					HwallMove1();
					Timer();
					
					
					 if (Henemycastlehealth1 == 0) {
						sound.SetPause(soundSample, true);
						system("cls");
						cout << "You have destroyed the enemy castle" << endl;
						cout << "\n\n  ] \n  ]                            # # # # #\n" "                               #########\n" "                               #  # #  #\n" "                               #########\n" "                                #     #\n" "                                #     #\n" "                               # #   # #\n" "                               #       #\n" "                               #       #\n" "                               #  ###  #\n" "                               #  ###  #\n" "                               #########\n";
						Sleep(2000);
						system("cls");
						cout << "\n\n  ) ] \n  ) ]                         # # # # #\n" "                              #########\n" "                              #  # #  #\n" "                              #########\n" "                               #     #\n" "                               #     #\n" "                              # #   # #\n" "                              #       #\n" "                              #       #\n" "                              #  ###  #\n" "                              #  ###  #\n" "                              #########\n";
						Sleep(2000);
						system("cls");
						cout << "\n\n 0 ) ] \n 0 ) ]""                       # # # # #\n" "                             #########\n" "                             #  # #  #\n" "                             #########\n" "                              #     #\n" "                              #     #\n" "                             # #   # #\n" "                             #       #\n" "                             #       #\n" "                             #  ###  #\n" "                             #  ###  #\n" "                             #########\n";
						Sleep(2000);
						system("cls");
						level4 = true;
					}

					 else if (EhumanHealth3 == 0) {
						 gameOver = true;
						 if (gameOver == true) {
							 game_over();
							 break;
						 }
						 break;
					 }

					else if (Hhumancastlehealth1 == 0) {
						sound.SetPause(soundSample, true);
						system("cls");
						cout << "Your castle has been destroyed" << endl;
						gameOver = true;
						if (gameOver == true) {
							game_over();
							cout << "To go back to the main menu please press 1" << endl;
							cin >> menu;
							if (menu == 1) {
								system("cls");
								system("color 0d");
								std::ifstream   file("Title Screen.txt");
								std::string  paragraph;
								while (std::getline(file, paragraph))
								{
									// Print the line
									std::cout << paragraph << endl;
								}
							}
						}
						break;
					}
				}//end of hard level 1
			}
			if (level4 == true) {
				sound.createSound(&soundSample.sound, "./neecS eltiT(FINAL_BOSS).wav");
				sound.playSound(soundSample, true);
				while (level5 == false) {//start of hard level 2
					system("cls");
					HmapUpdate2();
					HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "\t\t\t\t\tEnemy HP " << Enemyhealth5() << endl;
					SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					cout << "Player HP " << Humanhealth5() << endl;
					Hmove2();
					cout << "Human HP " << Hhuman5() << endl;
					HenemyMove2();
					hardwallMove2();
					Timer();
					 if (Henemycastlehealth2 == 0) {
						sound.SetPause(soundSample, true);
						system("cls");
						cout << "You have destroyed the enemy castle" << endl;
						level5 = true;
						gameOver = true;
						if (gameOver == true) {
							winScreen();
							cout << "Please enter 1 to go back to the main screen" << endl;
							cin >> menu;
							if (menu == 1) {
								system("cls");
								system("color 0d");
								std::ifstream   file("Title Screen.txt");
								std::string  paragraph;
								while (std::getline(file, paragraph))
								{
									// Print the line
									std::cout << paragraph << endl;
								}
							}
						}
						break;
					}

					 else if (Hhumanhealth2 == 0) {
						 gameOver = true;
						 if (gameOver == true) {
							 game_over();
							 break;
						 }
						 break;
					 }

					else if (Hhumancastlehealth2 == 0) {
						sound.SetPause(soundSample, true);
						system("cls");
						cout << "Your castle has been destroyed" << endl;
						gameOver = true;
						if (gameOver == true) {
							game_over();
							cout << "To go back to the main menu please press 1" << endl;
							cin >> menu;
							if (menu == 1) {
								system("cls");
								system("color 0d");
								std::ifstream   file("Title Screen.txt");
								std::string  paragraph;
								while (std::getline(file, paragraph))
								{
									// Print the line
									std::cout << paragraph << endl;
								}
							}
						}
						break;
					}
				}//end of hard level 2
			}
		}
		else {
			std::exit;
		}
		
	
	system("PAUSE");
}
///////////////////////////////////////////easy level 1 
void EmapUpdate1() {
	cout << "LEVEL 1" << endl;
	for (int y = 0; y < 20; y++) {
		cout << Emap1[y] << endl;//prints the map 
	}

	cout << endl;
	cout << endl;
	cout << endl;
}

void Emove1() {

	if (Timer()) {
		easybullets1 = easybullets1 + 1;
		
	}

	bool pause = false;

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
	SetConsoleTextAttribute(h, FOREGROUND_YELLOW | FOREGROUND_INTENSITY);// sets the current bullet amount text to red
	cout << "Current bullet amount: " << easybullets1 << endl;
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	for (int y = 0; y < 20; y++) {//loops to check the bounds of the map in the y direction
		for (int x = 0; x < 69; x++) {//loops to check the bounds of the map in the x direction

			switch (Emap1[y][x]) {//creates a switch for the entire map 
			case '@'://

				if (GetAsyncKeyState(VK_ESCAPE) != 0) {//if the escape key is pressed pause the game
					sound.SetPause(soundSample, true);//pause the music
					pause = true;
					pause_menu(pause);
					sound.SetPause(soundSample, false);//return the music to when it was paused
				}

				if (GetAsyncKeyState(VK_UP) != 0) {//if the up key is pressed the character moves up 

					int newY = y - 1;//increments the user in the y direction up by one

					switch (Emap1[newY][x]) {//switch for the characters on the map movement 
					case ' '://checks if their is a blank space in front of the character
						Emap1[y][x] = ' ';
						y--;//moves up if nothing is in the way
						Emap1[newY][x] = '@';
						break;
					}
				}

				if (GetAsyncKeyState(VK_DOWN) != 0) {//moves down if the down key is pressed

					int newY = y + 1;//increments the counter by 1 and moves it in the up direction

					switch (Emap1[newY][x]) {//creates a switch for the character moving down

					case ' ':
						Emap1[y][x] = ' ';

						y++;//increments the counter so the character moves down

						Emap1[newY][x] = '@';

						break;

					}
				}

				if (easybullets1 != 0) {
					if (GetAsyncKeyState(VK_SPACE) != 0) {//if the space bar is pressed fire the bracket
						x++;//increments the troop to the right of the screen

						Emap1[y][x] = ')';

						easybullets1 = easybullets1 - 1;//you have now lost one troop

					case ')'://creates a case for the bracket troop

						Emap1[y][x] = ' ';//checks for blank space in front of the character 

						x++;//moves if their is nothing infront of the character

						if (Emap1[y][x] != '|' && Emap1[y][x] != '#' && Emap1[y][x] != '(' && Emap1[y][x] != '&' && Emap1[y][x] != '[' && Emap1[y][x] != 'O' && Emap1[y][x] != '/') {//checks for another character in front of it if not continues to move
							
							Emap1[y][x] = ')';

							break;
						}
						else if (Emap1[y][x] == '#') {//if the # is the castle takes damage
							Emap1[y][x] = ' ';
							Enemycastlehealth1 = Enemycastlehealth1 - 1;//decreases the castles damage 

						}

						else if (Emap1[y][x] == '/') {
							Emap1[y][x] = ' ';
							Enemycastlehealth1 = Enemycastlehealth1 - 1;//if the / is hit the castle takes damage 

							
						}

						else if (Emap1[y][x] == '&') {//if the & is hit the enemy loses health
							enemyHealth = enemyHealth - 1;
							
						}

						else if (Emap1[y][x] == '(') {//if the brackets collide they cancel eachother out 
							Emap1[y][x] = ' ';
						}

						else if (Emap1[y][x] == 'O') {//if the round bracket hits the O the O wins
							Emap1[y][x] = 'O';
						}

						else if (Emap1[y][x] == '[') {//if the round bracket hits the square bracket round bracket wins
							Emap1[y][x] = ')';
							easybullets1 = easybullets1 + 1;//you also gain a bullet back
						}

						break;

					}

					if (GetAsyncKeyState(VK_RIGHT)) {//if the right arrow key is pressed fire the 0
						x++;
						easybullets1 = easybullets1 - 1;
						Emap1[y][x] = '0';


					case '0'://creates a case for the 0
						Emap1[y][x] = ' ';//checks for a blank space
						x++;

						if (Emap1[y][x] != '|' && Emap1[y][x] != '#' && Emap1[y][x] != '(' && Emap1[y][x] != '&' && Emap1[y][x] != '[' && Emap1[y][x] != 'O' && Emap1[y][x] != '/') {//checks for the collision in the characters

							Emap1[y][x] = '0';

							break;
						}

						else if (Emap1[y][x] == '&') {
							enemyHealth = enemyHealth - 1;
						}

						else if (Emap1[y][x] == '/') {
							Emap1[y][x] = ' ';
							Enemycastlehealth1 = Enemycastlehealth1 - 1;
						}

						else if (Emap1[y][x] == '#') {
							Emap1[y][x] = ' ';
							Enemycastlehealth1 = Enemycastlehealth1 - 1;
						}

						else if (Emap1[y][x] == 'O') {
							Emap1[y][x] = ' ';
						}

						else if (Emap1[y][x] == '[') {
							Emap1[y][x] = '[';
						}

						else if (Emap1[y][x] == '(') {
							Emap1[y][x] = '0';
							easybullets1 = easybullets1 + 1;
						}

						break;
					}



					if (GetAsyncKeyState(VK_LEFT)) {
						x++;
						easybullets1 = easybullets1 - 1;
						Emap1[y][x] = ']';



					case ']':
						Emap1[y][x] = ' ';
						x++;

						if (Emap1[y][x] != '|' && Emap1[y][x] != '#' && Emap1[y][x] != '&' && Emap1[y][x] != '[' && Emap1[y][x] != '(' && Emap1[y][x] != 'O' && Emap1[y][x] != '/') {
							Emap1[y][x] = ']';
							break;
						}

						else if (Emap1[y][x] == '&') {
							enemyHealth = enemyHealth - 1;
						}

						else if (Emap1[y][x] == '/') {
							Emap1[y][x] = ' ';
							Enemycastlehealth1 = Enemycastlehealth1 - 1;

							}

						else if (Emap1[y][x] == '#') {
							Emap1[y][x] = ' ';
							Enemycastlehealth1 = Enemycastlehealth1 - 1;

							
						}

						else if (Emap1[y][x] == '[') {
							Emap1[y][x] = ' ';
						}

						else if (Emap1[y][x] == '(') {
							Emap1[y][x] = '(';
						}

						else if (Emap1[y][x] == 'O') {
							Emap1[y][x] = ']';
							easybullets1 = easybullets1 + 1;
						}
					}
					else if (easybullets1 == 10) {
						seconds = 0;
					}

				}

				else {

					cout << "You have no bullets" << endl;
				}
			}
		}
	}
}

string EupdateHealth1() {//updates the health for the enemy castle 
	string health = "";
	for (int i = 0; i < Enemycastlehealth1; i++) {//loops to see where the castles health is and decrements by one each time
		health += char(219);
	}
	return health;
}

string EupdateHealth() {//updates the health for the human castle
	string health1 = "";
	for (int i = 0; i < Ehumancastlehealth1; i++) {//loops to see where the castles health is and decrements by one each time
		health1 += char(219);
	}
	return health1;
}

string Hhuman1() {
	string health1 = "";
	for (int i = 0; i < EhumanHealth1; i++) {
		health1 += char(219);
	}
	return health1;
}

void EenemyMove1() {
	int randomNum = 0;//variable for the random number generator
	int spawnNum = 0;



	for (int y = 0; y < 20; y++) {

		for (int x = 0; x < 69; x++) {

			randomNum = rand(); 

			switch (Emap1[y][x]) {

			case '&':

				if (randomNum % 2 != 0 && Emap1[y - 1][x] != '_') { //moves up if the number is even

					Emap1[y][x] = ' ';

					y--;

					Emap1[y][x] = '&';


				}

				if (randomNum % 2 == 0 && Emap1[y + 1][x] != '_') { // moves down if the number is odd

					Emap1[y][x] = ' ';

					y++;

					Emap1[y][x] = '&';


				}

				if (ShootingTimer1() == true) {

					spawnNum = rand() % 3 + 1; //random number generator for troop spawn

					if (spawnNum == 1) {
						x--;
						Emap1[y][x] = '(';


			case '(':
				Emap1[y][x] = ' ';
				x--;

				if (Emap1[y][x] != '|' && Emap1[y][x] != '#' && Emap1[y][x] != '@' && Emap1[y][x] != ')' && Emap1[y][x] != '0' && Emap1[y][x] != ']' && Emap1[y][x] != '\\' && Emap1[y][x] != '/') {
					Emap1[y][x] = '(';
					break;
				}
				else if (Emap1[y][x] == '@') {
					EhumanHealth1 = EhumanHealth1 - 1;
					
				}

				else if (Emap1[y][x] == '#') {
					Ehumancastlehealth1 = Ehumancastlehealth1 - 1;
					Emap1[y][x] = ' ';
					
				}

				else if (Emap1[y][x] == '/') {
					Ehumancastlehealth1 = Ehumancastlehealth1 - 1;
					Emap1[y][x] = ' ';
					
				}

				else if (Emap1[y][x] == ')') {
					Emap1[y][x] = ' ';

				}

				else if (Emap1[y][x] == '0') {
					Emap1[y][x] = '0';
				}

				else if (Emap1[y][x] == ']') {
					Emap1[y][x] = '(';
				}


				break;

					}


					if (spawnNum == 2) {
						x--;
						Emap1[y][x] = '[';


			case '[':
				Emap1[y][x] = ' ';
				x--;

				if (Emap1[y][x] != '|' && Emap1[y][x] != '#' && Emap1[y][x] != ')' && Emap1[y][x] != '@' && Emap1[y][x] != '0' && Emap1[y][x] != ']' && Emap1[y][x] != '/') {
					Emap1[y][x] = '[';

					break;
				}
				else if (Emap1[y][x] == '#') {
					Ehumancastlehealth1 = Ehumancastlehealth1 - 1;
					Emap1[y][x] = ' ';
					
				}
			
				else if (Emap1[y][x] == '/') {
					Ehumancastlehealth1 = Ehumancastlehealth1 - 1;
					Emap1[y][x] = ' ';
					
				}
				else if (Emap1[y][x] == '@') {
					EhumanHealth1 = EhumanHealth1 - 1;
				}

				else if (Emap1[y][x] == ')') {
					Emap1[y][x] = ')';
				}

				else if (Emap1[y][x] == '0') {
					Emap1[y][x] = '[';
				}

				else if (Emap1[y][x] == ']') {
					Emap1[y][x] = ' ';
				}

					}


					if (spawnNum == 3) {
						x--;
						Emap1[y][x] = 'O';


			case 'O':
				Emap1[y][x] = ' ';
				x--;

				if (Emap1[y][x] != '|' && Emap1[y][x] != '#' && Emap1[y][x] != '@' && Emap1[y][x] != ')' && Emap1[y][x] != '0' && Emap1[y][x] != ']' && Emap1[y][x] != '/') {
					Emap1[y][x] = 'O';
					break;
				}
				else if (Emap1[y][x] == '@') {
					EhumanHealth1 = EhumanHealth1 - 1;
					
				}

				else if (Emap1[y][x] == '/') {
					Ehumancastlehealth1 = Ehumancastlehealth1 - 1;
					Emap1[y][x] = ' ';
					
				}

				else if (Emap1[y][x] == '#') {
					Ehumancastlehealth1 = Ehumancastlehealth1 - 1;
					Emap1[y][x] = ' ';
					
				}

				else if (Emap1[y][x] == ')') {
					Emap1[y][x] = 'O';
				}

				else if (Emap1[y][x] == '0') {
					Emap1[y][x] = ' ';
				}

				else if (Emap1[y][x] == ']') {
					Emap1[y][x] = ']';
				}

				break;

					}

				}

				else
					break;

			}
		}

	}
}
////////////////////////////////////////////easy level 2

void EmapUpdate2() {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "LEVEL 2" << endl;
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	for (int y = 0; y < 20; y++) {
		cout << Emap2[y] << endl;
	}
	cout << endl;
	cout << endl;
}

void Emove2() {

	if (Timer()) {
		easybullets2 = easybullets2 + 1;
		
	}

	bool pause = false;

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
	SetConsoleTextAttribute(h, FOREGROUND_YELLOW | FOREGROUND_INTENSITY);
	cout << "Current bullet amount: " << easybullets2 << endl;
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	for (int y = 0; y < 20; y++) {
		for (int x = 0; x < 69; x++) {



			switch (Emap2[y][x]) {
			case '@':

				if (GetAsyncKeyState(VK_ESCAPE) != 0) {
					sound.SetPause(soundSample, true);
					pause = true;
					pause_menu(pause);
					sound.SetPause(soundSample, false);
				}

				if (GetAsyncKeyState(VK_UP) != 0) {

					int newY = y - 1;

					switch (Emap2[newY][x]) {
					case ' ':
						Emap2[y][x] = ' ';
						y--;
						Emap2[newY][x] = '@';
						break;
					}
				}

				if (GetAsyncKeyState(VK_DOWN) != 0) {
					int newY = y + 1;
					switch (Emap2[newY][x]) {

					case ' ':
						Emap2[y][x] = ' ';
						y++;
						Emap2[newY][x] = '@';
						break;

					}
				}

				if (easybullets2 != 0) {
					if (GetAsyncKeyState(VK_SPACE)) {
						x++;
						easybullets2 = easybullets2 - 1;
						Emap2[y][x] = ')';



					case ')':

						Emap2[y][x] = ' ';
						x++;
						if (Emap2[y][x] != '|' && Emap2[y][x] != '#' && Emap2[y][x] != '(' && Emap2[y][x] != '&' && Emap2[y][x] != '[' && Emap2[y][x] != 'O') {
							Emap2[y][x] = ')';

							break;
						}
						else if (Emap2[y][x] == '#') {
							Emap2[y][x] = ' ';
							Eenemycastlehealth2 = Eenemycastlehealth2 - 1;

							break;
						}

						else if (Emap2[y][x] == '&') {
							enemyHealth = enemyHealth - 1;
							break;
						}

						else if (Emap2[y][x] == '(') {
							Emap2[y][x] = ' ';
						}

						else if (Emap2[y][x] == 'O') {
							Emap2[y][x] = 'O';
						}

						else if (Emap2[y][x] == '[') {
							Emap2[y][x] = ')';
							easybullets2 = easybullets2 + 1;
						}

						break;

					}

					if (GetAsyncKeyState(VK_RIGHT)) {
						x++;
						easybullets2 = easybullets2 - 1;
						Emap2[y][x] = '0';


					case '0':
						Emap2[y][x] = ' ';
						x++;

						if (Emap2[y][x] != '|' && Emap2[y][x] != '#' && Emap2[y][x] != '(' && Emap2[y][x] != '&' && Emap2[y][x] != '[' && Emap2[y][x] != 'O') {

							Emap2[y][x] = '0';

							break;
						}

						else if (Emap2[y][x] == '&') {
							enemyHealth = enemyHealth - 1;
						}

						else if (Emap2[y][x] == '#') {
							Emap2[y][x] = ' ';
							Eenemycastlehealth2 = Eenemycastlehealth2 - 1;

						}

						else if (Emap2[y][x] == 'O') {
							Emap2[y][x] = ' ';
						}

						else if (Emap2[y][x] == '[') {
							Emap2[y][x] = '[';
						}

						else if (Emap2[y][x] == '(') {
							Emap2[y][x] = '0';
							easybullets2 = easybullets2 + 1;
						}

						break;
					}



					if (GetAsyncKeyState(VK_LEFT)) {
						x++;
						easybullets2 = easybullets2 - 1;
						Emap2[y][x] = ']';



					case ']':
						Emap2[y][x] = ' ';
						x++;

						if (Emap2[y][x] != '|' && Emap2[y][x] != '#' && Emap2[y][x] != '&' && Emap2[y][x] != '[' && Emap2[y][x] != '(' && Emap2[y][x] != 'O') {
							Emap2[y][x] = ']';
							break;
						}

						else if (Emap2[y][x] == '&') {
							enemyHealth = enemyHealth - 1;
						}

						else if (Emap2[y][x] == '#') {
							Emap2[y][x] = ' ';
							Eenemycastlehealth2 = Eenemycastlehealth2 - 1;

						}

						else if (Emap2[y][x] == '[') {
							Emap2[y][x] = ' ';
						}

						else if (Emap2[y][x] == '(') {
							Emap2[y][x] = '(';
						}

						else if (Emap2[y][x] == 'O') {
							Emap2[y][x] = ']';
							easybullets2 = easybullets2 + 1;
						}
					}


					else if (easybullets2 == 10) {
						seconds = 0;
					}
				}
				else {

					cout << "You have no bullets" << endl;
				}
			}
		}
	}
}

string Enemyhealth2() {
	string health = "";
	for (int i = 0; i < Eenemycastlehealth2; i++) {
		health += char(219);
	}
	return health;
}

string Playerhealth2() {
	string health = "";
	for (int i = 0; i < Ehumancastlehealth2; i++) {
		health += char(219);
	}
	return health;
}

string Hhuman2() {
	string health = "";
	for (int i = 0; i < EhumanHealth2; i++) {
		health += char(219);
	}
	return health;
}

void EenemyMove2() {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_WHITE | FOREGROUND_INTENSITY);
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	int randomNum = 0;
	int spawnNum = 0;
	static int moveNum = 10000;



	for (int y = 0; y < 20; y++) {

		for (int x = 0; x < 69; x++) {

			randomNum = rand(); 


			switch (Emap2[y][x]) {


			case '&':


				if (randomNum % 2 != 0 && Emap2[y - 1][x] != '_') { //moves up if the number is even

					Emap2[y][x] = ' ';

					y--;

					Emap2[y][x] = '&';

					moveNum = 0;


				}

				if (randomNum % 2 == 0 && Emap2[y + 1][x] != '_') { // moves down if the number is odd

					Emap2[y][x] = ' ';

					y++;

					Emap2[y][x] = '&';

					moveNum = 0;


				}

				if (ShootingTimer2() == true) {

					spawnNum = rand() % 3 + 1;

					if (spawnNum == 1) {
						x--;
						Emap2[y][x] = '(';


			case '(':
				Emap2[y][x] = ' ';
				x--;

				if (Emap2[y][x] != '|' && Emap2[y][x] != '#' && Emap2[y][x] != '@' && Emap2[y][x] != ')' && Emap2[y][x] != '0' && Emap2[y][x] != ']') {
					Emap2[y][x] = '(';
					break;
				}
				else if (Emap2[y][x] == '@') {
					EhumanHealth2 = EhumanHealth2 - 1;
					
				}

				else if (Emap2[y][x] == '#') {
					Ehumancastlehealth2 = Ehumancastlehealth2 - 1;
					Emap2[y][x] = ' ';
					break;
				}

				else if (Emap2[y][x] == ')') {
					Emap2[y][x] = ' ';

				}

				else if (Emap2[y][x] == '0') {
					Emap2[y][x] = '0';
				}

				else if (Emap2[y][x] == ']') {
					Emap2[y][x] = '(';
				}


				break;
					}

					if (spawnNum == 2) {
						x--;
						Emap2[y][x] = '[';


			case '[':
				Emap2[y][x] = ' ';
				x--;

				if (Emap2[y][x] != '|' && Emap2[y][x] != '#' && Emap2[y][x] != ')' && Emap2[y][x] != '@' && Emap2[y][x] != '0' && Emap2[y][x] != ']') {
					Emap2[y][x] = '[';

					break;
				}
				else if (Emap2[y][x] == '#') {
					Ehumancastlehealth2 = Ehumancastlehealth2 - 1;
					Emap2[y][x] = ' ';
					break;
				}

				else if (Emap2[y][x] == '@') {
					EhumanHealth2 = EhumanHealth2 - 1;
				}

				else if (Emap2[y][x] == ')') {
					Emap2[y][x] = ')';
				}

				else if (Emap2[y][x] == '0') {
					Emap2[y][x] = '[';
				}

				else if (Emap2[y][x] == ']') {
					Emap2[y][x] = ' ';
				}

					}

					if (spawnNum == 3) {
						x--;
						Emap2[y][x] = 'O';


			case 'O':
				Emap2[y][x] = ' ';
				x--;

				if (Emap2[y][x] != '|' && Emap2[y][x] != '#' && Emap2[y][x] != '@' && Emap2[y][x] != ')' && Emap2[y][x] != '0' && Emap2[y][x] != ']') {
					Emap2[y][x] = 'O';
					break;
				}
				else if (Emap2[y][x] == '@') {
					EhumanHealth2 = EhumanHealth2 - 1;
				}

				else if (Emap2[y][x] == '#') {
					Ehumancastlehealth2 = Ehumancastlehealth2 - 1;
					Emap2[y][x] = ' ';
					break;
				}

				else if (Emap2[y][x] == ')') {
					Emap2[y][x] = 'O';
				}

				else if (Emap2[y][x] == '0') {
					Emap2[y][x] = ' ';
				}

				else if (Emap2[y][x] == ']') {
					Emap2[y][x] = ']';
				}

				break;
					}

				}

				else
					break;

			}

		}

	}

}

///////////////////////////////////////////easy level 3
void EmapUpdate3() {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "LEVEL 3" << endl;
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	for (int y = 0; y < 20; y++) {
		cout << Emap3[y] << endl;
	}
	cout << endl;
	cout << endl;

}

void Emove3() {
	if (Timer()) {
		easybullets3 = easybullets3 + 1;
	}

	bool pause = false;

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
	SetConsoleTextAttribute(h, FOREGROUND_YELLOW | FOREGROUND_INTENSITY);
	cout << "Current bullet amount: " << easybullets3 << endl;
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	for (int y = 0; y < 20; y++) {
		for (int x = 0; x < 69; x++) {



			switch (Emap3[y][x]) {
			case '@':

				if (GetAsyncKeyState(VK_ESCAPE) != 0) {
					sound.SetPause(soundSample, true);
					pause = true;
					pause_menu(pause);
					sound.SetPause(soundSample, false);
				}

				if (GetAsyncKeyState(VK_UP) != 0) {

					int newY = y - 1;

					switch (Emap3[newY][x]) {
					case ' ':
						Emap3[y][x] = ' ';
						y--;
						Emap3[newY][x] = '@';
						break;
					}
				}

				if (GetAsyncKeyState(VK_DOWN) != 0) {
					int newY = y + 1;
					switch (Emap3[newY][x]) {

					case ' ':
						Emap3[y][x] = ' ';
						y++;
						Emap3[newY][x] = '@';
						break;

					}
				}

				if (easybullets3 != 0) {
					if (GetAsyncKeyState(VK_SPACE)) {
						x++;
						easybullets3 = easybullets3 - 1;
						Emap3[y][x] = ')';



					case ')':

						Emap3[y][x] = ' ';
						x++;
						if (Emap3[y][x] != '|' && Emap3[y][x] != '#' && Emap3[y][x] != '/' && Emap3[y][x] != '(' && Emap3[y][x] != '&' && Emap3[y][x] != '[' && Emap3[y][x] != 'O' && Emap3[y][x] != 'l') {
							Emap3[y][x] = ')';

							break;
						}

						else if (Emap3[y][x] == '/') {
							Emap3[y][x] = ' ';
							Eenemycastlehealth3 = Eenemycastlehealth3 - 1;

							break;
						}

						else if (Emap3[y][x] == '#') {
							Emap3[y][x] = ' ';
							Eenemycastlehealth3 = Eenemycastlehealth3 - 1;

							break;
						}

						else if (Emap3[y][x] == '&') {
							enemyHealth = enemyHealth - 1;
							break;
						}

						else if (Emap3[y][x] == '(') {
							Emap3[y][x] = ' ';
						}

						else if (Emap3[y][x] == 'l') {
							Emap3[y][x] = ' ';
						}

						else if (Emap3[y][x] == 'O') {
							Emap3[y][x] = 'O';
						}

						else if (Emap3[y][x] == '[') {
							Emap3[y][x] = ')';
							easybullets3 = easybullets3 + 1;
						}

						break;

					}

					if (GetAsyncKeyState(VK_RIGHT)) {
						x++;
						easybullets3 = easybullets3 - 1;
						Emap3[y][x] = '0';


					case '0':
						Emap3[y][x] = ' ';
						x++;

						if (Emap3[y][x] != '|' && Emap3[y][x] != '#' && Emap3[y][x] != '/' && Emap3[y][x] != 'l' && Emap3[y][x] != '(' && Emap3[y][x] != '&' && Emap3[y][x] != '[' && Emap3[y][x] != 'O') {

							Emap3[y][x] = '0';

							break;
						}

						else if (Emap3[y][x] == 'l') {
							Emap3[y][x] = ' ';
						}

						else if (Emap3[y][x] == '/') {
							Emap3[y][x] = ' ';
							Eenemycastlehealth3 = Eenemycastlehealth3 - 1;

							break;
						}

						else if (Emap3[y][x] == '&') {
							enemyHealth = enemyHealth - 1;
						}

						else if (Emap3[y][x] == '#') {
							Emap3[y][x] = ' ';
							Eenemycastlehealth3 = Eenemycastlehealth3 - 1;

						}

						else if (Emap3[y][x] == 'O') {
							Emap3[y][x] = ' ';
						}

						else if (Emap3[y][x] == '[') {
							Emap3[y][x] = '[';
						}

						else if (Emap3[y][x] == '(') {
							Emap3[y][x] = '0';
							easybullets3 = easybullets3 + 1;
						}

						break;
					}



					if (GetAsyncKeyState(VK_LEFT)) {
						x++;
						easybullets3 = easybullets3 - 1;
						Emap3[y][x] = ']';



					case ']':
						Emap3[y][x] = ' ';
						x++;

						if (Emap3[y][x] != '|' && Emap3[y][x] != '/' && Emap3[y][x] != '#' && Emap3[y][x] != 'l' && Emap3[y][x] != '&' && Emap3[y][x] != '[' && Emap3[y][x] != '(' && Emap3[y][x] != 'O') {
							Emap3[y][x] = ']';
							break;
						}

						else if (Emap3[y][x] == 'l') {
							Emap3[y][x] = ' ';
						}

						else if (Emap3[y][x] == '/') {
							Emap3[y][x] = ' ';
							Eenemycastlehealth3 = Eenemycastlehealth3 - 1;

							break;
						}

						else if (Emap3[y][x] == '&') {
							enemyHealth = enemyHealth - 1;
						}

						else if (Emap3[y][x] == '#') {
							Emap3[y][x] = ' ';
							Eenemycastlehealth3 = Eenemycastlehealth3 - 1;

						}

						else if (Emap3[y][x] == '[') {
							Emap3[y][x] = ' ';
						}

						else if (Emap3[y][x] == '(') {
							Emap3[y][x] = '(';
						}

						else if (Emap3[y][x] == 'O') {
							Emap3[y][x] = ']';
							easybullets3 = easybullets3 + 1;
						}
					}

					else if (easybullets3 == 10) {
						seconds = 0;
					}

				}

				else {

					cout << "You have no bullets" << endl;
				}
			}
		}
	}

}

string Enemyhealth3() {
	string health = "";
	for (int i = 0; i < Eenemycastlehealth3; i++) {
		health += char(219);
	}
	return health;
}

string Humanhealth3() {
	string health = "";
	for (int i = 0; i < Ehumancastlehealth3; i++) {
		health += char(219);
	}
	return health;
}

string Hhuman3() {
	string health = "";
	for (int i = 0; i < EhumanHealth3; i++) {
		health += char(219);
	}
	return health;

}

void EenemyMove3() {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_WHITE | FOREGROUND_INTENSITY);
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	int randomNum = 0;
	int spawnNum = 0;
	static int moveNum = 10000;



	for (int y = 0; y < 20; y++) {

		for (int x = 0; x < 69; x++) {

			randomNum = rand(); 


			switch (Emap3[y][x]) {


			case '&':


				if (randomNum % 2 != 0 && Emap3[y - 1][x] != '_') { //moves up if the number is even

					Emap3[y][x] = ' ';

					y--;

					Emap3[y][x] = '&';

					moveNum = 0;


				}

				if (randomNum % 2 == 0 && Emap3[y + 1][x] != '_') { // moves down if the number is odd

					Emap3[y][x] = ' ';

					y++;

					Emap3[y][x] = '&';

					moveNum = 0;


				}

				if (ShootingTimer3() == true) {

					spawnNum = rand() % 3 + 1;

					if (spawnNum == 1) {
						x--;
						Emap3[y][x] = '(';


			case '(':
				Emap3[y][x] = ' ';
				x--;

				if (Emap3[y][x] != '|' && Emap3[y][x] != '#' && Emap3[y][x] != '@' && Emap3[y][x] != ')' && Emap3[y][x] != '0' && Emap3[y][x] != ']') {
					Emap3[y][x] = '(';
					break;
				}
				else if (Emap3[y][x] == '@') {
					EhumanHealth3 = EhumanHealth3 - 1;
					
				}

				else if (Emap3[y][x] == '#') {
					Ehumancastlehealth3 = Ehumancastlehealth3 - 1;
					Emap3[y][x] = ' ';
					break;
				}

				else if (Emap3[y][x] == ')') {
					Emap3[y][x] = ' ';

				}

				else if (Emap3[y][x] == '0') {
					Emap3[y][x] = '0';
				}

				else if (Emap3[y][x] == ']') {
					Emap3[y][x] = '(';
				}


				break;
					}

					if (spawnNum == 2) {
						x--;
						Emap3[y][x] = '[';


			case '[':
				Emap3[y][x] = ' ';
				x--;

				if (Emap3[y][x] != '|' && Emap3[y][x] != '#' && Emap3[y][x] != ')' && Emap3[y][x] != '@' && Emap3[y][x] != '0' && Emap3[y][x] != ']') {
					Emap3[y][x] = '[';

					break;
				}
				else if (Emap3[y][x] == '#') {
					Ehumancastlehealth3 = Ehumancastlehealth3 - 1;
					Emap3[y][x] = ' ';
					break;
				}

				else if (Emap3[y][x] == '@') {
					EhumanHealth3 = EhumanHealth3 - 1;
				}

				else if (Emap3[y][x] == ')') {
					Emap3[y][x] = ')';
				}

				else if (Emap3[y][x] == '0') {
					Emap3[y][x] = '[';
				}

				else if (Emap3[y][x] == ']') {
					Emap3[y][x] = ' ';
				}

					}

					if (spawnNum == 3) {
						x--;
						Emap3[y][x] = 'O';


			case 'O':
				Emap3[y][x] = ' ';
				x--;

				if (Emap3[y][x] != '|' && Emap3[y][x] != '#' && Emap3[y][x] != '@' && Emap3[y][x] != ')' && Emap3[y][x] != '0' && Emap3[y][x] != ']') {
					Emap3[y][x] = 'O';
					break;
				}
				else if (Emap3[y][x] == '@') {
					EhumanHealth3 = EhumanHealth3 - 1;
				
				}

				else if (Emap3[y][x] == '#') {
					Ehumancastlehealth3 = Ehumancastlehealth3 - 1;
					Emap3[y][x] = ' ';
					break;
				}

				else if (Emap3[y][x] == ')') {
					Emap3[y][x] = 'O';
				}

				else if (Emap3[y][x] == '0') {
					Emap3[y][x] = ' ';
				}

				else if (Emap3[y][x] == ']') {
					Emap3[y][x] = ']';
				}

				break;
					}

				}

				else
					break;

			}

		}

	}

}

void easywallMove3() {
	int randomNum;
	int moveNum;
	for (int y = 0; y < 20; y++) {

		for (int x = 0; x < 70; x++) {

			randomNum = rand();

			switch (Emap3[y][x]) {

			case 'l':

				if (randomNum % 2 != 0 && Emap3[y - 1][x] != '_' && Emap3[y - 1][x] != 'l' && Emap3[y][x] != ']' && Emap3[y][x] != '0' && Emap3[y][x] != ')') { 

					Emap3[y][x] = ' ';

					Emap3[y][x] = 'l';

				}

				else if (Emap3[y][x] == ')') {
					Emap3[y][x] = ' ';
					break;

				}

				else if (Emap3[y][x] == '0') {
					Emap3[y][x] = ' ';
					break;
				}

				else if (Emap3[y][x] == ']') {
					Emap3[y][x] = ' ';
					break;
				}

				if (randomNum % 2 == 0 && Emap3[y + 1][x] != '_' && Emap3[y][x] != ']' && Emap3[y + 1][x] != 'l' && Emap3[y][x] != '0' && Emap3[y][x] != ')') { 

					Emap3[y][x] = ' ';

					Emap3[y][x] = 'l';

					moveNum = 0;

				}
				else if (Emap3[y][x] == ')') {
					Emap3[y][x] = ' ';
					break;

				}

				else if (Emap3[y][x] == '0') {
					Emap3[y][x] = ' ';
					break;
				}

				else if (Emap3[y][x] == ']') {
					Emap3[y][x] = ' ';
					break;
				}


				
			}
		}
	}
}

///////////////////////////////////////////hard level 1

void HmapUpdate1() {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "LEVEL 4" << endl;
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	for (int y = 0; y < 20; y++) {
		cout << Hmap1[y] << endl;
	}

	cout << endl;
	cout << endl;

}

void Hmove1() {
	if (Timer()) {
		hardbullets1 = hardbullets1 + 1;
	}

	bool pause = false;

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_YELLOW | FOREGROUND_INTENSITY);
	cout << "Current bullet amount: " << hardbullets1 << endl;
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	for (int y = 0; y < 20; y++) {
		for (int x = 0; x < 69; x++) {



			switch (Hmap1[y][x]) {
			case '@':

				if (GetAsyncKeyState(VK_ESCAPE) != 0) {
					sound.SetPause(soundSample, true);
					pause = true;
					pause_menu(pause);
					sound.SetPause(soundSample, false);
				}

				if (GetAsyncKeyState(VK_UP) != 0) {

					int newY = y - 1;

					switch (Hmap1[newY][x]) {
					case ' ':
						Hmap1[y][x] = ' ';
						y--;
						Hmap1[newY][x] = '@';
						break;
					}
				}

				if (GetAsyncKeyState(VK_DOWN) != 0) {
					int newY = y + 1;
					switch (Hmap1[newY][x]) {

					case ' ':
						Hmap1[y][x] = ' ';
						y++;
						Hmap1[newY][x] = '@';
						break;

					}
				}

				if (hardbullets1 != 0) {
					if (GetAsyncKeyState(VK_SPACE)) {
						x++;
						hardbullets1 = hardbullets1 - 1;
						Hmap1[y][x] = ')';



					case ')':

						Hmap1[y][x] = ' ';
						x++;
						if (Hmap1[y][x] != '|' && Hmap1[y][x] != '#' && Hmap1[y][x] != '(' && Hmap1[y][x] != '&' && Hmap1[y][x] != '[' && Hmap1[y][x] != 'O' && Hmap1[y][x] != 'l') {
							Hmap1[y][x] = ')';

							break;
						}
						else if (Hmap1[y][x] == '#') {
							Hmap1[y][x] = ' ';
							Henemycastlehealth1 = Henemycastlehealth1 - 1;

							break;
						}

						else if (Hmap1[y][x] == 'l') {
							Hmap1[y][x] = ' ';
							break;
						}

						else if (Hmap1[y][x] == '&') {
							enemyHealth = enemyHealth - 1;
							break;
						}

						else if (Hmap1[y][x] == '(') {
							Hmap1[y][x] = ' ';
						}

						else if (Hmap1[y][x] == 'O') {
							Hmap1[y][x] = 'O';
						}

						else if (Hmap1[y][x] == '[') {
							Hmap1[y][x] = ')';
							hardbullets1 = hardbullets1 + 1;
						}

						break;

					}

					if (GetAsyncKeyState(VK_RIGHT)) {
						x++;
						hardbullets1 = hardbullets1 - 1;
						Hmap1[y][x] = '0';


					case '0':
						Hmap1[y][x] = ' ';
						x++;

						if (Hmap1[y][x] != '|' && Hmap1[y][x] != '#' && Hmap1[y][x] != '(' && Hmap1[y][x] != '&' && Hmap1[y][x] != '[' && Hmap1[y][x] != 'O' && Hmap1[y][x] != 'l') {

							Hmap1[y][x] = '0';

							break;
						}

						else if (Hmap1[y][x] == 'l') {
							Hmap1[y][x] = ' ';
							break;
						}

						else if (Hmap1[y][x] == '&') {
							enemyHealth = enemyHealth - 1;
						}

						else if (Hmap1[y][x] == '#') {
							Hmap1[y][x] = ' ';
							Henemycastlehealth1 = Henemycastlehealth1 - 1;

						}

						else if (Hmap1[y][x] == 'O') {
							Hmap1[y][x] = ' ';
						}

						else if (Hmap1[y][x] == '[') {
							Hmap1[y][x] = '[';
						}

						else if (Hmap1[y][x] == '(') {
							Hmap1[y][x] = '0';
							hardbullets1 = hardbullets1 + 1;
						}

						break;
					}



					if (GetAsyncKeyState(VK_LEFT)) {
						x++;
						hardbullets1 = hardbullets1 - 1;
						Hmap1[y][x] = ']';



					case ']':
						Hmap1[y][x] = ' ';
						x++;

						if (Hmap1[y][x] != '|' && Hmap1[y][x] != '#' && Hmap1[y][x] != '&' && Hmap1[y][x] != '[' && Hmap1[y][x] != '(' && Hmap1[y][x] != 'O' && Hmap1[y][x] != 'l') {
							Hmap1[y][x] = ']';
							break;
						}

						else if (Hmap1[y][x] == '&') {
							enemyHealth = enemyHealth - 1;
						}

						else if (Hmap1[y][x] == 'l') {
							Hmap1[y][x] = ' ';
							break;
						}

						else if (Hmap1[y][x] == '#') {
							Hmap1[y][x] = ' ';
							Henemycastlehealth1 = Henemycastlehealth1 - 1;

						}

						else if (Hmap1[y][x] == '[') {
							Hmap1[y][x] = ' ';
						}

						else if (Hmap1[y][x] == '(') {
							Hmap1[y][x] = '(';
						}

						else if (Hmap1[y][x] == 'O') {
							Hmap1[y][x] = ']';
							hardbullets1 = hardbullets1 + 1;
						}
					}


					else if (hardbullets1 == 10) {
						seconds = 0;
					}

				}
				else {

					cout << "You have no bullets" << endl;
				}
			}
		}
	}

}

void HenemyMove1() {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	int randomNum = 0;
	int spawnNum = 0;
	static int moveNum = 10000;



	for (int y = 0; y < 20; y++) {

		for (int x = 0; x < 70; x++) {

			randomNum = rand(); 

			switch (Hmap1[y][x]) {

			case '&':

				if (randomNum % 2 != 0 && Hmap1[y - 1][x] != '_') { //moves up if the number is even

					Hmap1[y][x] = ' ';

					y--;

					Hmap1[y][x] = '&';

					moveNum = 0;


				}

				if (randomNum % 2 == 0 && Hmap1[y + 1][x] != '_') { // moves down if the number is odd

					Hmap1[y][x] = ' ';

					y++;

					Hmap1[y][x] = '&';

					moveNum = 0;


				}

				if (ShootingTimer4() == true) {

					spawnNum = rand() % 3 + 1;

					if (spawnNum == 1) {
						x--;
						Hmap1[y][x] = '(';


			case '(':
				Hmap1[y][x] = ' ';
				x--;

				if (Hmap1[y][x] != '|' && Hmap1[y][x] != '#' && Hmap1[y][x] != '@' && Hmap1[y][x] != ')' && Hmap1[y][x] != '0' && Hmap1[y][x] != ']') {
					Hmap1[y][x] = '(';
					break;
				}
				else if (Hmap1[y][x] == '@') {
					Hhumanhealth1 = Hhumanhealth1 - 1;
				}

				else if (Hmap1[y][x] == '#') {
					Hhumancastlehealth1 = Hhumancastlehealth1 - 1;
					Hmap1[y][x] = ' ';
					break;
				}

				else if (Hmap1[y][x] == ')') {
					Hmap1[y][x] = ' ';

				}

				else if (Hmap1[y][x] == '0') {
					Hmap1[y][x] = '0';
				}

				else if (Hmap1[y][x] == ']') {
					Hmap1[y][x] = '(';
				}


				break;
					}
					if (spawnNum == 2) {
						x--;
						Hmap1[y][x] = '[';


			case '[':
				Hmap1[y][x] = ' ';
				x--;

				if (Hmap1[y][x] != '|' && Hmap1[y][x] != '#' && Hmap1[y][x] != ')' && Hmap1[y][x] != '@' && Hmap1[y][x] != '0' && Hmap1[y][x] != ']') {
					Hmap1[y][x] = '[';

					break;
				}
				else if (Hmap1[y][x] == '#') {
					Hhumancastlehealth1 = Hhumancastlehealth1 - 1;
					Hmap1[y][x] = ' ';
					break;
				}

				else if (Hmap1[y][x] == '@') {
					Hhumanhealth1 = Hhumanhealth1 - 1;
				}

				else if (Hmap1[y][x] == ')') {
					Hmap1[y][x] = ')';
				}

				else if (Hmap1[y][x] == '0') {
					Hmap1[y][x] = '[';
				}

				else if (Hmap1[y][x] == ']') {
					Hmap1[y][x] = ' ';
				}

					}

					if (spawnNum == 3) {
						x--;
						Hmap1[y][x] = 'O';


			case 'O':
				Hmap1[y][x] = ' ';
				x--;

				if (Hmap1[y][x] != '|' && Hmap1[y][x] != '#' && Hmap1[y][x] != '@' && Hmap1[y][x] != ')' && Hmap1[y][x] != '0' && Hmap1[y][x] != ']') {
					Hmap1[y][x] = 'O';
					break;
				}
				else if (Hmap1[y][x] == '@') {
					Hhumanhealth1 = Hhumanhealth1 - 1;
				}

				else if (Hmap1[y][x] == '#') {
					Hhumancastlehealth1 = Hhumancastlehealth1 - 1;
					Hmap1[y][x] = ' ';
					break;
				}

				else if (Hmap1[y][x] == ')') {
					Hmap1[y][x] = 'O';
				}

				else if (Hmap1[y][x] == '0') {
					Hmap1[y][x] = ' ';
				}

				else if (Hmap1[y][x] == ']') {
					Hmap1[y][x] = ']';
				}

				break;
					}

				}

				else
					break;

			}
		}

	}

}

string Enemyhealth4() {
	string health = "";
	for (int i = 0; i < Henemycastlehealth1; i++) {
		health += char(219);
	}
	return health;
}

string Humanhealth4() {
	string health = "";
	for (int i = 0; i < Hhumancastlehealth1; i++) {
		health += char(219);
	}
	return health;
}

string Hhuman4() {
	string health = "";
	for (int i = 0; i < Hhumanhealth1; i++) {
		health += char(219);
	}
	return health;
}

void HwallMove1() {
	int randomNum;
	int moveNum;
	for (int y = 0; y < 20; y++) {

		for (int x = 0; x < 70; x++) {

			randomNum = rand(); 

			switch (Hmap1[y][x]) {

			case 'l':

				if (randomNum % 2 != 0 && Hmap1[y - 1][x] != '_' && Hmap1[y - 1][x] != 'l' && Hmap1[y][x] != ']' && Hmap1[y][x] != '0' && Hmap1[y][x] != ')') { //moves up if the number is even

					Hmap1[y][x] = ' ';

					y--;

					Hmap1[y][x] = 'l';

				}


				if (randomNum % 2 == 0 && Hmap1[y + 1][x] != '_' && Hmap1[y][x] != ']' && Hmap1[y + 1][x] != 'l' && Hmap1[y][x] != '0' && Hmap1[y][x] != ')') { // moves down if the number is odd

					Hmap1[y][x] = ' ';

					y++;

					Hmap1[y][x] = 'l';

					moveNum = 0;

				}

			}
		}
	}
}

//////////////////////////////////////////////hard level 2
void HmapUpdate2() {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "LEVEL 5" << endl;
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	for (int y = 0; y < 20; y++) {
		cout << Hmap2[y] << endl;
	}

}

void Hmove2() {
	if (Timer()) {
		hardbullets2 = hardbullets2 + 1;
	}

	bool pause = false;

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_YELLOW | FOREGROUND_INTENSITY);
	cout << "This is your current bullet amount: " << hardbullets2 << endl;
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	for (int y = 0; y < 20; y++) {
		for (int x = 0; x < 69; x++) {

			switch (Hmap2[y][x]) {
			case '@':

				if (GetAsyncKeyState(VK_ESCAPE) != 0) {
					sound.SetPause(soundSample, true);
					pause = true;
					pause_menu(pause);
					sound.SetPause(soundSample, false);
				}

				if (GetAsyncKeyState(VK_UP) != 0) {

					int newY = y - 1;

					switch (Hmap2[newY][x]) {
					case ' ':
						Hmap2[y][x] = ' ';
						y--;
						Hmap2[newY][x] = '@';
						break;
					}
				}

				if (GetAsyncKeyState(VK_DOWN) != 0) {
					int newY = y + 1;
					switch (Hmap2[newY][x]) {

					case ' ':
						Hmap2[y][x] = ' ';
						y++;
						Hmap2[newY][x] = '@';
						break;

					}
				}

				if (hardbullets2 != 0) {
					if (GetAsyncKeyState(VK_SPACE)) {
						x++;
						hardbullets2 = hardbullets2 - 1;
						Hmap2[y][x] = ')';



					case ')':

						Hmap2[y][x] = ' ';
						x++;
						if (Hmap2[y][x] != '|' && Hmap2[y][x] != 'l' && Hmap2[y][x] != '#' && Hmap2[y][x] != '(' && Hmap2[y][x] != '&' && Hmap2[y][x] != '[' && Hmap2[y][x] != 'O') {
							Hmap2[y][x] = ')';

							break;
						}
						else if (Hmap2[y][x] == '#') {
							Hmap2[y][x] = ' ';
							Henemycastlehealth2 = Henemycastlehealth2 - 1;

							break;
						}

						else if (Hmap2[y][x] == 'l') {
							Hmap2[y][x] = ' ';
							break;
						}

						else if (Hmap2[y][x] == '&') {
							enemyHealth = enemyHealth - 1;
							break;
						}

						else if (Hmap2[y][x] == '(') {
							Hmap2[y][x] = ' ';
						}

						else if (Hmap2[y][x] == 'O') {
							Hmap2[y][x] = 'O';
						}

						else if (Hmap2[y][x] == '[') {
							Hmap2[y][x] = ')';
							hardbullets2 = hardbullets2 + 1;
						}

						break;

					}

					if (GetAsyncKeyState(VK_RIGHT)) {
						x++;
						hardbullets2 = hardbullets2 - 1;
						Hmap2[y][x] = '0';


					case '0':
						Hmap2[y][x] = ' ';
						x++;

						if (Hmap2[y][x] != '|' && Hmap2[y][x] != 'l' && Hmap2[y][x] != '#' && Hmap2[y][x] != '(' && Hmap2[y][x] != '&' && Hmap2[y][x] != '[' && Hmap2[y][x] != 'O') {

							Hmap2[y][x] = '0';

							break;
						}

						else if (Hmap2[y][x] == 'l') {
							Hmap2[y][x] = ' ';
							break;
						}

						else if (Hmap2[y][x] == '&') {
							enemyHealth = enemyHealth - 1;
						}

						else if (Hmap2[y][x] == '#') {
							Hmap2[y][x] = ' ';
							Henemycastlehealth2 = Henemycastlehealth2 - 1;

						}

						else if (Hmap2[y][x] == 'O') {
							Hmap2[y][x] = ' ';
						}

						else if (Hmap2[y][x] == '[') {
							Hmap2[y][x] = '[';
						}

						else if (Hmap2[y][x] == '(') {
							Hmap2[y][x] = '0';
							hardbullets2 = hardbullets2 + 1;
						}

						break;
					}



					if (GetAsyncKeyState(VK_LEFT)) {
						x++;
						hardbullets2 = hardbullets2 - 1;
						Hmap2[y][x] = ']';



					case ']':
						Hmap2[y][x] = ' ';
						x++;

						if (Hmap2[y][x] != '|' && Hmap2[y][x] != 'l' && Hmap2[y][x] != '#' && Hmap2[y][x] != '&' && Hmap2[y][x] != '[' && Hmap2[y][x] != '(' && Hmap2[y][x] != 'O') {
							Hmap2[y][x] = ']';
							break;
						}

						else if (Hmap2[y][x] == '&') {
							enemyHealth = enemyHealth - 1;
						}

						else if (Hmap2[y][x] == 'l') {
							Hmap2[y][x] = ' ';
							break;
						}

						else if (Hmap2[y][x] == '#') {
							Hmap2[y][x] = ' ';
							Henemycastlehealth2 = Henemycastlehealth2 - 1;

						}

						else if (Hmap2[y][x] == '[') {
							Hmap2[y][x] = ' ';
						}

						else if (Hmap2[y][x] == '(') {
							Hmap2[y][x] = '(';
						}

						else if (Hmap2[y][x] == 'O') {
							Hmap2[y][x] = ']';
							hardbullets2 = hardbullets2 + 1;
						}
					}

					else if (hardbullets2 == 10) {
						seconds = 0;
					}
				}
				else {

					cout << "You have no bullets" << endl;
				}
			}
		}
	}

}

string Enemyhealth5() {
	string health = "";
	for (int i = 0; i < Henemycastlehealth2; i++) {
		health += char(219);
	}
	return health;
}

string Humanhealth5() {
	string health = "";
	for (int i = 0; i < Hhumancastlehealth2; i++) {
		health += char(219);
	}
	return health;
}

string Hhuman5() {
	string health = "";
	for (int i = 0; i < Hhumanhealth2; i++) {
		health += char(219);
	}
	return health;
}

void HenemyMove2() {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	int randomNum = 0;
	int spawnNum = 0;
	static int moveNum = 10000;



	for (int y = 0; y < 20; y++) {

		for (int x = 0; x < 69; x++) {

			randomNum = rand(); 


			switch (Hmap2[y][x]) {


			case '&':


				if (randomNum % 2 != 0 && Hmap2[y - 1][x] != '_') { //moves up if the number is even

					Hmap2[y][x] = ' ';

					y--;

					Hmap2[y][x] = '&';

					moveNum = 0;


				}

				if (randomNum % 2 == 0 && Hmap2[y + 1][x] != '_') { // moves down if the number is odd

					Hmap2[y][x] = ' ';

					y++;

					Hmap2[y][x] = '&';

					moveNum = 0;


				}

				if (ShootingTimer5() == true) {

					spawnNum = rand() % 3 + 1;

					if (spawnNum == 1) {
						x--;
						Hmap2[y][x] = '(';


			case '(':
				Hmap2[y][x] = ' ';
				x--;

				if (Hmap2[y][x] != '|' && Hmap2[y][x] != '#' && Hmap2[y][x] != '@' && Hmap2[y][x] != ')' && Hmap2[y][x] != '0' && Hmap2[y][x] != ']') {
					Hmap2[y][x] = '(';
					break;
				}
				else if (Hmap2[y][x] == '@') {
					Hhumanhealth2 = Hhumanhealth2 - 1;
				}

				else if (Hmap2[y][x] == '#') {
					Hhumancastlehealth2 = Hhumancastlehealth2 - 1;
					Hmap2[y][x] = ' ';
					break;
				}

				else if (Hmap2[y][x] == ')') {
					Hmap2[y][x] = ' ';

				}

				else if (Hmap2[y][x] == '0') {
					Hmap2[y][x] = '0';
				}

				else if (Hmap2[y][x] == ']') {
					Hmap2[y][x] = '(';
				}


				break;
					}

					if (spawnNum == 2) {
						x--;
						Hmap2[y][x] = '[';


			case '[':
				Hmap2[y][x] = ' ';
				x--;

				if (Hmap2[y][x] != '|' && Hmap2[y][x] != '#' && Hmap2[y][x] != ')' && Hmap2[y][x] != '@' && Hmap2[y][x] != '0' && Hmap2[y][x] != ']') {
					Hmap2[y][x] = '[';

					break;
				}
				else if (Hmap2[y][x] == '#') {
					Hhumancastlehealth2 = Hhumancastlehealth2 - 1;
					Hmap2[y][x] = ' ';
					break;
				}

				else if (Hmap2[y][x] == '@') {
					Hhumanhealth2 = Hhumanhealth2 - 1;
				}

				else if (Hmap2[y][x] == ')') {
					Hmap2[y][x] = ')';
				}

				else if (Hmap2[y][x] == '0') {
					Hmap2[y][x] = '[';
				}

				else if (Hmap2[y][x] == ']') {
					Hmap2[y][x] = ' ';
				}

					}

					if (spawnNum == 3) {
						x--;
						Hmap2[y][x] = 'O';


			case 'O':
				Hmap2[y][x] = ' ';
				x--;

				if (Hmap2[y][x] != '|' && Hmap2[y][x] != '#' && Hmap2[y][x] != '@' && Hmap2[y][x] != ')' && Hmap2[y][x] != '0' && Hmap2[y][x] != ']') {
					Hmap2[y][x] = 'O';
					break;
				}
				else if (Hmap2[y][x] == '@') {
					Hhumanhealth2 = Hhumanhealth2 - 1;
				}

				else if (Hmap2[y][x] == '#') {
					Hhumancastlehealth2 = Hhumancastlehealth2 - 1;
					Hmap2[y][x] = ' ';
					break;
				}

				else if (Hmap2[y][x] == ')') {
					Hmap2[y][x] = 'O';
				}

				else if (Hmap2[y][x] == '0') {
					Hmap2[y][x] = ' ';
				}

				else if (Hmap2[y][x] == ']') {
					Hmap2[y][x] = ']';
				}

				break;
					}

				}

				else
					break;

			}

		}

	}

}

void hardwallMove2() {
	int randomNum;
	int moveNum;
	for (int y = 0; y < 20; y++) {

		for (int x = 0; x < 70; x++) {

			randomNum = rand(); 


			switch (Hmap2[y][x]) {

			case 'l':

				if (randomNum % 2 != 0 && Hmap2[y - 1][x] != '_' && Hmap2[y - 1][x] != 'l' && Hmap2[y][x] != ']' && Hmap2[y][x] != '0' && Hmap2[y][x] != ')') { //moves up if the number is even

					Hmap2[y][x] = ' ';
					y--;
					Hmap2[y][x] = 'l';

				}

				

				if (randomNum % 2 == 0 && Hmap2[y + 1][x] != '_' && Hmap2[y][x] != ']' && Hmap2[y + 1][x] != 'l' && Hmap2[y][x] != '0' && Hmap2[y][x] != ')') { // moves down if the number is odd

					Hmap2[y][x] = ' ';

					y++;

					Hmap2[y][x] = 'l';

					moveNum = 0;

				}


				
			}
		}
	}
}

//////////////////////////////////////////////

bool Timer() {

	seconds = seconds + 1;
	if (seconds == 70) {
		seconds = 0;
		return true;
	}

	else
		return false;
}

bool ShootingTimer1() {

	static int shoot;
	shoot++;

	if (shoot == 40) {
		shoot = 0;
		return true;
	}

	else
		return false;

}

bool ShootingTimer2() {
	static int shoot;
	shoot++;

	if (shoot == 35) {
		shoot = 0;
		return true;
	}

	else
		return false;
}

bool ShootingTimer3() {
	static int shoot;
	shoot++;

	if (shoot == 25) {
		shoot = 0;
		return true;
	}

	else
		return false;
}

bool ShootingTimer4() {
	static int shoot;
	shoot++;

	if (shoot == 22) {
		shoot = 0;
		return true;
	}

	else
		return false;
}

bool ShootingTimer5() {
	static int shoot;
	shoot++;

	if (shoot == 18) {
		shoot = 0;
		return true;
	}

	else
		return false;
}

void titlescreen(vector<string> *s)
{
	system("cls");
	string line;

	ifstream file_("Title Screen.txt");

	if (file_.is_open())
	{
		getline(file_, line);
		while (getline(file_, line))
		{
			s->push_back(line);
		}
		file_.close();
	}
	else
		cout << "file error" << "\n";
}

void pause_menu(bool pause)
{
	unsigned int choice;
	while (pause == true)
	{
		cout << "\t\tPaused" << endl;
		cout << "Resume(1)";
		cin >> choice;

		switch (choice)
		{
		case 1:
			pause = false;
			break;

		}
	}
}

void gameoverscreen(vector<string> *s)
{
	system("cls");
	string line;
	ifstream file_("GameOver.txt");

	if (file_.is_open())
	{
		getline(file_, line);
		while (getline(file_, line))
		{
			s->push_back(line);
		}
		file_.close();
	}
	else
		cout << "file error" << "\n";
}

void game_over()		
{
	soundend.createSound(&soundSampleend.sound, "./GameOver.wav");
	soundend.playSound(soundSampleend, true);
	system("cls");

	gameoverscreen(&gameover_screen);

	for (unsigned int i = 0; i < gameover_screen.size(); i++)
	{
		cout << gameover_screen[i] << endl;
	}
}

void winScreen() {
	soundend.createSound(&soundSampleend.sound, "./Game Win(NEW).wav");
	soundend.playSound(soundSampleend, true);
		system("cls");
		system("color 0d");
		std::ifstream   file("WinScreenAscii.txt");
		std::string  paragraph;
		while (std::getline(file, paragraph))
		{
			// Print the line
			std::cout << paragraph << endl;
		}

}