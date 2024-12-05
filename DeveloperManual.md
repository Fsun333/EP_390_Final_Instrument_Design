# Developer Manual



---

## 1. Bill of Materials (BOM)

Below is a detailed list of materials required to build the project:

| **Item**               | **Distributor**         | **Price (USD)** | **Quantity** | **Total Cost (USD)** |
|-------------------------|-------------------------|-----------------|--------------|----------------------|
| Arduino ESP32 Microcontroller   | [Amazon](https://www.amazon.com/Arduino-ABX00083-Bluetooth-MicroPython-Compatible/dp/B0C947BHK5/ref=sr_1_1_sspa?crid=3COHWGK5WZQ9U&dib=eyJ2IjoiMSJ9.GzP-GvhsR81ftjmV7C-hRbjjWrFW2CBmv26NMHonZJQv-nwWi-OhyYKh-Rh1E8EfgWLK3dc5m5FXbbUiPsAVjSXQQMuAgego0nvDbNsNn8_qWeBTu20Rv5TiLLKHYEhP_n67cgIEabG6CiT9_aOhkCtU9E_E49QuNMbEbUThG-6eQcQmiDxX-0OXmmGN0q52ArTP3fYWDR4Pxp2sIPNVxi_01EuzspGUnI5MMhfvgVVEjdhXFU4nJyMuRi5U52D6eZzfYvQaem9oKXZdaB9ArKGdEOXjeKYgsSGsgCk0h0Q.B76va3JrfHsjLa_KYDJ9qNMcd1HDARrn1IGtbosZGP4&dib_tag=se&keywords=arduino+esp32&qid=1733417344&s=electronics&sprefix=arduino+esp3%2Celectronics%2C127&sr=1-1-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1) | $23          | 1            | $23               |
|Microphone Sensor  | [Amazon](https://www.amazon.com/dp/B00XT0PH10?ref=ppx_yo2ov_dt_b_fed_asin_title)  | $6.49           | 1            | $6.49                |
| Push Buttons  | [Amazon](https://www.amazon.com/dp/B07RTZVZ6L?ref=ppx_yo2ov_dt_b_fed_asin_title)   | $7.99           | 1            | $7.99               |
 
**Total Estimated Cost:** $37.48

---

## 2. Implementation Details

### Gestures Captured
- **Blowing:** Captured using the microphone sensor to detect the sound waves.
- **Button Presses:** Used to trigger specific notes when user press it.
### Sensors Considered
1. **Microphone Sensor** :
   - **Reason for Selection:** Accurate in capturing sound intensity, small and lightweight, easy to install.
2. **Push Buttons:**
   - **Reason for Selection:** Simple, reliable, and low-cost solution for triggering notes.
3. Other Sensors For the Future: 
     - Pressure Sensor - More accurate than a microphone sensor.
     - Ultrasonc Sensor - Controll reverb or delay,
     - Poteniaomiter - Controlling the filter


### Data Processing
- **Raw Data Processing:**
  - Microphone input: Analyzed sound amplitude of 0 to 1.
  - Button presses: Processed as discrete digital inputs.
  

### Challenges
- **Microphone Sensitivity:** Initial setups were too sensitive, resulting in noise interference. This was mitigated by adding a software threshold.

---

## 3. Future Plans

1. **Enhanced Gestures:**
   - Integrate ultrasonic sensors to dynamically control reverb and delay parameters, enhancing the immersive experience for users when interacting with the instrument.
   
2. **A more precise breath detection system.**
   - Replace the microphone sensor with a barometric pressure sensor to improve accuracy when detecting the player's breath. This upgrade provides more precise data, enabling enhanced control over the master level of the signal generator system. It allows users to customize the ADSR envelope, where variations in breath intensity, such as a light or heavy blow, can dynamically influence the attack time for more expressive sound triggering.

3. **Add a potentiometer:**
   - Incorporate a potentiometer fader to control the cutoff frequency of the filter, giving users more options to shape the sound and add a richer variety of musical elements to their experience.