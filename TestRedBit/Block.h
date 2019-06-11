
#ifndef BLOCK_H
#define BLOCK_H

class Block {
public:
    Block();
    Block(int,int,int,int,int);
    Block(const Block& orig);
    int GetColor() const {
        return color;
    }

    void SetColor(int color) {
        this->color = color;
    }

    int GetColumn() const {
        return column;
    }

    void SetColumn(int column) {
        this->column = column;
    }

    int GetIdBlock() const {
        return idBlock;
    }

    void SetIdBlock(int idBlock) {
        this->idBlock = idBlock;
    }

    int GetRow() const {
        return row;
    }

    void SetRow(int row) {
        this->row = row;
    }

    int GetState() const {
        return state;
    }

    void SetState(int state) {
        this->state = state;
    }

    virtual ~Block();
private:
    int idBlock;
    int column;
    int row;
    int color;
    int state;
    

};

#endif /* BLOCK_H */

