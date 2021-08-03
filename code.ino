/*Interfacing 7 Segment Display to Arduino Uno
 * 
 * Hardware Components:
 *  Seven segment Display(Common Cathode)
 *  Arduino Uno   
 *  
 * Hardware Connection:
 *  Arduino Uno - Seven segment display connection
 *  D7-D13 of Arduino Uno pins are connected to 7 segment display
 *  Pin connection:
 *                 D13-a;
 *                 D12-b;
 *                 D11-c;
 *                 D10-d;
 *                 D9-e;
 *                 D8-f;
 *                 D7-g;
 * 
 * Seven segment(Common Cathode) display pattern:
 *                        a b c d e f g 
 *                   0 = {0,1,1,1,1,1,1}
 *                   1 = {0,0,0,0,1,1,0}
 *                   2 = {1,0,1,1,0,1,1}
 *                   3 = {1,0,0,1,1,1,1}
 *                   4 = {1,1,0,0,1,1,0}
 *                   5 = {1,1,0,1,1,0,1}
 *                   6 = {1,1,1,1,1,0,1}
 *                   7 = {0,0,0,0,1,1,1}
 *                   8 = {1,1,1,1,1,1,1}
 *                   9 = {1,1,0,1,1,1,1}
 *                   
 *  Author : Sahana B G
 *  Date   : 01 May 2021              
 */

// Pin configuration
const int FIRSTPIN = 7;
const int LASTPIN = 13;

// Defining an array to store led pattern from 0 to 9
bool myArray[10][7] = {{0,1,1,1,1,1,1},
  {0, 0, 0, 0, 1, 1, 0},
  {1, 0, 1, 1, 0, 1, 1},
  {1, 0, 0, 1, 1, 1, 1},
  {1, 1, 0, 0, 1, 1, 0},
  {1, 1, 0, 1, 1, 0, 1},
  {1, 1, 1, 1, 1, 0, 1},
  {0, 0, 0, 0, 1, 1, 1},
  {1, 1, 1, 1, 1, 1, 1},
  {1, 1, 0, 1, 1, 1, 1}};
  
void setup()
{
   // Configure data pins to output
   for(int i = FIRSTPIN ; i<=LASTPIN; i++ )
   pinMode(i,OUTPUT);  
}

void loop()
{
  int pin = FIRSTPIN ;
      
  // Iterates for row data
  for( int i =0; i<10; i++)
  {
    // Iterates for column data
    for(int j = 0 ; j<7; j++)
    {
     digitalWrite(pin,myArray[i][j]);
     pin++;
   }
   delay(500); // Wait for 500ms
   pin = FIRSTPIN;// Starts from first pin for next iteration
  }
}

 
