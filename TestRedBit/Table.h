

#ifndef TABLE_H
#define TABLE_H

#include "Block.h"
#include <vector>

class Table {
public:
    Table();
    Table(const Table& orig);
    Table(int, int, Block);
    selectBlock(int, int);
    checkBlockEqual();
    esplosion();
    generateBlock();
    init();
    incrementalTime(int);
    incrementalScore(int);

    Block getBlock() const {
        return block;
    }

    void setBlock(Block block) {
        this->block = block;
    }

    int GetColumn() const {
        return column;
    }

    void SetColumn(int column) {
        this->column = column;
    }

    int GetRow() const {
        return row;
    }

    void SetRow(int row) {
        this->row = row;
    }

    virtual ~Table();
private:
    int column;
    int row;
    Block block;

};

#endif /* TABLE_H */

