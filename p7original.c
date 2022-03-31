#include<stdio.h>
#include<math.h>
typedef struct _point
{
float x,y;
}Point;

typedef struct _line
{
Point p1,p2;
float distance;
}Line;

Point input_line()
{
  Point p1;
  printf("Enter The Coordinates: ");
  scanf("%f", &p1.x);
  printf("Enter The Coordinates: ");
  scanf("%f", &p1.y);
  return p1;
}
void find_length(Line *l)
{
    Point p2;
    Point p1;
    l->distance = sqrt(((p2->x-p1->x)*(p2->x)-(p1->x))+((p2->y-p1->y)*(p2->y-p1->y)));
}
void output(Line l)
{
  printf("The Length of Line is %f\n", l.distance);
}
int main()
{
  Point p1;
  Point p2;
  Line l;
  p1 = input_line();
  p2 = input_line();
  find_length(&l);
  output(l);
  return 0;
}
