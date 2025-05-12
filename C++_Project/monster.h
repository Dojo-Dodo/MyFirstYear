#ifndef monster_h
#define monster_h

class monster{
private:
	string name;
	int hp,potion;
public:
	void Attack(moster &);
          void heal();
	monster(string, int,int);
};
#endif
