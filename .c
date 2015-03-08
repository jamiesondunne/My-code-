
#define channel =0;

int main()
{
drive to botguy 
}
while
{
camera_open(); 
camera_update();
get_object_count(channel) >= 0;
get_object_count(1)>=0
motor(treads); 
inchforward(500);
}?
  if (get_object_count(channel) >= 1)
  { 
//stp treads?
  set_servo_position(); 
  }
  else
  { 
  if(get_object_count(1)>=1)
  {
    //stp treads 
    set_servo_position();// port,pos
    resettreads
    }
  else
  {
    ??????????
  }
}
//Code that turns 90 degrees with 1 wheel
void turn90()
  {
    clear_motor_position_counter(0);
    clear_motor_position_counter(1);
    mtp(0,*500,2523.746); //port, speed, distance
    mtp(1,*500,0);
    bmd(0); //makes motor stop running after finished
    bmd(1);
  }
//Code that turns 90 degrees with 2 wheels
void turn90(int direction)
  {
    clear_motor_position_counter(0);
    clear_motor_position_counter(1);
    mtp(0,direction*500,759); //port, speed, distance
    mtp(1,direction*500,759);
    bmd(0); //makes motor stop running after finished
    bmd(1);
  }


void moveForward(int distance)
  {   
    clear_motor_position_counter(0);
    clear_motor_position_counter(1);
    mtp(0,500,1000/15*distance); //port, speed, distance 1000 = 15 cm
    mtp(1,500,1000/15*distance);
    bmd(0); //makes motor stop running after finished
    bmd(1);
    }
    void inchForward(int distance)
  {   
    clear_motor_position_counter(0);
    clear_motor_position_counter(1);
    mtp(0,100,1000/15*distance); //port, speed, distance 1000 = 15 cm
    mtp(1,100,1000/15*distance);
    bmd(0); //makes motor stop running after finished
    bmd(1)
  }
   void moveToBotguy 
  {
  
  }
 findBotguy
  {
    if get_object_count(2)>=1
    {
      moveToMA
    }
    else
    {
      //turn?
    }
 void moveToMa
  {
  }




