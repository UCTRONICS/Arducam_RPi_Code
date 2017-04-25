import RPi.GPIO as GPIO
import time

#led_pin defines the pin number connected to LED 
led_pin = 40
count=10

GPIO.setmode(GPIO.BOARD)
GPIO.setup(led_pin, GPIO.OUT)

# flashing 10 times
for i in range(count):
    GPIO.output(led_pin,True)
    time.sleep(1)
    GPIO.output(led_pin,False)
    time.sleep(1)
GPIO.cleanup()