#include "FlappYbird2.h"
#include "Utils.h"
#include "FappyMap.h"

FlappYbird2::FlappYbird2()
{
    map = new FlappyMap();
}

FlappYbird2::~FlappYbird2()
{
}

void FlappYbird2::Draw()
{
    map->Draw();
}

void FlappYbird2::OnStart()
{
    Utils::SetCursor(false,0);
    Utils::ClearConsole(); 
    map->Draw();
}

void FlappYbird2::OnUpdate()
{
    while (true)//TODO change true 
    {

    }
}

void FlappYbird2::PlayerTurn(const bool& _isPlayerTwo, int& _currentMove, int& _moves)
{
}

void FlappYbird2::OnEnd()
{
    Utils::SetCursor(true, 20);
}

void FlappYbird2::DisplayMenu()
{
    

}

std::string FlappYbird2::GameName() const
{
    return "FlappyBird !";
}

std::string FlappYbird2::GameDescription() const
{
    return "Flappy Bird Game !";
}
