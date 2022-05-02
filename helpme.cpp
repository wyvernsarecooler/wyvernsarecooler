#include <iostream>

class myLife {
private:
	bool happiness;
	int health;
public:
	myLife(bool x, int y) {
		happiness = x;
		health = y;
	};
	~myLife();
	
	void struggle() {
		std::cout << "pain";
	}

    	bool getHappiness() {
        	return happiness;
    }
};
	

int main(void) {
	myLife life(false, 0);

	if (life.getHappiness() == NULL || false) {
		life.struggle();
	} else {
		life.struggle();
	}
}
