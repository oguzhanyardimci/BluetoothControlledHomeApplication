# BluetoothControlledHomeApplication
Wireless control application was built using PIC16F877A. The board designed with Proteus and microprocessor programmed using CCS C Compiler.
In this project we design and build a circuit. 
This circuit uses PICF877A Microprocessor and HC05-Bluetooth module as main equipments and perform serial communication between Android device and PIC16F877A Microprocessor. 
The embedded program in the microprocessor was written in CCS C Compiler as C file.
The algorithm of the system is like that:
1. Connect 9V voltage suppliers to motor supply terminal and general supply terminal.  
2. Connect to HC05- Bluetooth Module with using Android device.
3. Commands are explained in the below, press a character which fit your desire:

   •	Press ' a ' to TURN ON the lights of the living room. 
   •	Press ' b ' to TURN OFF the lights of the living room.  
   •	Press ' c ' to TURN ON the lights of the bedroom.        
   •	Press ' d ' to TURN OFF the lights of the bedroom.     
   •	Press ' e ' to TURN ON the lights of the bathroom.       
   •	Press ' f ' to TURN OFF the lights of the bathroom.     
   •	Press ' g ' to TURN ON the lights of the kitchen.     
   •	Press ' h ' to TURN OFF the lights of the kitchen.   
   •	Press ' m ' to TURN ON the air conditioner in the living room .
   •	Press ' n ' to TURN OFF the air conditioner in the living room.     
   •	Press ' z ' to TURN ON the air conditioner in the bedroom.   
   •	Press ' x ' to TURN OFF the air conditioner in the bedroom.
   
This system needes two 9V voltage supply as input one for microprocessor and the other one for driving motors. 
PIC16F877A microprocessor needs 5V as input for this reason voltage reducer part was used, in this voltage reducer part 78L05 voltage regulator was used.
6V DC-Motors were used in this project for driving these motors L293D Motor Driver Shield was used. 
In this application just ON and OFF state of the motors are performed. 
If you perform driving motors with PWM you can easily perform these connecting Enable pin to PWM output of the PIC16F877A.
HC05 Bluetooth Module was used in this project to connect the system to an Android device. 
RX pin of HC05 was connected to TX pin of PIC16F877A and TX pin of HC05 was connected to RX pin of PIC16F877A. 
This module needes 5V as power input.
All schemes and code parts are shared in this repository.
This project was presented as MKT3811-Microprocessors and Programming Course in Yildiz Technical University Fall 2018.
