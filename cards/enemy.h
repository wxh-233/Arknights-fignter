#pragma once
#include<bits/stdc++.h>
#include<Windows.h>
#include"..\tool\tool.h"
using namespace std;
namespace enemy {
	struct enemy_cards {
		int kip;
	};
	struct enemy{
		string name;
		int Hp;
		int kip;
		int wf;
		int fw;
		enemy_cards ecard[10];
	}enemy[105];
	start_make_enemy()
	{
		enemy[1].name = "原石虫";
		enemy[1].Hp = 25;
		enemy[1].wf = 1;
		enemy[1].fw = 10;
		enemy[1].kip = 10;
	}
}
