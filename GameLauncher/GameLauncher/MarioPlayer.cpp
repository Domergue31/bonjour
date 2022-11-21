#include "MarioPlayer.h"
#include "Utils.h"
#include "Mario.h"

int MarioPlayer::X()
{
    return x;
}

int MarioPlayer::Y()
{
    return y;
}

void MarioPlayer::SetX(const int _x)
{
    x = _x;
}

void MarioPlayer::SetY(const int _y)
{
    y = _y;
}

bool MarioPlayer::IsDead()
{
    return isDead;
}

void MarioPlayer::SetDead(const bool _isDead)
{
    isDead = _isDead;
}

bool MarioPlayer::IsShort()
{
    return isShort;
}

void MarioPlayer::SetIsShort(const bool _isShort)
{
    isShort = _isShort;
}

void MarioPlayer::Jump()
{
    if (y > 3)
    {
        if (IsFloor())
            y -= 5;
    }
}

void MarioPlayer::Left()
{
    if (x > 0)
        x -= 3;
}

void MarioPlayer::Rigth()
{
    if (x < SCREEN_WIDTH - 5)
        x += 3;
}

bool MarioPlayer::IsFloor()
{
    if (y == 22)
        return true;
    return false;
}

void MarioPlayer::Draw()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            Utils::SetCursorPosition(j + 2 + x, i + y);
            std::cout << mario[i][j];
        }
    }
}

void MarioPlayer::Erase()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            Utils::SetCursorPosition(j + 2 + x, i + y);
            std::cout << " ";
        }
    }
}

void MarioPlayer::Update()
{
    if (!IsFloor())
    y += 1;
}

