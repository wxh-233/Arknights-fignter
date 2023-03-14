#include<bits/stdc++.h>
#include<Windows.h>
#include"tool/tool.h"
#include"tool/game.h"
#include"cards/Arkcards.h"
using namespace std;
using namespace tool;
using namespace game;
using namespace Arkcards;
void chose_gamemode()
{
	cls;
	int chose=0;
	printf("1.PVP\n");
	printf("2.PVE\n");
	cin >> chose;
	if (chose == 1)
	{
		chose1;
		int player_number=0;
		printf("请输入玩家数\n");
		cin >> player_number;
		if (player_number < 2)
		{
			printf("???\n")
			S;
			goto chose1;
		}
		/*
		cls;
		string names;
		for(int i=1;i<=player_number;i++)
		{
			printf("请输入玩家%d名字,&names)
			search()
		}
		//找存档
		*/
		play_start(player_number);
	}
	if (chose == 2)
	{

	}
	chose_gamemode();
}
int main()
{
	chose_gamemode();
	return 0;
}
