
<h1>Boost Converter</h1>

<h2>Description</h2>
This is one of my most interesting projects that i have done until the end of the first half of my second year of college. As the name implies, i made a Logic Gate with an SR latch and a DC oscillator that makes a buzzer vibrate slowly when the sound is not detected, and very sharply when the sound is present. The logic gate is of course an ON/OFF circuit that turns LEDs on based on what buttons are pressed or the sound that is collected. Afterwards, within a fraction of a second, the gate transfers a signal from its OUTPUT to the INPUT of the oscillator that turns the buzzer on loudly. 
<br />

<h2>The Technology of the Circuit</h2>
As I said in the description my project consists of two important parts: the logic gate and the oscillator. Both of them have the same 2 mirrored circuits with bjts, transistors and a LED in parallel of the bjt but the main differences between the two of them are the connections from the INPUT of one circuit (the base of the bjt) to the OUTUT of the other (the collector of the bjt). As current passes from the source the base pins of the 2 bjts in parallel get polarised one after another, opening the transistors and shorting the LEDs rapidly and the capacitors slow down this effect. The 3 capacitors from the left circuit have the role of charging and discharging current in the 10k rezistor and the reason behind them being in series is because i wanted a lower capacitance so that the oscillator will be faster. The logic gate's two parts are connected via resistors and when one LED is on, the other is off. The LEDs can get lightened by switching buttons connected to power or by the sound sensor alone. The sensor is connected to the INPUT of the logic gate with the digital pin going through a 2k resistor in series with a diode (so that the current can only flow from the sensor to the INPUT) and i have adjusted the potentiometer on the sensor to increase the sensitivity in order to send normal current signals. The schematic in orCAD includes the whole circuit except for the sensor and the display. The buzzer is connected to the OUTPUT of the oscillator so that it can draw power. The LCD prints messages according to the state of the logic gate.
<br />
<h2>The Schematic in orCAD</h2>
<img src="https://imgur.com/6W4jeV9.png="80% width="80%" alt="Disk Sanitization Steps"/>
<br />
<h2>Languages and Utilities Used</h2>

- <b>Arduino IDE</b>
-  <b>orCAD</b> 

<h2>Environments Used </h2>

- <b>Windows 11</b> 
<h2>Components Used</h2> 
- <b>breadboard</b> 
<br />
- <b>Arduino Uno</b>
<br />
- <b>100uH inductor</b> 
<br />
- <b>wires</b> 
<br />
- <b>nMOS transistor</b></b>
<br />
- <b> 100uF Capacitors</b>
<br />
- <b>Resistors</b>
<br />
- <b>Diode</b>
<h2>Pictures and Videos of the Project</h2>

<p align="center">
  Watch video:  (https://imgur.com/OfxHoI7)

 <br/>
<img src="https://imgur.com/rDOv8zj.png" height="80%" width="80%" alt="Disk Sanitization Steps"/>
<br />
<br />
<img src="https://imgur.com/DJGXzci.png" height="80%" width="80%" alt="Disk Sanitization Steps"/>
<br />
<br />
<img src="https://imgur.com/L5NzW9o.png" height="80%" width="80%" alt="Disk Sanitization Steps"/>
<br />

