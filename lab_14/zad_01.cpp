#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

#include <stdio.h>      /* printf */
#include <stdlib.h>     /* strtol */



struct Player{

    char name[13]={};
    unsigned int wins, games, frags;
};

struct PlayerPoints{
    const Player* player;
    unsigned int points;
};

Player createPlayer(const char *input){
    Player result;
    const char *endname;
    endname = strchr(input, ';');

    strncpy(result.name, input, endname - input);

    int size = strlen(endname);
    char* temp = new char[size];
    memcpy(temp, endname, size);

    char* semicolnPos = temp-1;
    while((semicolnPos = strchr(semicolnPos+1, ';')))
    {
        //cout << semicolnPos << endl;
        *semicolnPos = ' ';

    }


    result.wins = strtol(temp, &semicolnPos, 10);
    result.games = strtol(semicolnPos, &semicolnPos, 10);
    result.frags = strtol(semicolnPos, nullptr, 10);

    delete[] temp;
    return result;
}

bool compare(const PlayerPoints &a, const PlayerPoints &b)
{
    return a.points > b.points;
}

void ranking(const Player players[], int size)
{
   PlayerPoints* player_indices = new PlayerPoints[size];
    for(int i=0; i<size; i++)
   {
       player_indices[i] = PlayerPoints{&players[i], players[i].frags + players[i].games + players[i].wins};
       // cout << player_indices[i].player->name << endl;
   }
    sort(player_indices, player_indices + size, compare);

   for(int i=0; i<size; i++)
    {
        cout << player_indices[i].player->name << " " << player_indices[i].points << endl;
   }
    delete[] player_indices;
}

void rankingv2(const char *str[], int size) {
    Player *players = new Player[4];
    for(int i=0; i<size; ++i)
        players[i] = createPlayer(str[i]);

    ranking(players, 4);

    delete[] players;
}

int main ()
{
    int size = 4;
    const char **str = new const char*[4];
    str[0] = new const char[50]{"MystiqueHero;1365;6890;15210"};
    str[1] = new const char[50]{"Frizz;5400;6200;11000"};
    str[2] = new const char[50]{"Ziemniak;9965;11000;73000"};
    str[3] = new const char[50]{"Evel00na;10;10;90"};

    rankingv2(str, 4);

    for(int i=0; i<size; ++i)
        delete[] str[i];
    delete[] str;
    return 0;
}

// int main ()
// {
//     Player players[4] = {
//         createPlayer("MystiqueHero;1365;6890;15210"),
//         createPlayer("Frizz;5400;6200;11000"),
//         createPlayer("Ziemniak;9965;11000;73000"),
//         createPlayer("Evel00na;10;10;90")
//     };
//     ranking(players, 4);
//     return 0;
// }
