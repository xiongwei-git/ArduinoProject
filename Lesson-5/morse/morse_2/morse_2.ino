//  湖南创乐博智能科技有限公司

const int laserPin = 7; //laser attach to

static int dotDelay = 200; //

void setup()
{
  pinMode(laserPin, OUTPUT);  //initialize laser as an output
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(laserPin, HIGH);
  delay(dotDelay * 10);
  digitalWrite(laserPin, LOW);
  delay(dotDelay);
}
