#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"
#include "Sorter.h"

// Override base class with your custom functionality
class Example : public olc::PixelGameEngine {
public:
	Example() {
		// Name you application
		sAppName = "Example";
	}

public:

	Sorter s;


	bool OnUserCreate() override {

		//creats a sorter
		s = Sorter(ScreenWidth(), 1);

		// Called once at the start, so create things here
		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override {

		s.Tick();
		// Called once per frame, draws random coloured pixels
		for (int x = 0; x < ScreenWidth(); x++)
			for (int y = 0; y < ScreenHeight(); y++)
				Draw(x, y, olc::Pixel(rand() % 256, rand() % 256, rand() % 256));
		return true;
	}
};

int main() {
	Example demo;
	if (demo.Construct(150, 150, 4, 4))
		demo.Start();
	return 0;
}