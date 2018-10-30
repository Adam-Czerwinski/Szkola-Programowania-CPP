#include <iostream>
#include <cmath>

struct rect{
  double x;
  double y;
};

struct polar{
  double distance;
  double angle;
};

void rect_to_polar(const rect *xypos, polar *dapos);
void show_polar(const polar *dapos);

int main()
{
  using namespace std;
  rect rplace;
  polar pplace;

  cout<<"Podaj wartości x i y: ";
  while(cin>>rplace.x>>rplace.y)
  {
    rect_to_polar(&rplace, &pplace);
    show_polar(&pplace);
    cout<<"Podaj następne liczby lub q, aby zakończyć: ";
  }

  cout<<"Gotowe\n";

  return 0;
}

void show_polar(const polar *dapos){
  using  std::cout;
  const double RAD_TO_DEG = 57.29577951;

  cout<<"odległość = "<<dapos->distance;
  cout<<", kat = "<<dapos->angle*RAD_TO_DEG; //kąt w stopniach
  cout<<" stopni\n";
}

void rect_to_polar(const rect *xypos, polar *dapos)
{
  using namespace std;
  dapos->distance = sqrt(xypos->x*xypos->x + xypos->y*xypos->y);
  dapos->angle = atan2(xypos->y, xypos->x);
}
