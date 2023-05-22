#ifndef polaFigur_H_INCLUDED
#define polaFigur_H_INCLUDED

float kula(float r)
{
  return 1.333*3.14159*r*r*r;
}

float kwadrat(float a, float b)
{
  return a*b;
}

float kolo(float r)
{
  return 3.14159*r*r ;
}

float trojkat(float a, float h)
{
  return a*h*0.5;
}
float walec(float r, float h)
{
  return 3.14159*r*r*h;
}

float stozek(float r, float h)
{
  return 0.3333*3.14159*r*r*h;
}


#endif
