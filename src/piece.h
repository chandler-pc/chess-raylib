#pragma once
#include <raylib.h>

class Piece{
    private:
        Image pieceImage;
        Texture2D texture;
    public:
        Piece();
        Piece(Image pieceImage);
        void draw(int x, int y);
};

Piece::Piece(){
    this->pieceImage = Image();
    texture = LoadTextureFromImage(pieceImage);
}

Piece::Piece(Image pieceImage){
    this->pieceImage = pieceImage;
    texture = LoadTextureFromImage(pieceImage);
}

void Piece::draw(int x, int y){
    DrawTexture(texture, x, y, WHITE);
}