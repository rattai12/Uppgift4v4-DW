#include<string>
#include<vector>
#include "Birdfile.h"
using namespace std;

class Database {
public:
	vector<Birdfile> files;
	void read_files();
	void show_files();
};