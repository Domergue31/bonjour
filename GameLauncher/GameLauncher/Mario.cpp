#include "Mario.h"
#include "MarioMap.h"
#include "MarioPlayer.h"
#include "Utils.h"

Mario::Mario()
{
    map = new MarioMap();
    player = new MarioPlayer();
}

Mario::~Mario()
{
    delete map;
    map = nullptr;
    delete player;
    player = nullptr;
}

void Mario::Draw() const
{
    player->Draw();
}

void Mario::Clear() const
{
    player->Erase();
}

void Mario::Init()
{
    isQuiting = false;
    player->SetDead(false);
    player->SetX(6);
    player->SetY(22);
}

void Mario::OnStart()
{
    Utils::SetWindowSize(SCREEN_WIDTH * 10, SCREEN_HEIGHT * 20);
    Utils::ClearConsole();
    Utils::SetCursor(false, 0);
    Init();
    map->Draw();
}

void Mario::OnUpdate()
{
    while (!player->IsDead() && !isQuiting)
    {
        const char _input = Utils::CinNoBlock();
        /*if (_input == SPACE) player->Jump();
        else if (_input == ESCAPE)
        {
            isQuiting = true;
            continue;
        }*/
        switch (_input)
        {
        case SPACE:
        {
            player->Jump();
            break;
        }
        case ESCAPE:
        {
            isQuiting = true;
            break;
        }
        case LEFT:
        {
            player->Left();
            break;
        }
        case RIGHT:
        {
            player->Rigth();
            break;
        }
        default:
        {
            break;
        }
        }
        Draw();

        


        Utils::Sleep(100);
        Clear();
        player->Update();


    }
}

void Mario::OnEnd()
{
}

void Mario::DisplayMenu()
{

}

std::string Mario::GameName() const
{
    return "Mario Bros";
}

std::string Mario::GameDescription() const
{
    return "C'est le jeux Mario Bros";
}
