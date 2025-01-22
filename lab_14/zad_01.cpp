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

int main ()
{
    Player players[4] = {
        createPlayer("MystiqueHero;1365;6890;15210"),
        createPlayer("Frizz;5400;6200;11000"),
        createPlayer("Ziemniak;9965;11000;73000"),
        createPlayer("Evel00na;10;10;90")
    };
    ranking(players, 4);
    // char szNumbers[] = "MystiqueHero;1365;6890;15210";
    // char * pEnd;
    // long int li1, li2, li3, li4;
    // li1 = strtol (szNumbers,&pEnd,10);
    // li2 = strtol (pEnd,&pEnd,16);
    // li3 = strtol (pEnd,&pEnd,2);
    // li4 = strtol (pEnd,NULL,0);
    // printf ("The decimal equivalents are: %ld, %ld, %ld and %ld.\n", li1, li2, li3, li4);
    return 0;
}
