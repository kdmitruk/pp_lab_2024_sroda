#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

#include <stdio.h>      /* printf */
#include <stdlib.h>     /* strtol */

struct Player{

    char name[13]={};
    unsigned int wins, games, frags;
};

Player createPlayer(const char *input){
    Player result;
    const char *endname;
    endname = strchr(input, ';');
    cout << endname - input << endl;
    strncpy(result.name, input, endname - input);
    cout<<result.name;
    int size = strlen(endname);
    char* temp = new char[size];
    memcpy(temp, endname, size);
    cout << endl;
    char* semicolnPos = temp-1;
    while((semicolnPos = strchr(semicolnPos+1, ';')))
    {
        //cout << semicolnPos << endl;
        *semicolnPos = ' ';

    }
    cout << temp;


    delete[] temp;
    return result;
}

int main ()
{
    createPlayer("MystiqueHero;1365;6890;15210");
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
