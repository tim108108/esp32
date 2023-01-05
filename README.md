# esp32
### 控制板主要晶片為ESP32-S2FH4，主頻240MHz、128 KB ROM、320 KB SRAM、16 KB RTC SRAM，內建4MB flash。須另外必須搭配40MHz晶振，Boost需使用GPIO0。
### sch
![image](https://github.com/tim108108/esp32/blob/master/3.Docs/esp32_sch.png)
### PCB Layout
![image](https://github.com/tim108108/esp32/blob/master/3.Docs/esp32_pcb.jpg)
### 3D
![image](https://github.com/tim108108/esp32/blob/master/3.Docs/esp32_3d.jpg)
### 實際
![image](https://github.com/tim108108/esp32/blob/master/3.Docs/esp32_real.jpeg)
### 接下來為韌體燒錄，ESP32-S2可以使用原廠的ESP-IDF進行開發，Arduino透過安裝套件進行開發，不過本次使用[circuitpython](https://circuitpython.org/board/espressif_saola_1_wroom/)作為開發平台，因為ESP32-S2原生支援USB，可以透過一根Type-C進行編譯與除錯。
### 使用Saola 1 w/WROOM的韌體，跟circuitpython網站的步驟就可以將韌體燒入至晶片，而且不用另外裝韌體燒錄程式，直接用說明步驟裡面的網站就可以直接燒錄。
[debug1](https://learn.adafruit.com/getting-started-with-raspberry-pi-pico-circuitpython/circuitpython)  
[debug2](https://embedded-things.blogspot.com/2022/03/fix-runtimeerror-none-data-for-in.html)

# drv8313
### 驅動晶片使用的是ti的drv8313系列BLDC驅動晶片
### sch
![image](https://github.com/tim108108/esp32/blob/master/3.Docs/drv8313_sch.png)
### PCB Layout 
![image](https://github.com/tim108108/esp32/blob/master/3.Docs/drv8313_pcb.png)
### 3D
![image](https://github.com/tim108108/esp32/blob/master/3.Docs/drv8313_3d.png)
### 實際成品
![image](https://github.com/tim108108/esp32/blob/master/3.Docs/drv8313_real.png)