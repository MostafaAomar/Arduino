import serial #import serial library
 #from vpython import * #import all vpython library

arduinoSerialData= serial.Serial('com3', 9600) #create an object to read the serial port
while (1==1): #loop forever 
    if(arduinoSerialData.inWaiting()>0): #check if the data is on serial port 
        myData= arduinoSerialData.readline() #if thedata are there then read it
         #distance =float(myData) #convert string myData to floating number and hold in distance veriable
        print; myData