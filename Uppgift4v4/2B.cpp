#include <iostream>
#include "Database.h"
using namespace std;

int main()
{
    Database db;
    db.read_files();
    db.show_files();
}
