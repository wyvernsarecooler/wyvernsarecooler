#include <iostream>

#define πint
#define π¨ double
#define π§΅ char
#define π§± const
#define π <
#define π >
#define π &&
#define β οΈ ||
#define π€· if
#define β° while
#define 4οΈβ£ for
#define π΄ void
#define π΅βπ« ++
#define π£ false
#define π ==


class Console {
public:
	template <typename x>
	void log(x const &value) {
		std::cout << value << std::endl;
	};
};

πmain(π΄) {
	Console console;
	π§±π§΅* π = "pure evil";
	ππ€― = 4;
	ππΎ = 3;
	π¨π = 3.21;
	
		4οΈβ£(πβΉοΈ; βΉοΈ π π€―; βΉοΈπ΅βπ«) {
			β°(π£) {
				π€·β(π π π€― π π π πΎ β οΈ π£) {
					console.log(π);
				}
			}
		}
}
