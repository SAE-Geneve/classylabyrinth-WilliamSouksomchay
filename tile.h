#pragma once
#include <iostream>
#include <string>

class World {
public:
private:
	int Block_;
	int Empty_;
	int Enemy_;
	int Player_;
};
enum class TileType : char
{
	BLOCK = '#',
	EMPTY = '.',
	ENEMY = 'E',
	PLAYER = 'P',
};

class Commande {
public:
	int North_;
	int South_;
	int West_;
	int East_;
private:
	int Quit_;
	int Help_;
	int Attack_;
};
enum class CommandType
{
	QUIT,
	NORTH,
	SOUTH,
	EAST,
	WEST,
	ATTACK,
	HELP,
};

TileType get_tile_at_position(int x, int y);

class Monster {
public:
	void monster();
	Monster(const int healtPoint);
	Monster(int healt = 50, int attack = 10, int defence = 2);
	void PrintInfo() const;
private:
	int healtPoint_;
	int attack_;
};
struct Enemy 
{
	int x;
	int y;
	int health_points = 50;
	
	int attack = 10;
	int defence = 2;
	std::string name = "Gob";
};

void set_enemy(Enemy enemy, int x, int y);
Enemy get_enemy(int x, int y);

class Player {
public:
	void monster();
	Player(const int healtPoint);
	Player(int healt = 99, int attack = 20, int defence = 5);
	void PrintInfo() const;
private:
	int healtPoint_;
	int attack_;
};
struct Player 
{
	int x = 22;
	int y = 1;
	int health_points = 99;
	int max_health_points = 99;
	int attack = 20;
	int defence = 5;
	std::string name = "The Hero";
	int experience = 0;
	int health_regen = 5;
};

void set_player(Player player);
Player get_player();
