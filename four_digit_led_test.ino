#include <sevenSegment.h>



void setup()
{
  pinMode (13, OUTPUT);// A
  pinMode (12, OUTPUT);// B
  pinMode (11, OUTPUT);//C
  pinMode (10, OUTPUT);//D
  pinMode (9, OUTPUT);//E
  pinMode (8, OUTPUT);//F
  pinMode (7, OUTPUT);//G
  pinMode (6, OUTPUT);//C1
  pinMode (5, OUTPUT);//C2
  pinMode (4, OUTPUT);//C3
  pinMode (3, OUTPUT);//C4

  digitalWrite (13, HIGH);
  digitalWrite (12, HIGH);
  digitalWrite (11, HIGH);
  digitalWrite (10, HIGH);
  digitalWrite (9, HIGH);
  digitalWrite (8, HIGH);
  digitalWrite (7, HIGH);
  digitalWrite (6, LOW);
  digitalWrite (5, LOW);
  digitalWrite (4, LOW);
  digitalWrite (3, LOW);

}

void loop()
{


}
