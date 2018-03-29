#pragma once
class soldiers {
private:

protected:
	int life;
	int attac_power;
	int defence_power;
public:
	soldiers ();
	~soldiers ();

	int getLife ();
	int getAttacPower ();
	int getDefencePower ();
};

