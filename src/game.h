#pragma once
#include <raylib.h>
#include "cell.h"
class Game{
    public:
        Game();
        void run();
        Cell board[8][8];
        Piece pieces[32];
    private:
        void init();
        void update();
        void draw();
        void close();
};

Game::Game(){
    init();
}
void Game::init(){
    const int screenWidth = 560;
    const int screenHeight = 560;
    InitWindow(screenWidth, screenHeight, "Chess");
    SetTargetFPS(60);
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            Color color;
            if ((i+j)%2 == 0)
            {
                color = BEIGE;
            }else
            {
                color = BROWN;
            }
            
            board[i][j] = Cell(color, i*70, j*70, 70, 70);
        }
    }
    Image whiteBishopImage = LoadImage("assets/white_bishop.png");
    Image whiteKingImage = LoadImage("assets/white_king.png");
    Image whiteKnightImage = LoadImage("assets/white_knight.png");
    Image whitePawnImage = LoadImage("assets/white_pawn.png");
    Image whiteQueenImage = LoadImage("assets/white_queen.png");
    Image whiteRookImage = LoadImage("assets/white_rook.png");
    Image blackBishopImage = LoadImage("assets/black_bishop.png");
    Image blackKingImage = LoadImage("assets/black_king.png");
    Image blackKnightImage = LoadImage("assets/black_knight.png");
    Image blackPawnImage = LoadImage("assets/black_pawn.png");
    Image blackQueenImage = LoadImage("assets/black_queen.png");
    Image blackRookImage = LoadImage("assets/black_rook.png");
    pieces[0] = Piece(whiteBishopImage);
    pieces[1] = Piece(whiteBishopImage);
    pieces[2] = Piece(whiteKingImage);
    pieces[3] = Piece(whiteKnightImage);
    pieces[4] = Piece(whiteKnightImage);
    pieces[5] = Piece(whitePawnImage);
    pieces[6] = Piece(whitePawnImage);
    pieces[7] = Piece(whitePawnImage);
    pieces[8] = Piece(whitePawnImage);
    pieces[9] = Piece(whitePawnImage);
    pieces[10] = Piece(whitePawnImage);
    pieces[11] = Piece(whitePawnImage);
    pieces[12] = Piece(whitePawnImage);
    pieces[13] = Piece(whiteQueenImage);
    pieces[14] = Piece(whiteRookImage);
    pieces[15] = Piece(whiteRookImage);
    pieces[16] = Piece(blackBishopImage);
    pieces[17] = Piece(blackBishopImage);
    pieces[18] = Piece(blackKingImage);
    pieces[19] = Piece(blackKnightImage);
    pieces[20] = Piece(blackKnightImage);
    pieces[21] = Piece(blackPawnImage);
    pieces[22] = Piece(blackPawnImage);
    pieces[23] = Piece(blackPawnImage);
    pieces[24] = Piece(blackPawnImage);
    pieces[25] = Piece(blackPawnImage);
    pieces[26] = Piece(blackPawnImage);
    pieces[27] = Piece(blackPawnImage);
    pieces[28] = Piece(blackPawnImage);
    pieces[29] = Piece(blackQueenImage);
    pieces[30] = Piece(blackRookImage);
    pieces[31] = Piece(blackRookImage);
    for (int i = 0; i < 8; i++)
    {
        board[i][1].setPiece(&pieces[i+5]);
        board[i][6].setPiece(&pieces[i+21]);
    }
    board[0][0].setPiece(&pieces[14]);
    board[1][0].setPiece(&pieces[3]);
    board[2][0].setPiece(&pieces[0]);
    board[3][0].setPiece(&pieces[2]);
    board[4][0].setPiece(&pieces[13]);
    board[5][0].setPiece(&pieces[1]);
    board[6][0].setPiece(&pieces[4]);
    board[7][0].setPiece(&pieces[15]);
    board[0][7].setPiece(&pieces[30]);
    board[1][7].setPiece(&pieces[19]);
    board[2][7].setPiece(&pieces[16]);
    board[3][7].setPiece(&pieces[18]);
    board[4][7].setPiece(&pieces[29]);
    board[5][7].setPiece(&pieces[17]);
    board[6][7].setPiece(&pieces[20]);
    board[7][7].setPiece(&pieces[31]);
}

void Game::run(){
    while (!WindowShouldClose())
    {
        BeginDrawing();
        update();
        draw();
        EndDrawing();
    }
    close();
}

void Game::update(){
}

void Game::draw(){
    ClearBackground(RAYWHITE);
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            board[i][j].draw();
        }
        
    }
    
}

void Game::close(){
    CloseWindow();
}