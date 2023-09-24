import processing.serial.*;
import ddf.minim.*;
 
Serial myPort;
Minim minim;
AudioPlayer c3,d3,db3,eb3,e3,f3,gb3,g3,ab3,a3,bb3,b3,c4,db4,d4,eb4,e4,f4,gb4,g4,ab4,a4,bb4,b4,c5;

 
void setup()
{
  myPort = new Serial(this, "COM25", 9600);
  minim = new Minim(this);
 
  c3 = minim.loadFile("C3.wav");
  d3 = minim.loadFile("D3.wav");
  db3 = minim.loadFile("Db3.wav");
  eb3 = minim.loadFile("Eb3.wav");
  e3 = minim.loadFile("E3.wav");
  f3 = minim.loadFile("F3.wav");
  gb3 = minim.loadFile("Gb3.wav");
  g3 = minim.loadFile("G3.wav");
  ab3 = minim.loadFile("Ab3.wav");
  a3 = minim.loadFile("A3.wav");
  bb3 = minim.loadFile("Bb3.wav");
  b3 = minim.loadFile("B3.wav");
  c4 = minim.loadFile("C4.wav");
  d4 = minim.loadFile("D4.wav");
  db4 = minim.loadFile("Db4.wav");
  eb4 = minim.loadFile("Eb4.wav");
  e4 = minim.loadFile("E4.wav");
  f4 = minim.loadFile("F4.wav");
  gb4 = minim.loadFile("Gb4.wav");
  g4 = minim.loadFile("G4.wav");
  ab4 = minim.loadFile("Ab4.wav");
  a4 = minim.loadFile("A4.wav");
  bb4 = minim.loadFile("Bb4.wav");
  b4 = minim.loadFile("B4.wav");
  c5 = minim.loadFile("C5.wav");
}
void draw() {
  while (myPort.available() > 0) {
    int val = myPort.read();
  
    println(val); 
    if (val == 65 )
    {
      
       c3.play();
       c3.rewind();
   
    }
    else if (val == 66)
    {
      db3.play();
      db3.rewind();
    }    
   else if (val == 67)
    {
      d3.play();
      d3.rewind();
    }    
     else if (val == 68)
    {
      eb3.play();
      eb3.rewind();
    }    
    else if (val == 69)
    {
      e3.play();
      e3.rewind();
    }    
         else if (val == 70)
    {
      f3.play();
      f3.rewind();
    }    
       else if (val == 71)
    {
      gb3.play();
      gb3.rewind();
    }    
     else if (val == 72)
    {
      g3.play();
      g3.rewind();
    }   
     else if (val == 73)
    {
      ab3.play();
      ab3.rewind();
    }    
     else if (val == 74)
    {
      a3.play();
      a3.rewind();
    }    
       else if (val == 75)
    {
      bb3.play();
      bb3.rewind();
    }    
     else if (val == 76)
    {
      b3.play();
      b3.rewind();
    }    
     if (val == 77 )
    {
      
       c4.play();
       c4.rewind();
   
    }
    else if (val == 78)
    {
      db4.play();
      db4.rewind();
    }    
   else if (val == 79)
    {
      d4.play();
      d4.rewind();
    }    
     else if (val == 80)
    {
      eb4.play();
      eb4.rewind();
    }    
    else if (val == 81)
    {
      e4.play();
      e4.rewind();
    }    
         else if (val == 82)
    {
      f4.play();
      f4.rewind();
    }    
       else if (val == 83)
    {
      gb4.play();
      gb4.rewind();
    }    
     else if (val == 84)
    {
      g4.play();
      g4.rewind();
    }   
     else if (val == 85)
    {
      ab4.play();
      ab4.rewind();
    }    
         else if (val == 86)
    {
      a4.play();
      a4.rewind();
    }    
    else if (val == 87)
    {
      bb4.play();
      bb4.rewind();
    }    
     else if (val == 88)
    {
      b4.play();
      b4.rewind();
    }    
     else if (val == 89)
    {
      c5.play();
      c5.rewind();
    }    
  }
}
