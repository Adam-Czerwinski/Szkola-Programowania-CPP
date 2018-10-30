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

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main()
{
  using namespace std;
  rect rplace;
  polar pplace;

  cout<<"Podaj wartości x i y: ";
  while(cin>>rplace.x>>rplace.y)
  {
    pplace=rect_to_polar(rplace);
    show_polar(pplace);
    cout<<"Podaj następne liczby lub q, aby zakończyć: ";
  }

  cout<<"Gotowe\n";

  return 0;
}

void show_polar(polar dapos){
  using  std::cout;
  const double RAD_TO_DEG = 57.29577951;

  cout<<"odległość = "<<dapos.distance;
  cout<<", kat = "<<dapos.angle*RAD_TO_DEG; //kąt w stopniach
  cout<<" stopni\n";
}

polar rect_to_polar(rect xypos)
{
  using namespace std;
  polar answer;

  answer.distance = sqrt(xypos.x*xypos.x + xypos.y*xypos.y);
  answer.angle = atan2(xypos.y, xypos.x);

  return answer;
}
