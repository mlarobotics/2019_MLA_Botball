#include <kipr/botball.h>

	void turn_left90();
	void turn_right90();
	void turn_left45();
	void turn_right45();
	void move10in();
	void move2();

int main()
    
{
	
    int claw_open = 1045; 					//Port 1 is the claw
    int claw_close_half = 532;
    int claw_close_full = 117;
    int arm_up = 455;						//Port 0 is the arm
    int arm_down = 1045;
    
										    //setup
  											//waitforlight
    shut_down_in(1200);
    enable_servos();
    set_servo_position(0, arm_down);
    set_servo_position(1, claw_open);
    cmpc(0);
    turn_left90();
    move10in();
    turn_right90();
    m2();
    turn_right90();
    m2();
    turn_right90();
    m2();
   											//yellow cube find
    
    
    										//Find the stuff
											//turn 90 degrees to the left and move to the large water container
											//grab the container
											//turn 90 and move to the buildings
											//face the buildings and find the building on fire
											//move towards the building
                                            //rotate and move to the black line
											//go to the palms and cubes and grab as many as possible
											//rotate to the Safe Zone and push everything to the zone
											//take yellow cube
    disable_servos();
    return 0;
}
											//DEFINED CODE or CUSTOM
	void turn_left90()
   	{
   		while(gmpc(0)<=	894)
     	 {
   		motor(0,50);
     	motor(3,-50);
     	 }
     cmpc(0);
     ao();
    }   
	void turn_right90()
   	{
   		while(gmpc(0)>=	-925)
     	 {
   		motor(0,-50);
     	motor(3,50);
     	 }
    	cmpc(0);
    	ao();
    }   
	void turn_left45()
   	{
   		while(gmpc(0)<=	402)
     	 {
   		motor(0,50);
     	motor(3,-50);
     	 }
      
     	cmpc(0);
     	ao();
    }   
	void turn_right45()
   	{
   		while(gmpc(0)>=	-886)
     	 {
   		motor(0,-50);
     	motor(3,50);
     	 }
     	cmpc(0);
     	ao();
    }   
	void move10in()
   	{
   		while(gmpc(0)<=	3000)
     	 {
   		motor(0,49);
     	motor(3,50);
     	 }
		cmpc(0);
   	 	ao();
    }   
	void m2()
   	{
   		while(gmpc(0)<=	4000)
     	 {
   		motor(0,49);
     	motor(3,50);
     	 }
      cmpc(0);
      ao();
    } 
