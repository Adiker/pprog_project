#pragma once

class Game
{
    int timer = 0; // pokazuje ile min�o czasu w sekundach od startu meczu
    int points; // og�lne pkt wszystkie
    int roundPoints; //Max pkt za rund�
    int diff; //trudno��

public:
    Game();
    ~Game();
    void Update();

};

