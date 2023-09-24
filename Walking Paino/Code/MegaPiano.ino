int c3state = 0;
int db3state = 0;
int d3state = 0;
int eb3state = 0;
int e3state = 0;
int f3state = 0;
int gb3state = 0;
int g3state = 0;
int ab3state = 0;
int a3state = 0;
int bb3state = 0;
int b3state = 0;
int c4state = 0;
int db4state = 0;
int d4state = 0;
int eb4state = 0;
int e4state = 0;
int f4state = 0;
int gb4state = 0;
int g4state = 0;
int ab4state = 0;
int a4state = 0;
int bb4state = 0;
int b4state = 0;
int c5state = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(22, INPUT);
  pinMode(23, INPUT);
  pinMode(24, INPUT);
  pinMode(25, INPUT);
  pinMode(26, INPUT);
  pinMode(27, INPUT);
  pinMode(28, INPUT);
  pinMode(29, INPUT);
  pinMode(30, INPUT);
  pinMode(31, INPUT);
  pinMode(32, INPUT);
  pinMode(33, INPUT);
  pinMode(34, INPUT);
  pinMode(35, INPUT);
  pinMode(36, INPUT);
  pinMode(37, INPUT);
  pinMode(38, INPUT);
  pinMode(39, INPUT);
  pinMode(40, INPUT);
  pinMode(41, INPUT);
  pinMode(42, INPUT);
  pinMode(43, INPUT);
  pinMode(44, INPUT);
  pinMode(45, INPUT);
  pinMode(46, INPUT);
  pinMode(47, INPUT);
  pinMode(49, INPUT);
  pinMode(51, INPUT);
  pinMode(53, INPUT);
  pinMode(52, INPUT);
  pinMode(50, INPUT);
  pinMode(48, INPUT);
  pinMode(46, INPUT);
  pinMode(44, INPUT);
  pinMode(42, INPUT);
  pinMode(40, INPUT);
  pinMode(38, INPUT);
  pinMode(36, INPUT);

pinMode(14,INPUT);
}

void loop()
{
  int c3value = digitalRead(23);
  int db3value = digitalRead(25);
  int d3value = digitalRead(27);
  int eb3value = digitalRead(29);
  int e3value = digitalRead(31);
  int f3value = digitalRead(33);
  int gb3value = digitalRead(35);
  int g3value = digitalRead(37);
  int ab3value = digitalRead(39);
  int a3value = digitalRead(40);
  int bb3value = digitalRead(43);
  int b3value = digitalRead(45);
  int c4value = digitalRead(47);
  int db4value = digitalRead(49);
  int d4value = digitalRead(51);
  int eb4value = digitalRead(53);
  int e4value = digitalRead(52);
  int f4value = digitalRead(50);
  int gb4value = digitalRead(48);
  int g4value = digitalRead(46);
  int ab4value = digitalRead(44);
  int a4value = digitalRead(42);
  int bb4value = digitalRead(14);
  int b4value = digitalRead(38);
  int c5value = digitalRead(36);

  //------------------------------------------------------  c3
  if (c3value != c3state)
  {
    if (c3value == HIGH)
    {
      Serial.print("A");
    }
  }

  c3state = c3value;
  
  //-------------------------------------------------------db3*/
  if (db3value != db3state)
  {
    if (db3value == HIGH)
    {
      Serial.print("B");
    }
  }
  
  db3state = db3value;
  

  //-------------------------------------------------------d3
  if (d3value != d3state)
  {
    if (d3value == HIGH)
    {
      Serial.print("C");
    }
  }
  d3state = d3value;
  

  //-------------------------------------------------------eb3
  if (eb3value != eb3state)
  {
    if (eb3value == HIGH)
    {
      Serial.print("D");
    }
  }
  eb3state = eb3value;
  

  //-------------------------------------------------------e3
  if (e3value != e3state)
  {
    if (e3value == HIGH)
    {
      Serial.print("E");
    }
  }
  e3state = e3value;
  

  //-------------------------------------------------------f3
  if (f3value != f3state)
  {
    if (f3value == HIGH)
    {
      Serial.print("F");
    }
  }
  f3state = f3value;
  

  //-------------------------------------------------------gb3
  if (gb3value != gb3state)
  {
    if (gb3value == HIGH)
    {
      Serial.print("G");
    }
  }
  gb3state = gb3value;
  

  //-------------------------------------------------------g3
  if (g3value != g3state)
  {
    if (g3value == HIGH)
    {
      Serial.print("H");
    }
  }
  g3state = g3value;
  

  //-------------------------------------------------------ab3
  if (ab3value != ab3state)
  {
    if (ab3value == HIGH)
    {
      Serial.print("I");
    }
  }
  ab3state = ab3value;
  

  //-------------------------------------------------------a3
  if (a3value != a3state)
  {
    if (a3value == HIGH)
    {
      Serial.print("J");
    }
  }
    
  a3state = a3value;
  

  //-------------------------------------------------------bb3
  if (bb3value != bb3state)
  {
    if (bb3value == HIGH)
    {
      Serial.print("K");
    }
  }
    
  bb3state = bb3value;
  

  //-------------------------------------------------------b3
  if (b3value != b3state)
  {
    if (b3value == HIGH)
    {
      Serial.print("L");
    }
  }
  
  b3state = b3value;
  

  //-------------------------------------------------------c4

  if (c4value != c4state)
  {
    if (c4value == HIGH)
    {
      Serial.print("M");
    }
  }
  c4state = c4value;
  

  //-------------------------------------------------------db4
  if (db4value != db4state)
  {
    if (db4value == HIGH)
    {
      Serial.print("N");
    }
  }
  db4state = db4value;
  

  //-------------------------------------------------------d4
  if (d4value != d4state)
  {
    if (d4value == HIGH)
    {
      Serial.print("O");
    }
  }
  d4state = d4value;
  //-------------------------------------------------------eb4
  if (eb4value != eb4state)
  {
    if (eb4value == HIGH)
    {
      Serial.print("P");
    }
  }
  eb4state = eb4value;
  

  //-------------------------------------------------------e4
  if (e4value != e4state)
  {
    if (e4value == HIGH)
    {
      Serial.print("Q");
    }
  }
  e4state = e4value;
  

  //-------------------------------------------------------f4
  if (f4value != f4state)
  {
    if (f4value == HIGH)
    {
      Serial.print("R");
    }
  }
  f4state = f4value;
  

  //-------------------------------------------------------gb4
  if (gb4value != gb4state)
  {
    if (gb4value == HIGH)
    {
      Serial.print("S");
    }
  }
  gb4state = gb4value;
  

  //-------------------------------------------------------g4
  if (g4value != g4state)
  {
    if (g4value == HIGH)
    {
      Serial.print("T");
    }
  }
  g4state = g4value;
  

  //-------------------------------------------------------ab4
  if (ab4value != ab4state)
  {
    if (ab4value == HIGH)
    {
      Serial.print("U");
    }
  }
  ab4state = ab4value;
  

  //-------------------------------------------------------a4
  if (a4value != a4state)
  {
    if (a4value == HIGH)
    {
      Serial.print("V");
    }
  }
  a4state = a4value;
  //-------------------------------------------------------bb4
  if (bb4value != bb4state)
  {
    if (bb4value == HIGH)
    {
      Serial.print("W");
    }
  }
  bb4state = bb4value;
  

  //-------------------------------------------------------b4
  if (b4value != b4state)
  {
    if (b4value == HIGH)
    {
      Serial.print("X");
    }
  }
  b4state = b4value;
  

  //-------------------------------------------------------c5

  if (c5value != c5state)
  {
    if (c5value == HIGH)
    {
      Serial.print("Y");
    }
  }
  c5state = c5value;
  

}
