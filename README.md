# Dustbin_Telegram_Alert

Dustbin Telegram Alert is developed in Arduino sketch which utilizes nodeMCU to push an alert messege to telegram bot. It is used to detect the presence of dust inside the dustbin. Once the dustbin is filled, it will send an alert message to telegram bot. It utilizes ultrasonic sensor to detect the dust inside the dustbin and nodeMCU to push an alert message to the telegram bot. 

Before executing "TelegramAlert.ino" code , make sure that the "TelegramBot-Library-master.zip" is downloaded. It is a library file used to push and pull the messages in telegram. After downloading the "TelegramBot-Library-master.zip", you need to add it to your arduino library. 

## Follow the steps below to add it to your arduino library :

1. Open Arduino IDE
2. Click "Sketch" tab at top of the screen
3. Then, click "Include Library" in drop down list box
4. Click "Add .ZIP Library"
5. It will redirect to your file manager , there you need to select " TelegramBot-Library-master.zip " which you have downloaded 
6. Click Open to include it to your library
7. After the inclution, you can find the file under "Include Library" drop down list box

Once the process is completed, you can execute "TelegramAlert.ino" in IDE.

## Things to note in the arduino sketch

 1. SSID - Here, you need to enter your wifi name or SSID in arduino sketch before it get to be executed
 2. Password - Following with SSID, you need to enter your wifi password as well in the arduino sketch
 3. Bot Token - Bot Token is a unique ID by which the nodeMCU can access the telegram bot

