#pragma once
#include <raylib.h>
#include "piece.h"

class Cell{
    private:
        Color color;
        int x;
        int y;
        int width;
        int height;
        Piece* piece;
    public:
        Cell();
        Cell(Color color, int x, int y, int width, int height);
        void setPiece(Piece* piece);
        void draw();
};

Cell::Cell(){
    this->color = BLACK;
    this->x = 0;
    this->y = 0;
    this->width = 0;
    this->height = 0;
    this->piece = nullptr;
}
Cell::Cell(Color color, int x, int y, int width, int height){
    this->color = color;
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
    this->piece = nullptr;
}

void Cell::setPiece(Piece* piece){
    this->piece = piece;
}

void Cell::draw(){
    DrawRectangle(x, y, width, height, color);
    if(piece != nullptr){
        piece->draw(x, y);
    }
}