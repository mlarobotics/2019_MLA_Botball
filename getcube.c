#include <kipr/botball.h>
void lft90();   //calls the function for a left 90 degree turn
void getcube();//calls the function getcube
int arm=0; //designates the name for the servo in port 0
int up=1230; //designates the value up
int down=1900; //designates the value down
int claw=1; //designates the name for the servo in port 1
int open=1024; //designates the value Open
int closed=200; //designates the value Closed
 
 
int main() {     //initializes  the main program
 
        	enable_servos();    	//enables the servos
    set_servo_position(arm, up); // sets the position of the arm up
    set_servo_position(claw, open); // sets the position of the claw to closed
 
	getcube(); // calls the function getcube
    clear_motor_position_counter(0); //clears the motor position counter to 0
	while (get_motor_position_counter(0) > -3133) {
    	motor(0, -50);   // this loop travels forward
    	motor(3, -50);
	}
	ao(); // turns off motors
	lft90(); // makes a left 90 degree turn
	ao();  // turns off motors
	disable_servos(); //disables motors
	return 0;
}
void getcube()	// defines what the fuction getcube is supposed to do
{
    clear_motor_position_counter(0); //clears the motor position counter to 0
 
	while (get_motor_position_counter(0) < 3133) {
    	motor(0, 50);
    	motor(3, 50);
	}
	ao();
    set_servo_position(arm, down);  //arm comes down
	msleep(1000);
    set_servo_position(claw, closed); //claw closes
	msleep(1000);
    set_servo_position(arm, up);   //arm moves up
	msleep(1000);
}
void lft90()// defines what the fuction lft90 is supposed to do
 
{
    clear_motor_position_counter(0); //clears the motor position counter to 0
 
	while (get_motor_position_counter(0) < 1800) {
    	motor(0, 50); 
    	motor(3, 0);
	}
}
