 REAL-TIME MULTI-CHANNEL ADC DATA MONITORING AND ANALYSIS USING STM32F7 DISCOVERY BOARD

 
![photo_5989875667652690888_y](https://github.com/user-attachments/assets/9d1e4a6d-6c76-4f35-af16-79295b3ac771)

This project involves configuring a six-channel ADC using DMA and developing a user interface with TouchGFX for a TFT display. The ADC values are passed to the UI, where they are graphically represented in various modes: simultaneously, individually, and all together for comparison.


This is the main screen of data graph:
![photo_5989875667652690899_y](https://github.com/user-attachments/assets/5b52151c-ad6f-49f4-b417-b385d5c2dcf5)


When you tap on each graph, a screen appears displaying data specific to that graph. Each screen corresponds to its respective graph:






![photo_5989875667652690897_y](https://github.com/user-attachments/assets/e3d8a3db-3d71-4d88-bdf7-a72e7edfa9f6)
![photo_5989875667652690896_y](https://github.com/user-attachments/assets/ef21c4bf-48ac-4d7e-adda-90fb51d493c9)
![photo_5989875667652690895_y](https://github.com/user-attachments/assets/f27e1271-d53c-4c6e-a11e-21ad6c0a0745)
![photo_5989875667652690894_y](https://github.com/user-attachments/assets/bc1a2969-e963-4069-be96-208f7e450256)
![photo_5989875667652690893_y](https://github.com/user-attachments/assets/ed7d1705-9f88-48a4-b526-6e09de7837c6)
![photo_5989875667652690891_y](https://github.com/user-attachments/assets/4026fa49-58e6-484e-b86d-35a71c1f98a2)

By tapping the button at the bottom of the main screen, a new screen appears displaying all graphs simultaneously for comparison purposes:


![photo_5989875667652690889_y](https://github.com/user-attachments/assets/435c490c-bc7f-46f4-8e96-f4b529a49d38)


The pins designated for reading analog values are PA0, PA1, PA2, PA3, PA4, and PA5.

To upload this code to your STM32F7 Discovery board, please follow these instructions:






