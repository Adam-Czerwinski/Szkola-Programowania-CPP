#include <iostream>
#include <cmath>
#include "coordin.h"

polar rect_to_polar(rect xypos) {
	using namespace std;
	polar answer;

	answer.distance = sqrt(pow(xypos.x, 2) + pow(xypos.y, 2));
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;
}

void show_polar(polar dapos) {
	using namespace std;
	const double Rad_to_deg = 57.29577951;

	cout << "Odleg³oœæ = " << dapos.distance;
	cout << ", odchylenie = " << dapos.angle * Rad_to_deg << " stopni\n";
}