//name the file initials.txt
// then push it back to https://github.com/tritechsc/pm-projects/
// rename the function with intials
void abc(Adafruit_NeoPixel &pixels) {
//set base color
int i,r,c;//row and column
int red = 0, green = 0, blue = 0;
int m[8][8] = {
// add your 8x8 2d arry here
	{1,0,0,0,0,0,0,2} ,
	{0,0,0,0,0,0,0,0} ,
	{0,0,0,0,0,0,0,0} ,
  {0,0,0,5,5,0,0,0} ,
  {0,0,0,5,5,0,0,0} ,
  {0,0,0,0,0,0,0,0} ,
  {0,0,0,0,0,0,0,0} ,
  {4,0,0,0,0,0,0,3} ,
    };
// end of 2d array
  i = 0;// set neo-pixel number to zero
  int val;
//  loop that increments r,c and i
  for (r = 0; r < 8; r++){
    for (c = 0; c < 8; c++){
      // set the color for red green and blue
 // add your switch statement here
      val = m[r][c];
      switch ( val ) {
          case 0:
                red = 100; green = 0; blue =0;//red
          break;
          case 1:
                red = 0; green = 100; blue =0; //green
          break;
           case 2:
              red = 0; green = 0; blue =100; //blue
          break;
            case 3:
              red = 100; green = 100; blue =0; //yellow
          break;
            case 4:
              red = 0; green = 50; blue = 50; //cyan
          break;
          default:
              red = 100; green = 00; blue = 100; //magenta
          break;
}
// end of switch statment
      // end of set the color
      pixels.setPixelColor(i, pixels.Color(red,green,blue));

      pixels.show();
      i++;
      //delay(50);
     //Serial.print(c[x][y]);
    }//end y
}//end y and end of loop that increments r,c and i
}
