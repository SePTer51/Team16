#include<iostream>

void CB() {
	std::cout << "A mad scientist’s giant experiment gone wrong… wait, he let the bunny free on purpose? Scratch that, a mad scientist’s experiment gone /“right/” " << std::endl;
}
void SP() {
	std::cout << "Unlike his fellow compadres this penguin is not so innocent anymore and he's got something to say about how the humans treat his kind." << std::endl;
}
void TK() {
	std::cout << "This huge monkey  smashed his way through New York and he’s here to destroy tokyo and keep his title." << std::endl;
}
void GZ() {
	std::cout << "Godzilla has gone on vacation, but that won’t stop his little cousin from tapping in." << std::endl;
}
void AL() {
	std::cout << "He has come from a faraway planet, searching for civilization. He has found earth, and now he wants all of it for himself." << std::endl;
}
void MD() {
	std::cout << "The same mad scientist with an experiment gone “right”. He really wants to watch the world burn." << std::endl;
}
int play;

int main()
{
	std::cout << "Input the total amount of players (no more than 6) : " << std::endl;
	std::cin >> play;

	if (play > 6 || play < 2) {
		std::cout << "This game dosent support " << play << " player(s), there can only be a tottal of six players." << std::endl;
		std::cin >> play;
	}

	return 0;
}