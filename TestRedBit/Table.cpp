

#include "Table.h"

Table::Table() {
}

Table::Table(const Table& orig) {
}

Table::Table(int column, int row , Block block) {
    this->column = column;
    this->row = row;
    this->block = block;
}

// Select block
Table::selectBlock(int column, int row){
    
}

// Check if ther are equal blocks
Table::checkBlockEqual(){
    
}

// Esplotion block
Table::esplosion(){
    
}

// Generate block
Table::generateBlock(){
    
}

// Incremental score
// 10+( (x-2)/3) ^2 *20
// X = number block esplose
Table::incrementalScore(int numberBlock){
    
}

// Incremental time
// (x-1)*80+( (x-2)/5 ) ^2
// X = number block esplose
Table::incrementalTime(int numberBlock) {
    
}

// Init table
Table::init(){
    // Generate table 8X8
    // and add single block
}

Table::~Table() {
}

