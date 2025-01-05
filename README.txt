*********************************************************************************************************
*
*package for Speeduino with adds for use the tiny WeAct Studios STM32F405RGT6 board (5€ on Ali)
*
*by BZO Concept (France) 05/01/2025 (v1.0)
*
*board infos here: https://github.com/WeActStudio/WeActStudio.STM32F4_64Pin_CoreBoard
*BZO fb page: https://www.facebook.com/profile.php?id=100086365535718
*
*********************************************************************************************************

put the 3 def files in STMicroelectronics\hardware\stm32\2.4.0\variants\STM32F4xx\F405RGT_F415RGT

put (replace) the "boards" text in STMicroelectronics\hardware\stm32\2.4.0

this files compils and runs fine on ArduinoIDE 1.8.19 with core STM32
.bin flash with STM32CUBEprogrammer, or other
NOTE: a basic pinout is writed in case v0.4 of Speeduino FW. don't forget to write your own pinout ; )

NOTE2: -basics tests (inj, ign, triggers, ADC)  >OK!!
             -SecondSerial                                  >OK!!
             -Native CANBUS                              >OK!!
             -MicroSD logging with wiring hack     >Card detected, but not enabled on TS