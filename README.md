
<h1>Boost Converter</h1>

<h2>Description</h2>
For future more complex projects I wanted to design a circuit that can multiply voltage itself by even more than 3 times than the INPUT voltage. Because of that, I created a so called boost converter, a circuit that can raise the voltage value without really an upper limit, except for that of the components' of course.
<br />

<h2>The Technology of the Circuit</h2>
A boost converter consists of two energy storing components (an inductor and a capacitor) separated by a diode with the cathode facing the capacitor and an nMOS transistor used as a switch between the inductor and the diode. This configuration is wired to the Arduino board that is supplying 5V to the circuit. The capacitor is connected to a voltage divider constructed for the Arduino pin to measure the voltage above the 5.1k resistor. That is because the Arduino pin reeads the voltage in that point and the code makes a simple calculus so that it knows when to stop the boost converter. The limit is set to 15V but the absolute possible limit is about 19.8V because it is the maximum voltage in that point (5V) times the total resistence of the voltage divider, all over the 5.1k resistence. The reason behind the fact I didn't measure the voltage on top of the voltage divider is beacuse the Arduino pins can only measure up to 5V. The OUTPUT voltage is smoothed down by the other capacitor wired in parallel. The MOSFET is switched on and off by the PWM pin gradually by the duty cycle. When the switch is open the capacitor and the inductor are both starting to charge up really fast. When the switch is closed however, the inductor is discharging into the ground and the diode blocks the capacitor to discharge. Because of that, the capacitor is charging up constantly up to the limit set by me.
<br />
<h2>The Schematic in orCAD</h2>
<img src="https://imgur.com/6QukZ7t.png="80% width="80%" alt="Disk Sanitization Steps"/>
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

