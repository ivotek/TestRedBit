
#include "Block.h"

Block::Block() {
}

Block::Block(const Block& orig) {
}

Block::Block(int idBlock, int column, int row, int color, int state) {
    this->idBlock = idBlock;
    this->column = column;
    this->row = row;
    this->color = color;
    this->state = state;
}

Block::~Block() {
}

