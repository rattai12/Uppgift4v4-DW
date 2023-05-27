#include<string>
#include<vector>
#include "Birdlist.h"
using namespace std;

class Birdfile:public Birdlist {
public:
	vector<Birdlist> birdfilev;
	void addbirdfile(Birdlist birdlist);
};