# Stepper_sim
Simulation of stepper motor on Proteus. The source code has been implemented on Keil in C language

1. Install keil  
  https://www.keil.com/download/
  
2. Install proteus professional (crack)  
  Youtube: https://www.youtube.com/watch?v=0DX8sIPHkTg  
  Google Drive: https://drive.google.com/drive/folders/0B7qarf3_2VkVSFRZa3hpV19TTEk
  
  1. Download 'setup' and 'crack' from google drive  
  2. Extract 'crack' and copy paste 'LICENCE' to desktop  
  3. Run setup  
  4. When asked for activation key in setup, select local licence option  
  5. Browse and navigate to desktop and click on 'LICENCE'  
  6. Click on install  
  7. Continue with the rest of setup  
  8. At the end of setup, click on run button to start proteus  
  9. Quit proteus  
  10. Copy 'BIN' and 'MODELS' from 'crack' folder  
  11. Paste them in C:\Program Files (x86)\Labcenter Electronics\Proteus 8 Professional  
  12. Refresh and start proteus from the desktop shortcut  
  
3. The C code on keil (Stepper/stepper.c) is for AT89C51 with frequency of 11.0592MHz

4. The build file in HEX format (Stepper/Objects/stepper.hex) is being generated.

5. This HEX file will be given to proteus for execution

6. The proteus hardware setup (Proteus_stepper/stepper) containes AT89C51 and Bipolar stepper motors

7. The 4 pins of stepper is connected to P1.0 to P1.3

8. The AT89C51 chip is loaded with stepper.hex and given 11.0592MHz frequency

9. Click on play button to see the stepper motor move

