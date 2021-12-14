#include <stdlib.h> //Stellt Bibliotheksfunktionen malloc() und free() bereit

void main()
{
  struct point
  {
    int x;
    int y;
  };

  // Annahme Symboltabelleneintrag st(p1) = (var, struct point*, 8)
  struct point *p1;
  // Annahme Symboltabelleneintrag st(p3) = (var, struct point*, 9)
  struct point *p3;
  // Annahme Symboltabelleneintrag st(a) = (var, int*, 10)
  int* a;

  //Annahme Symboltabelleneintrag:
  //st(p2) = (struct, x -> (int,0), y -> (int,1), 15)
  struct point p2;

  a = &(p2.x);
  p2.x = 7;
  p2.y = 4;
  /*** MARKE 1 ***/

  //Annahme: reserviert zusammenhaengenden Bereich auf dem Heap ab Adresse 33
  p1 = (struct point *) malloc(sizeof(struct point));

  (*p1).y = *a;

  p3 = p1;
  p1 = &p2;
  /*** MARKE 2 ***/

  if((*p1).y > 5) {
    *a = 42;
  }
  else {
    *a = 1;
  };

  /*** MARKE 3 ***/
  free(p3);
};
