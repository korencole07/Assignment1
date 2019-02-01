Game: main.o Weapon.o WeaponFactory.o CommonSword.o CommonSpear.o SimpleHammer.o CrazyRandomSword.o
	g++ -o Game main.o Weapon.o WeaponFactory.o CommonSword.o CommonSpear.o SimpleHammer.o CrazyRandomSword.o
main.o: main.cpp
	g++ -c main.cpp
Weapon.o: Weapon.cpp
	g++ -c Weapon.cpp
WeaponFactory.o: WeaponFactory.cpp
	g++ -c WeaponFactory.cpp
CommonSword.o: CommonSword.cpp
	g++ -c CommonSword.cpp
CommonSpear.o: CommonSpear.cpp
	g++ -c CommonSpear.cpp
SimpleHammer.o: SimpleHammer.cpp
	g++ -c SimpleHammer.cpp
CrazyRandomSword.o: CrazyRandomSword.cpp
	g++ -c CrazyRandomSword.cpp
clean:
	rm Game *.o
