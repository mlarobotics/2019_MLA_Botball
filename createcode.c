#include <kipr/botball.h>

int main()
{
   create_connect();
   wait_for_light(0); // change the port number to match the port used 
   shut_down_in(119);
   shut off the motors and stop the robot after 119 seconds
    
    
    create_drive_direct(100,100);
    msleep(5500);
   
    create_drive_direct(200,100);
    msleep(1000);
    
    create_drive_direct(-200,-100);
    msleep(1000);
    
    create_drive_direct(-200,-200);
    msleep(2000);
    
    create_drive_direct(100,200);
    msleep(1000);
    
    create_drive_direct(100,100);
    msleep(2000);
        
    create_drive_direct(200,100);
    msleep(1000);
    
    create_drive_direct(100,100);
    msleep(1200);
    
   
    create_stop(); 
    printf("Hello World\n");
    create_disconnect();
    return 0;
}
