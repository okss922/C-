#ifndef __UI_H__
#define __UI_H__

typedef struct pos
{
    int x;
    int y;
}pos;


enum Shapetype
{
    SHAPE1 = 0,
    SHAPE2,
    SHAPE3,
    SHAPE4,
    SHAPE5,
    SHAPE6
};
struct UI {
    // 边缘宽度
    int marginTop;
    int marginLeft;

    // 游戏区域的个数
    int gameWidth;
    int gameHeight;

    // 整个窗口大小宽度
    int windowWidth;
    int windowHeight;

    char *Block;    // 显示块
    int blockWidth;     // 每个块的宽度，注意，上面几个块的宽度要相等，否则就对不齐了
    int *_a;
};
struct Shape
{
    pos* postion;
    enum Shapetype shapetype;
};
// UI 初始化
struct UI * UIInitialize(int width, int height);
void UICleanBlock(const struct UI *pUI, struct Shape*shape);

int InsertScore(struct UI *pUI);
// 显示游戏向导
void UIDisplayWizard(const struct UI *pUI);
// 显示游戏整体，包括墙、右边的信息
void UIDisplayGameWindow(const struct UI *pUI, int score);

void _CoordinatePosAtXY(const struct UI *pUI, int x,int y);

void _ResetCursorPosition(const struct UI *pUI);

void UIDisplayBlock(const struct UI *pUI, struct Shape *shape);
// 清空x，y处的显示块
void UICleanBlockAtY(const struct UI *pUI, int y);
// 显示分数信息
void UIDisplayScore(const struct UI *pUI, int score);
// 销毁 UI 资源
void UIDeinitialize(struct UI *pUI);
int IsGameOver(const struct UI*pUI);
int IsRightHaveShape(const int *a, struct Shape *shape,int width);
int IsLeftHaveShape(const int *a, struct Shape*shape, int width);
#endif
#pragma once
#ifndef GAME
#define GAME
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<windows.h>

enum Status
{
    QUIT,
    OVER,
    GOOD
}; 
enum Direction
{
    UP,
    DOWN,
    LEFT,
    RIGHT
};


struct Game
{
    int width;
    int height;
    int score;
    enum Direction direction;
    enum Status status;
    struct Shape *shape;
    int sleeptime;
    int twist;
};
struct Game *CreateGame();
void StartGame(struct Game *pGame);
void DestoryGame(struct Game *pGame);
#endif // !Game
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// 移动光标到x，y处，注意，这里是相对整个屏幕的，而不是游戏盘的
static void _SetPos(int x, int y);
// 显示墙
static void _DisplayWall(const struct UI *pUI);
// 显示右侧信息
static void _DisplayDesc(const struct UI *pUI);
// 将游戏盘的x，y坐标转换为相对整个屏幕的x，y
void _CoordinatePosAtXY(const struct UI *pUI, int x, int y);
// 重置光标到屏幕下方，主要是为了显示的美观
void _ResetCursorPosition(const struct UI *pUI);
//数组整体下移
void GetDown(int i, int *a, int width);
//显示，清理图形
static void  _DisplayShape(const struct UI *pUI, struct Shape*shape);
static void  _ClearShape(const struct UI *pUI, struct Shape *shape);

//设置单块颜色
void SetColor(unsigned short ForeColor, unsigned short BackGroundColor)
{
    //forecolor 字体颜色backgroundcolor底色
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon, (ForeColor % 16) | (BackGroundColor % 16 * 16));
}
struct UI * UIInitialize(int width, int height)
{
    const int left = 2;
    const int top = 2;
    const int blockWidth = 2;   // @杨祥钰指出
    const int descWidth = 50;

    struct UI *pUI = (struct UI *)malloc(sizeof(struct UI));
    pUI->gameWidth = width;
    pUI->gameHeight = height;
    pUI->marginLeft = left;
    pUI->marginTop = top;
    pUI->windowWidth = left + (width + 2) * blockWidth + descWidth;
    pUI->windowHeight = top + height + 2 + 3;
    pUI->Block = "█";
    pUI->blockWidth = strlen(pUI->Block);
    pUI->_a = (int *)malloc(sizeof(int)*(pUI->gameHeight)*(pUI->gameWidth));
    memset(pUI->_a, 0, sizeof(int)*(pUI->gameHeight)*(pUI->gameWidth));
    char modeCommand[1024];
    sprintf(modeCommand, "mode con cols=%d lines=%d", pUI->windowWidth, pUI->windowHeight);
    system(modeCommand);

    return pUI;
} 

void UIDisplayWizard(const struct UI *pUI)
{
    int i;
    const char *messages[3] = {
        "欢迎来到俄罗斯方块小游戏",
        "用↑旋转， ←→移动，↓加速。",
        "加速将能得到更高的分数。"
    };

    i = 0;
    _SetPos(pUI->windowWidth / 2 - strlen(messages[i]) / 2, pUI->windowHeight / 2);
    printf("%s\n", messages[i]);
    _SetPos(pUI->windowWidth / 2 - strlen(messages[i]) / 2, pUI->windowHeight / 2 + 2);
    system("pause");
    system("cls");

    i = 1;
    _SetPos(pUI->windowWidth / 2 - strlen(messages[i]) / 2, pUI->windowHeight / 2);
    printf("%s\n", messages[i]);

    i = 2;
    _SetPos(pUI->windowWidth / 2 - strlen(messages[i]) / 2, pUI->windowHeight / 2 + 2);
    printf("%s\n", messages[i]);
    _SetPos(pUI->windowWidth / 2 - strlen(messages[i]) / 2, pUI->windowHeight / 2 + 4);
    system("pause");
    system("cls");
}

void UIDisplayGameWindow(const struct UI *pUI, int score)
{
    _DisplayWall(pUI);
    UIDisplayScore(pUI, score);
    _DisplayDesc(pUI);

    _ResetCursorPosition(pUI);
}
//显示图形块
void UIDisplayBlock(const struct UI *pUI,struct Shape* shape)
{
    //不同形状
    _DisplayShape(pUI, shape);
    _ResetCursorPosition(pUI);
}
//清理一行的块
void UICleanBlockAtY(const struct UI *pUI, int y)
{
        _CoordinatePosAtXY(pUI, 0, y);
        int i;
        for (i = 0; i < pUI->gameWidth; i++) {
            printf("  ");
        }

    _ResetCursorPosition(pUI);
}
//清理图形块
void UICleanBlock(const struct UI *pUI,struct Shape*shape) 
{
    _ClearShape(pUI, shape);
    _ResetCursorPosition(pUI);
}
void UIDisplayScore(const struct UI *pUI, int score)

{
    int blockWidth = strlen(pUI->Block);
    int left = pUI->marginLeft + (pUI->gameWidth + 2) * blockWidth + 2;
    _SetPos(left, pUI->marginTop + 8);
    printf("得分: %3d", score);

    _ResetCursorPosition(pUI);
}

void UIDeinitialize(struct UI *pUI)
{
    free(pUI);
}

static void _DisplayWall(const struct UI *pUI)
{
    int left = pUI->marginLeft;
    int top = pUI->marginTop;
    int width = pUI->gameWidth;
    int height = pUI->gameHeight;
    int blockWidth = pUI->blockWidth;
    int i;

    // 上
    _SetPos(left, top);
    for (i = 0; i < width + 2; i++) {
        printf("%s", pUI->Block);
    }

    // 下
    _SetPos(left, top + 1 + height);
    for (i = 0; i < width + 2; i++) {
        printf("%s", pUI->Block);
    }

    // 左
    for (i = 0; i < height + 2; i++) {
        _SetPos(left, top + i);
        printf("%s", pUI->Block);
    }

    // 右
    for (i = 0; i < height + 2; i++) {
        _SetPos(left + (1 + width) * blockWidth, top + i);
        printf("%s", pUI->Block);
    }
}

static void _DisplayDesc(const struct UI *pUI)
{
    int left = pUI->marginLeft + (pUI->gameWidth + 2) * pUI->blockWidth + 2;
    const char *messages[] = {
        "用↑旋转。",
        "用↓加速。",
        "用 ← → 分别控制方块的移动。",
        "ESC 退出游戏, SPACE 暂停游戏。",
    };
    int i;

    for (i = 0; i < sizeof(messages) / sizeof(char *); i++) {
        _SetPos(left, pUI->marginTop + 10 + i);
        printf("%s\n", messages[i]);
    }
}

static void _SetPos(int x, int y)
{
    COORD position = { x, y };
    HANDLE hOutput = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleCursorPosition(hOutput, position);
}

void _CoordinatePosAtXY(const struct UI *pUI, int x, int y)
{
    _SetPos(pUI->marginLeft + (1 + x) * pUI->blockWidth,
        pUI->marginTop + 1 + y);
}
void _ResetCursorPosition(const struct UI *pUI)
{
    _SetPos(0, pUI->windowHeight - 1);
}
//显示一行
static void  _DisplayY(const struct UI *pUI,int j )
{
    char *s = pUI->Block;
    int i = 0;
    int coust = 0;
    for (; j > 0; j--) {
        for (i = 0; i < pUI->gameWidth; i++)
        {
            int b = pUI->_a[j*pUI->gameWidth + i];
            _CoordinatePosAtXY(pUI, i, j);
            if (b == 0)
            {
                SetColor(7, 0);
                printf("  ");
            }
            else {
                coust = 1;
                SetColor(b, 0);
                printf(pUI->Block);
                SetColor(7, 0);
            }

        }
        if (coust == 0)break;
    }
}
static void  _DisplayShape(const struct UI *pUI,struct Shape*shape)
{
    SetColor(shape->shapetype+1, 0);
    char *s = pUI->Block;
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        _CoordinatePosAtXY(pUI, shape->postion[i].x, shape->postion[i].y);
        pUI->_a[shape->postion[i].x + shape->postion[i].y*pUI->gameWidth] = shape->shapetype + 1;
        printf(pUI->Block);
    }
    SetColor(7, 0);
}
static void  _ClearShape(const struct UI *pUI, struct Shape *shape)
{
    SetColor(7, 0);
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        pUI->_a[shape->postion[i].x + shape->postion[i].y*pUI->gameWidth] = 0;
        _CoordinatePosAtXY(pUI, shape->postion[i].x, shape->postion[i].y);
        printf("  ");
    }
}
//判断游戏结束
int IsGameOver(const struct UI*pUI)
{
    int x = pUI->gameWidth;
    int i = 0;
    for (i = 0; i < pUI->gameWidth; i++)
    {
        if (pUI->_a[i + x] != 0)
            return 1;
    }
    return 0;
}
//左边有没有图形是否可以左移
int IsRightHaveShape(const int *a, struct Shape *shape, int width)
{
    if (a[shape->postion[3].x + 1 + shape->postion[3].y*width] != 0 ||
        a[shape->postion[2].x + 1 + shape->postion[2].y*width] != 0 || 
        a[shape->postion[1].x + 1 + shape->postion[1].y*width] != 0 ||
        a[shape->postion[0].x + 1 + shape->postion[0].y*width] != 0 )
        return 1;
    return 0;
}
//是否可以右移
int IsLeftHaveShape(const int *a,struct Shape*shape,int width)
{
    if (a[shape->postion[3].x - 1 + shape->postion[3].y*width] != 0 ||
        a[shape->postion[2].x - 1 + shape->postion[2].y*width] != 0 ||
        a[shape->postion[1].x - 1 + shape->postion[1].y*width] != 0 ||
        a[shape->postion[0].x - 1 + shape->postion[0].y*width] != 0)
        return 1;
    return 0;
}
//加分下移显示
int InsertScore(struct UI *pUI)
{
    int i = 0;
    int cur = 0;
    for (i = pUI->gameHeight-1; i >0; i--)
    {
        int j = 0;
        for (j = 0; j < pUI->gameWidth; j++)
        {
            if (pUI->_a[i*pUI->gameWidth + j] == 0)
                break;
        }
        if (j == pUI->gameWidth)
        {
            cur++;
            UICleanBlockAtY(pUI,i);
            GetDown(i, pUI->_a, pUI->gameWidth);
            _DisplayY(pUI, i);
            i++;
        }
    }
    return cur;
}
void GetDown(int i,int *a,int width)
{
    int j = 0;
    for (j = i; j > 0; j--)
    {
        int m = 0;
        for (m = 0; m < width; m++)
        {
            a[j*width + m] = a[(j - 1)*width + m];
        }
    }
}
#pragma once
//暂停
static void _Pause();
//获取方向
static void _HandleDirective(struct Game *pGame);
//产生新图形
static void ChanceShape(struct Game *pGame);
//确定新图形的样子
static void IsShape(int twist,struct Shape* shape);


struct Game *CreateGame()
{
    struct Game *pGame = (struct Game *)malloc(sizeof(struct Game));
    pGame->width = 10;
    pGame->height = 20;
    pGame->score = 0;
    pGame->direction = DOWN;
    pGame->status = GOOD;
    pGame->shape = (struct Shape*)malloc(sizeof(struct Shape));
    pGame->shape->postion = (pos *)malloc(sizeof(pos) * 4);
    pGame->shape->postion[0].x = 3;
    pGame->shape->postion[0].y = 0;
    pGame->shape->shapetype = SHAPE1;
    pGame->sleeptime = 500;
    pGame->twist = 0;
    return pGame;
}
static void ChanceShape(struct Game *pGame)
{
    pGame->sleeptime = 500;
    pGame->shape->shapetype=rand() % 6;//0-5
    //pGame->shape->shapetype = 1;//0-5
    pGame->shape->postion[0].x = 3;
    pGame->shape->postion[0].y = 0;
    IsShape(pGame->twist,pGame->shape);
}
static void IsShape(int twist,struct Shape* shape)
{
    int x = shape->postion[0].x;
    int y = shape->postion[0].y;
        switch (shape->shapetype)
        {
        case SHAPE1:
        {
            //o o
            //o o
            shape->postion[1].x = x + 1;
            shape->postion[1].y = y;
            shape->postion[2].x = x;
            shape->postion[2].y = y + 1;
            shape->postion[3].x = x + 1;
            shape->postion[3].y = y + 1;
            break;
        }
        case SHAPE2:
        {
            if (twist == 0)
            {
                //o o o
                //o
                shape->postion[1].x = x + 1;
                shape->postion[1].y = y;
                shape->postion[2].x = x + 2;
                shape->postion[2].y = y;
                shape->postion[3].x = x;
                shape->postion[3].y = y + 1;
            }
            else if (twist == 3)
            {
                //0
                //0
                //0 0
                shape->postion[1].x = x;
                shape->postion[1].y = y + 1;
                shape->postion[2].x = x;
                shape->postion[2].y = y + 2;
                shape->postion[3].x = x + 1;
                shape->postion[3].y = y + 2;
            }
            else if (twist == 2)
            {
                //    0
                //0 0 0
                shape->postion[1].x = x;
                shape->postion[1].y = y + 1;
                shape->postion[2].x = x - 1;
                shape->postion[2].y = y + 1;
                shape->postion[3].x = x - 2;
                shape->postion[3].y = y + 1;
            }
            else if (twist == 1)
            {
                //0 0
                //  0
                //  0
                shape->postion[1].x = x + 1;
                shape->postion[1].y = y;
                shape->postion[2].x = x + 1;
                shape->postion[2].y = y + 1;
                shape->postion[3].x = x + 1;
                shape->postion[3].y = y + 2;
            }
            break;
        }
        case SHAPE3:
        {
            if (twist == 0 || twist == 2)
            {//o o o o
                shape->postion[1].x = x + 1;
                shape->postion[1].y = y;
                shape->postion[2].x = x + 2;
                shape->postion[2].y = y;
                shape->postion[3].x = x + 3;
                shape->postion[3].y = y;
            }
            else if (twist == 1 || twist == 3)
            {
                //0
                //0
                //0
                //0
                shape->postion[1].x = x;
                shape->postion[1].y = y + 1;
                shape->postion[2].x = x;
                shape->postion[2].y = y + 2;
                shape->postion[3].x = x;
                shape->postion[3].y = y + 3;
            }
            break;

        }
        case SHAPE4:
        {
            if (twist == 0 || twist == 2)
            {
                //o
                //o
                //o
                //o
                shape->postion[1].x = x;
                shape->postion[1].y = y + 1;
                shape->postion[2].x = x;
                shape->postion[2].y = y + 2;
                shape->postion[3].x = x;
                shape->postion[3].y = y + 3;
            }
            else if (twist == 1 || twist == 3)
            {
                //o o o o
                shape->postion[1].x = x + 1;
                shape->postion[1].y = y;
                shape->postion[2].x = x + 2;
                shape->postion[2].y = y;
                shape->postion[3].x = x + 3;
                shape->postion[3].y = y;
            }
            break;
        }
        case SHAPE5:
        {
            if (twist == 0)
            {
                //o o o
                //  o
                shape->postion[1].x = x + 1;
                shape->postion[1].y = y;
                shape->postion[2].x = x + 2;
                shape->postion[2].y = y;
                shape->postion[3].x = x + 1;
                shape->postion[3].y = y + 1;
            }
            else if (twist == 1)
            {
                //  0
                //0 0
                //  0
                shape->postion[1].x = x - 1;
                shape->postion[1].y = y + 1;
                shape->postion[2].x = x;
                shape->postion[2].y = y + 1;
                shape->postion[3].x = x;
                shape->postion[3].y = y + 2;
            }
            else if (twist == 2)
            {
                //  o
                //o o o
                shape->postion[1].x = x - 1;
                shape->postion[1].y = y + 1;
                shape->postion[2].x = x;
                shape->postion[2].y = y + 1;
                shape->postion[3].x = x + 1;
                shape->postion[3].y = y + 1;
            }
            else if (twist == 3)
            {
                //0
                //0 0
                //0
                shape->postion[1].x = x;
                shape->postion[1].y = y + 1;
                shape->postion[2].x = x + 1;
                shape->postion[2].y = y + 1;
                shape->postion[3].x = x;
                shape->postion[3].y = y + 2;
            }
            break;
        }
        case SHAPE6:
        {
            if (twist == 0 || twist == 2)
            {
                //o o
                //  o o
                shape->postion[1].x = x + 1;
                shape->postion[1].y = y;
                shape->postion[2].x = x + 1;
                shape->postion[2].y = y + 1;
                shape->postion[3].x = x + 2;
                shape->postion[3].y = y + 1;
            }
            else if (twist == 1 || twist == 3)
            {   //   0
                // 0 0
                // 0 
                shape->postion[1].x = x;
                shape->postion[1].y = y + 1;
                shape->postion[2].x = x - 1;
                shape->postion[2].y = y + 1;
                shape->postion[3].x = x - 1;
                shape->postion[3].y = y + 2;
            }

            break;
        }
        default:
            break;
        }
}
static int CanGoRight(int *a,struct Shape *shape,int width) 
{
    if (shape->postion[0].x + 1 >= width||shape->postion[1].x + 1 >= width||
        shape->postion[2].x + 1 >= width||shape->postion[3].x + 1 >= width)
        return 1;
    if (IsRightHaveShape(a, shape,width) == 1)
        return 1;
    return 0;
}
static int IsRightWell(int *a, struct Shape *shape, int width)
{
    if (shape->postion[0].x + 1 > width || shape->postion[1].x + 1 > width ||
        shape->postion[2].x + 1 > width || shape->postion[3].x + 1 > width)
        return 1;
    if (IsRightHaveShape(a, shape, width) == 1)
        return 1;
    return 0;
}
int CanGoLift(int *a,struct Game*pGame)
{
    if (pGame->shape->postion[0].x > 0 &&
        pGame->shape->postion[1].x > 0 &&
        pGame->shape->postion[2].x > 0 &&
        pGame->shape->postion[3].x > 0 &&
        IsLeftHaveShape(a, pGame->shape, pGame->width) == 0)
        return 0;
    else return 1;
}
int IsLiftWell(int *a, struct Game*pGame)
{
    if (pGame->shape->postion[0].x >= 0 &&
        pGame->shape->postion[1].x >= 0 &&
        pGame->shape->postion[2].x >= 0 &&
        pGame->shape->postion[3].x >= 0 &&
        IsLeftHaveShape(a, pGame->shape, pGame->width) == 0)
        return 0;
    else return 1;
}
static void GoNextPos(int *a,struct Game *pGame)
{
    if (pGame->direction == UP)
    {
        int cur= (pGame->twist + 1) % 4;
            IsShape(cur, pGame->shape);
            if (IsLiftWell(a, pGame) == 0 && IsRightWell(a,pGame->shape,pGame->width)==0)
            {
                pGame->twist = cur;
            }
            else {
                pGame->direction = DOWN;
            }
        pGame->sleeptime = 500;
    }
    else if (pGame->direction==LEFT)
    {
        if(CanGoLift(a,pGame) == 0)
            pGame->shape->postion[0].x--;
        else pGame->direction = DOWN;
        pGame->sleeptime = 500;
        IsShape(pGame->twist, pGame->shape);

    }
    else if (pGame->direction==RIGHT)
    {
        if(CanGoRight(a,pGame->shape,pGame->width)==0)
            pGame->shape->postion[0].x++;
        else pGame->direction = DOWN;
        pGame->sleeptime = 500;
        IsShape(pGame->twist, pGame->shape);

    }
    if (pGame->direction == DOWN)
    {
        pGame->shape->postion[0].y++;
        IsShape(pGame->twist, pGame->shape);

    }
    pGame->direction = DOWN;
}
static int IsShapeWELL(struct Game *pGame, int *a)
{
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        if (pGame->shape->postion[i].y + 1 >= pGame->height)
            return 1;
    }
    for (i = 0; i < 4; i++)
    {
        int x = pGame->shape->postion[i].x;
        int y = pGame->shape->postion[i].y;
        int j = 0;
        for (j = 0; j < 4; j++)
        {
            if (i == j)
                continue;
            if (x == pGame->shape->postion[j].x && y + 1 == pGame->shape->postion[j].y)
                break;
        }
        if (j==4 && a[x + (y + 1)*pGame->width] != 0 )
            return 1;
    }
    return 0;
}

static int ThisShapeDown(struct Game *pGame,int *a)
{
    int x = pGame->shape->postion[0].x;
    int y = pGame->shape->postion[0].y;
    if (IsShapeWELL(pGame, a) == 1)
        return 1;
    return 0;
}
void StartGame(struct Game *pGame)
{
    struct UI* UI = UIInitialize(pGame->width, pGame->height);
    UIDisplayWizard(UI);
    UIDisplayGameWindow(UI, 0);
    ChanceShape(pGame);
    while (1) {
        if (IsGameOver(UI) == 1)
        {
            break;
        }
        if (GetAsyncKeyState(VK_ESCAPE)) {
            break;
        }
        else if (GetAsyncKeyState(VK_SPACE)) {
            _Pause();
        }
        UIDisplayBlock(UI, pGame->shape);
        _HandleDirective(pGame);

        Sleep(pGame->sleeptime);
        if (ThisShapeDown(pGame,UI->_a) ==1)
        {
            pGame->score+=10*InsertScore(UI);
            UIDisplayScore(UI, pGame->score);
            ChanceShape(pGame);
        }
        else
        {
            UICleanBlock(UI, pGame->shape);
        }
        GoNextPos(UI->_a,pGame);
    }
    _CoordinatePosAtXY(UI,3, 10);
    printf("游戏结束");
    _ResetCursorPosition(UI);
    UIDeinitialize(UI);
}
void DestoryGame(struct Game *pGame)
{
}

static void _Pause()
{
    while (1)
    {
        Sleep(300);
        if (GetAsyncKeyState(VK_SPACE))
        {
            break;
        }
    }
}
static void _HandleDirective(struct Game *pGame)
{
    if (GetAsyncKeyState(VK_UP)) {
        pGame->direction = UP;
    }
    else if (GetAsyncKeyState(VK_DOWN) ) {
        pGame->direction = DOWN;
        if(pGame->sleeptime>100)
        pGame->sleeptime -= 100;
    }
    else if (GetAsyncKeyState(VK_LEFT)) {
        pGame->direction = LEFT;
    }
    else if (GetAsyncKeyState(VK_RIGHT)) {
        pGame->direction = RIGHT;
    }
}
#include<time.h>

int main()
{
    srand((unsigned int) time(NULL));
    struct Game* game;
    game=CreateGame();
    StartGame(game);
    system("pause");
}
