EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:maxim
LIBS:74xgxx
LIBS:ac-dc
LIBS:actel
LIBS:Altera
LIBS:analog_devices
LIBS:battery_management
LIBS:bbd
LIBS:brooktre
LIBS:cmos_ieee
LIBS:dc-dc
LIBS:diode
LIBS:elec-unifil
LIBS:ESD_Protection
LIBS:ftdi
LIBS:gennum
LIBS:graphic
LIBS:hc11
LIBS:ir
LIBS:Lattice
LIBS:logo
LIBS:microchip_dspic33dsc
LIBS:microchip_pic10mcu
LIBS:microchip_pic12mcu
LIBS:microchip_pic16mcu
LIBS:microchip_pic18mcu
LIBS:microchip_pic32mcu
LIBS:motor_drivers
LIBS:msp430
LIBS:nordicsemi
LIBS:nxp_armmcu
LIBS:onsemi
LIBS:Oscillators
LIBS:Power_Management
LIBS:powerint
LIBS:pspice
LIBS:references
LIBS:relays
LIBS:rfcom
LIBS:sensors
LIBS:silabs
LIBS:stm8
LIBS:stm32
LIBS:supertex
LIBS:switches
LIBS:transf
LIBS:ttl_ieee
LIBS:video
LIBS:Worldsemi
LIBS:Xicor
LIBS:Zilog
LIBS:stc
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L STC15W404AS U2
U 1 1 58558415
P 5200 2250
F 0 "U2" H 4450 3000 50  0000 L BNN
F 1 "STC15W404AS" H 5650 1350 50  0000 L BNN
F 2 "DIL28" H 5250 2250 50  0000 C CIN
F 3 "" H 5250 2250 50  0000 C CNN
	1    5200 2250
	1    0    0    -1  
$EndComp
$Comp
L DS1302 U1
U 1 1 58558632
P 2050 2400
F 0 "U1" H 2320 2950 50  0000 C CNN
F 1 "DS1302" H 2350 1850 50  0000 C CNN
F 2 "" H 2050 2400 50  0000 C CNN
F 3 "" H 2050 2400 50  0000 C CNN
	1    2050 2400
	0    1    1    0   
$EndComp
$Comp
L MAN71A LED1/A1
U 1 1 58558A30
P 9550 2650
F 0 "LED1/A1" H 9550 3200 50  0000 C CNN
F 1 "MAN71A" H 9550 2200 50  0001 C CNN
F 2 "" H 9550 2650 50  0000 C CNN
F 3 "" H 9550 2650 50  0000 C CNN
	1    9550 2650
	1    0    0    -1  
$EndComp
$Comp
L MAN71A LED1/A2
U 1 1 58558AA9
P 9550 3700
F 0 "LED1/A2" H 9550 4250 50  0000 C CNN
F 1 "MAN71A" H 9550 3250 50  0001 C CNN
F 2 "" H 9550 3700 50  0000 C CNN
F 3 "" H 9550 3700 50  0000 C CNN
	1    9550 3700
	1    0    0    -1  
$EndComp
$Comp
L MAN71A LED1/A3
U 1 1 58558B30
P 9550 4750
F 0 "LED1/A3" H 9550 5300 50  0000 C CNN
F 1 "MAN71A" H 9550 4300 50  0001 C CNN
F 2 "" H 9550 4750 50  0000 C CNN
F 3 "" H 9550 4750 50  0000 C CNN
	1    9550 4750
	1    0    0    -1  
$EndComp
$Comp
L MAN71A LED1/A4
U 1 1 58558BA7
P 9550 5800
F 0 "LED1/A4" H 9550 6350 50  0000 C CNN
F 1 "MAN71A" H 9550 5350 50  0001 C CNN
F 2 "" H 9550 5800 50  0000 C CNN
F 3 "" H 9550 5800 50  0000 C CNN
	1    9550 5800
	1    0    0    -1  
$EndComp
Text GLabel 7850 2050 0    60   Input ~ 0
a
Text GLabel 7850 1900 0    60   Input ~ 0
b
Text GLabel 7850 1750 0    60   Input ~ 0
c
Text GLabel 7850 1600 0    60   Input ~ 0
d
Text GLabel 7850 1450 0    60   Input ~ 0
e
Text GLabel 7850 1300 0    60   Input ~ 0
f
Text GLabel 7850 1150 0    60   Input ~ 0
g
Text GLabel 10600 2200 2    60   Input ~ 0
A1
Text GLabel 10600 3250 2    60   Input ~ 0
A2
Text GLabel 10600 4300 2    60   Input ~ 0
A3
Text GLabel 10600 5350 2    60   Input ~ 0
A4
Text GLabel 7100 1750 2    60   Output ~ 0
a
Text GLabel 7100 1600 2    60   Output ~ 0
b
Text GLabel 7100 1450 2    60   Output ~ 0
c
Text GLabel 7100 1300 2    60   Output ~ 0
d
Text GLabel 7100 1150 2    60   Output ~ 0
e
Text GLabel 7100 1000 2    60   Output ~ 0
f
Text GLabel 7250 1950 2    60   Output ~ 0
A4
Text GLabel 7250 2100 2    60   Output ~ 0
A3
Text GLabel 7250 2250 2    60   Output ~ 0
A2
Text GLabel 7250 2400 2    60   Output ~ 0
A1
Text GLabel 7850 1000 0    60   Input ~ 0
dp
Text Label 7900 1000 2    60   ~ 0
3
Text Label 7900 1150 2    60   ~ 0
5
Text Label 7950 1300 2    60   ~ 0
10
Text Label 7900 1450 2    60   ~ 0
1
Text Label 7900 1600 2    60   ~ 0
2
Text Label 7900 1750 2    60   ~ 0
4
Text Label 7900 1900 2    60   ~ 0
7
Text Label 7950 2050 2    60   ~ 0
11
Text Label 10550 2200 2    60   ~ 0
12
Text Label 10550 3250 2    60   ~ 0
9
Text Label 10550 4300 2    60   ~ 0
8
Text Label 10550 5350 2    60   ~ 0
6
Text Label 10300 800  2    60   ~ 0
2481BS
Text GLabel 4000 1050 0    60   Output ~ 0
g
Text GLabel 4000 1200 0    60   Output ~ 0
dp
$Comp
L SW_PUSH SW2
U 1 1 5855C733
P 7000 3650
F 0 "SW2" H 7150 3760 50  0000 C CNN
F 1 "SW_PUSH" H 7000 3570 50  0000 C CNN
F 2 "" H 7000 3650 50  0000 C CNN
F 3 "" H 7000 3650 50  0000 C CNN
	1    7000 3650
	0    1    1    0   
$EndComp
$Comp
L SW_PUSH SW1
U 1 1 5855C7AC
P 7350 3650
F 0 "SW1" H 7500 3760 50  0000 C CNN
F 1 "SW_PUSH" H 7350 3570 50  0000 C CNN
F 2 "" H 7350 3650 50  0000 C CNN
F 3 "" H 7350 3650 50  0000 C CNN
	1    7350 3650
	0    1    1    0   
$EndComp
$Comp
L GND #PWR01
U 1 1 5855CC1F
P 7000 3950
F 0 "#PWR01" H 7000 3700 50  0001 C CNN
F 1 "GND" H 7000 3800 50  0000 C CNN
F 2 "" H 7000 3950 50  0000 C CNN
F 3 "" H 7000 3950 50  0000 C CNN
	1    7000 3950
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR02
U 1 1 5855CC67
P 6400 4000
F 0 "#PWR02" H 6400 3750 50  0001 C CNN
F 1 "GND" H 6400 3850 50  0000 C CNN
F 2 "" H 6400 4000 50  0000 C CNN
F 3 "" H 6400 4000 50  0000 C CNN
	1    6400 4000
	0    -1   -1   0   
$EndComp
$Comp
L +5V #PWR03
U 1 1 5855CC8B
P 6200 4200
F 0 "#PWR03" H 6200 4050 50  0001 C CNN
F 1 "+5V" H 6200 4340 50  0000 C CNN
F 2 "" H 6200 4200 50  0000 C CNN
F 3 "" H 6200 4200 50  0000 C CNN
	1    6200 4200
	-1   0    0    1   
$EndComp
$Comp
L BARREL_JACK JK1
U 1 1 5855D73E
P 4750 4100
F 0 "JK1" H 4750 4350 50  0000 C CNN
F 1 "BARREL_JACK" H 4750 3900 50  0000 C CNN
F 2 "" H 4750 4100 50  0000 C CNN
F 3 "" H 4750 4100 50  0000 C CNN
	1    4750 4100
	1    0    0    -1  
$EndComp
$Comp
L +5V #PWR04
U 1 1 5855D848
P 5200 3900
F 0 "#PWR04" H 5200 3750 50  0001 C CNN
F 1 "+5V" H 5200 4040 50  0000 C CNN
F 2 "" H 5200 3900 50  0000 C CNN
F 3 "" H 5200 3900 50  0000 C CNN
	1    5200 3900
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR05
U 1 1 5855D877
P 5200 4300
F 0 "#PWR05" H 5200 4050 50  0001 C CNN
F 1 "GND" H 5200 4150 50  0000 C CNN
F 2 "" H 5200 4300 50  0000 C CNN
F 3 "" H 5200 4300 50  0000 C CNN
	1    5200 4300
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR06
U 1 1 58560BBC
P 1200 2400
F 0 "#PWR06" H 1200 2150 50  0001 C CNN
F 1 "GND" H 1200 2250 50  0000 C CNN
F 2 "" H 1200 2400 50  0000 C CNN
F 3 "" H 1200 2400 50  0000 C CNN
	1    1200 2400
	0    1    1    0   
$EndComp
$Comp
L Battery BT1
U 1 1 5856145C
P 1100 3300
F 0 "BT1" H 1200 3350 50  0000 L CNN
F 1 "3V (CR1220)" H 1200 3250 50  0000 L CNN
F 2 "" V 1100 3340 50  0000 C CNN
F 3 "" V 1100 3340 50  0000 C CNN
	1    1100 3300
	0    1    1    0   
$EndComp
$Comp
L GND #PWR07
U 1 1 585615D8
P 950 3300
F 0 "#PWR07" H 950 3050 50  0001 C CNN
F 1 "GND" H 950 3150 50  0000 C CNN
F 2 "" H 950 3300 50  0000 C CNN
F 3 "" H 950 3300 50  0000 C CNN
	1    950  3300
	0    1    1    0   
$EndComp
$Comp
L Crystal Y1
U 1 1 58561600
P 1650 1150
F 0 "Y1" H 1650 1300 50  0000 C CNN
F 1 "32768kHz" H 1650 1000 50  0000 C CNN
F 2 "" H 1650 1150 50  0000 C CNN
F 3 "" H 1650 1150 50  0000 C CNN
	1    1650 1150
	0    1    1    0   
$EndComp
$Comp
L C c1
U 1 1 585620C3
P 1200 900
F 0 "c1" H 1225 1000 50  0000 L CNN
F 1 "22pF" H 1225 800 50  0000 L CNN
F 2 "" H 1238 750 50  0000 C CNN
F 3 "" H 1200 900 50  0000 C CNN
	1    1200 900 
	0    1    1    0   
$EndComp
$Comp
L C C2
U 1 1 58562116
P 1200 1400
F 0 "C2" H 1225 1500 50  0000 L CNN
F 1 "22pF" H 1225 1300 50  0000 L CNN
F 2 "" H 1238 1250 50  0000 C CNN
F 3 "" H 1200 1400 50  0000 C CNN
	1    1200 1400
	0    1    1    0   
$EndComp
$Comp
L GND #PWR08
U 1 1 58562235
P 750 1200
F 0 "#PWR08" H 750 950 50  0001 C CNN
F 1 "GND" H 750 1050 50  0000 C CNN
F 2 "" H 750 1200 50  0000 C CNN
F 3 "" H 750 1200 50  0000 C CNN
	1    750  1200
	0    1    1    0   
$EndComp
$Comp
L R R3
U 1 1 58562A72
P 3100 2800
F 0 "R3" V 3180 2800 50  0000 C CNN
F 1 "10K" V 3100 2800 50  0000 C CNN
F 2 "" V 3030 2800 50  0000 C CNN
F 3 "" H 3100 2800 50  0000 C CNN
	1    3100 2800
	1    0    0    -1  
$EndComp
$Comp
L +5V #PWR09
U 1 1 58562B6D
P 3100 800
F 0 "#PWR09" H 3100 650 50  0001 C CNN
F 1 "+5V" H 3100 940 50  0000 C CNN
F 2 "" H 3100 800 50  0000 C CNN
F 3 "" H 3100 800 50  0000 C CNN
	1    3100 800 
	1    0    0    -1  
$EndComp
$Comp
L SPEAKER LS1
U 1 1 58562DC9
P 1650 3950
F 0 "LS1" H 1550 4200 50  0000 C CNN
F 1 "BUZZER" H 1550 3700 50  0000 C CNN
F 2 "" H 1650 3950 50  0000 C CNN
F 3 "" H 1650 3950 50  0000 C CNN
	1    1650 3950
	-1   0    0    1   
$EndComp
$Comp
L +5V #PWR010
U 1 1 58562E46
P 2050 3600
F 0 "#PWR010" H 2050 3450 50  0001 C CNN
F 1 "+5V" H 2050 3740 50  0000 C CNN
F 2 "" H 2050 3600 50  0000 C CNN
F 3 "" H 2050 3600 50  0000 C CNN
	1    2050 3600
	1    0    0    -1  
$EndComp
$Comp
L R R1
U 1 1 585630C1
P 2650 5350
F 0 "R1" V 2730 5350 50  0000 C CNN
F 1 "10K" V 2650 5350 50  0000 C CNN
F 2 "" V 2580 5350 50  0000 C CNN
F 3 "" H 2650 5350 50  0000 C CNN
	1    2650 5350
	1    0    0    -1  
$EndComp
$Comp
L R R2
U 1 1 5856322C
P 3400 5350
F 0 "R2" V 3480 5350 50  0000 C CNN
F 1 "10K" V 3400 5350 50  0000 C CNN
F 2 "" V 3330 5350 50  0000 C CNN
F 3 "" H 3400 5350 50  0000 C CNN
	1    3400 5350
	1    0    0    -1  
$EndComp
$Comp
L +5V #PWR011
U 1 1 5856335C
P 2650 4900
F 0 "#PWR011" H 2650 4750 50  0001 C CNN
F 1 "+5V" H 2650 5040 50  0000 C CNN
F 2 "" H 2650 4900 50  0000 C CNN
F 3 "" H 2650 4900 50  0000 C CNN
	1    2650 4900
	1    0    0    -1  
$EndComp
$Comp
L +5V #PWR012
U 1 1 58563392
P 3400 4900
F 0 "#PWR012" H 3400 4750 50  0001 C CNN
F 1 "+5V" H 3400 5040 50  0000 C CNN
F 2 "" H 3400 4900 50  0000 C CNN
F 3 "" H 3400 4900 50  0000 C CNN
	1    3400 4900
	1    0    0    -1  
$EndComp
$Comp
L +5V #PWR013
U 1 1 5856388E
P 4050 2750
F 0 "#PWR013" H 4050 2600 50  0001 C CNN
F 1 "+5V" H 4050 2890 50  0000 C CNN
F 2 "" H 4050 2750 50  0000 C CNN
F 3 "" H 4050 2750 50  0000 C CNN
	1    4050 2750
	0    -1   -1   0   
$EndComp
$Comp
L Photores R4
U 1 1 58563A9B
P 2650 6100
F 0 "R4" V 2730 6100 50  0000 C CNN
F 1 "Photores" V 2860 6100 50  0000 C TNN
F 2 "" V 2580 6100 50  0000 C CNN
F 3 "" H 2650 6100 50  0000 C CNN
	1    2650 6100
	1    0    0    -1  
$EndComp
$Comp
L THERMISTOR R5
U 1 1 58563B2E
P 3400 6100
F 0 "R5" V 3500 6150 50  0000 C CNN
F 1 "THERMISTOR" V 3300 6100 50  0000 C BNN
F 2 "" H 3400 6100 50  0000 C CNN
F 3 "" H 3400 6100 50  0000 C CNN
	1    3400 6100
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR014
U 1 1 58563B6B
P 2650 6600
F 0 "#PWR014" H 2650 6350 50  0001 C CNN
F 1 "GND" H 2650 6450 50  0000 C CNN
F 2 "" H 2650 6600 50  0000 C CNN
F 3 "" H 2650 6600 50  0000 C CNN
	1    2650 6600
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR015
U 1 1 58563BB8
P 3400 6600
F 0 "#PWR015" H 3400 6350 50  0001 C CNN
F 1 "GND" H 3400 6450 50  0000 C CNN
F 2 "" H 3400 6600 50  0000 C CNN
F 3 "" H 3400 6600 50  0000 C CNN
	1    3400 6600
	1    0    0    -1  
$EndComp
Wire Wire Line
	8950 2250 8400 2250
Wire Wire Line
	8400 3300 8950 3300
Connection ~ 8400 2250
Wire Wire Line
	8400 4350 8950 4350
Connection ~ 8400 3300
Wire Wire Line
	8400 5400 8950 5400
Connection ~ 8400 4350
Wire Wire Line
	8450 5500 8950 5500
Wire Wire Line
	8450 4450 8950 4450
Connection ~ 8450 4450
Wire Wire Line
	8450 3400 8950 3400
Connection ~ 8450 3400
Wire Wire Line
	8950 2350 8450 2350
Connection ~ 8450 2350
Wire Wire Line
	8950 2450 8500 2450
Wire Wire Line
	8500 3500 8950 3500
Wire Wire Line
	8500 4550 8950 4550
Wire Wire Line
	8500 5600 8950 5600
Wire Wire Line
	8550 5700 8950 5700
Wire Wire Line
	8600 5800 8950 5800
Wire Wire Line
	8650 5900 8950 5900
Wire Wire Line
	8550 4650 8950 4650
Wire Wire Line
	8600 4750 8950 4750
Wire Wire Line
	8650 4850 8950 4850
Wire Wire Line
	8550 3600 8950 3600
Wire Wire Line
	8600 3700 8950 3700
Wire Wire Line
	8700 3900 8950 3900
Wire Wire Line
	8650 3800 8950 3800
Wire Wire Line
	8950 2550 8550 2550
Wire Wire Line
	8950 2650 8600 2650
Wire Wire Line
	8950 2750 8650 2750
Wire Wire Line
	8950 2850 8700 2850
Wire Wire Line
	7850 2050 8400 2050
Wire Wire Line
	8400 2050 8400 5400
Wire Wire Line
	8450 1900 8450 5500
Wire Wire Line
	7850 1900 8450 1900
Wire Wire Line
	7850 1750 8500 1750
Wire Wire Line
	8500 1750 8500 5600
Wire Wire Line
	7850 1600 8550 1600
Wire Wire Line
	8550 1600 8550 5700
Wire Wire Line
	7850 1450 8600 1450
Wire Wire Line
	8600 1450 8600 5800
Wire Wire Line
	7850 1300 8650 1300
Wire Wire Line
	8650 1300 8650 5900
Wire Wire Line
	7850 1150 8700 1150
Wire Wire Line
	8700 1150 8700 6000
Connection ~ 8700 2850
Wire Wire Line
	8700 6000 8950 6000
Wire Wire Line
	8700 4950 8950 4950
Connection ~ 8700 3900
Connection ~ 8700 4950
Connection ~ 8650 4850
Connection ~ 8650 2750
Connection ~ 8650 3800
Connection ~ 8600 4750
Connection ~ 8600 2650
Connection ~ 8600 3700
Connection ~ 8550 4650
Connection ~ 8550 2550
Connection ~ 8550 3600
Connection ~ 8500 4550
Connection ~ 8500 3500
Connection ~ 8500 2450
Wire Wire Line
	8750 6300 8750 1000
Wire Wire Line
	8750 1000 7850 1000
Wire Wire Line
	10300 6050 10150 6050
Wire Wire Line
	10300 2900 10300 6300
Wire Wire Line
	10300 6300 8750 6300
Wire Wire Line
	10150 5000 10300 5000
Connection ~ 10300 6050
Wire Wire Line
	10150 3950 10300 3950
Connection ~ 10300 5000
Wire Wire Line
	10150 2900 10300 2900
Connection ~ 10300 3950
Wire Wire Line
	10150 5350 10600 5350
Wire Wire Line
	10150 4300 10600 4300
Wire Wire Line
	10150 3250 10600 3250
Wire Wire Line
	10150 2200 10600 2200
Wire Notes Line
	8000 850  8000 6350
Wire Notes Line
	8000 6350 10350 6350
Wire Notes Line
	10350 6350 10350 850 
Wire Notes Line
	10350 850  8000 850 
Wire Wire Line
	6200 2850 6500 2850
Wire Wire Line
	6500 2850 6500 3200
Wire Wire Line
	6200 2950 6450 2950
Wire Wire Line
	6450 2950 6450 3250
Wire Wire Line
	6450 3250 7000 3250
Wire Wire Line
	7000 3250 7000 3350
Wire Wire Line
	6500 3200 7350 3200
Wire Wire Line
	7350 3200 7350 3350
Connection ~ 6350 2950
Wire Wire Line
	5050 4000 5200 4000
Wire Wire Line
	5200 4000 5200 3900
Wire Wire Line
	5050 4100 5200 4100
Wire Wire Line
	5200 4100 5200 4300
Wire Wire Line
	5050 4200 5200 4200
Connection ~ 5200 4200
Wire Wire Line
	6200 2150 6900 2150
Wire Wire Line
	6900 2150 6900 1750
Wire Wire Line
	6900 1750 7100 1750
Wire Wire Line
	6200 2050 6850 2050
Wire Wire Line
	6850 2050 6850 1600
Wire Wire Line
	6850 1600 7100 1600
Wire Wire Line
	6200 1950 6800 1950
Wire Wire Line
	6800 1950 6800 1450
Wire Wire Line
	6800 1450 7100 1450
Wire Wire Line
	6200 1850 6750 1850
Wire Wire Line
	6750 1850 6750 1300
Wire Wire Line
	6750 1300 7100 1300
Wire Wire Line
	6200 1750 6700 1750
Wire Wire Line
	6700 1750 6700 1150
Wire Wire Line
	6700 1150 7100 1150
Wire Wire Line
	6200 1650 6650 1650
Wire Wire Line
	6650 1650 6650 1000
Wire Wire Line
	6650 1000 7100 1000
Wire Wire Line
	7250 1950 6950 1950
Wire Wire Line
	6950 1950 6950 2450
Wire Wire Line
	6950 2450 6200 2450
Wire Wire Line
	7000 2550 6200 2550
Wire Wire Line
	7000 2100 7000 2550
Wire Wire Line
	7000 2100 7250 2100
Wire Wire Line
	7050 2650 6200 2650
Wire Wire Line
	7050 2250 7050 2650
Wire Wire Line
	7050 2250 7250 2250
Wire Wire Line
	7100 2750 6200 2750
Wire Wire Line
	7100 2400 7100 2750
Wire Wire Line
	7100 2400 7250 2400
Connection ~ 6300 2850
Wire Wire Line
	4300 1650 4150 1650
Wire Wire Line
	4300 1750 4100 1750
Wire Wire Line
	4100 1750 4100 1200
Wire Wire Line
	4100 1200 4000 1200
Wire Wire Line
	4000 1050 4150 1050
Wire Wire Line
	4150 1050 4150 1650
Wire Wire Line
	2150 1500 2150 1800
Wire Wire Line
	2350 1600 2350 1800
Wire Wire Line
	2350 3000 2350 3100
Wire Wire Line
	2350 3100 3500 3100
Wire Wire Line
	3500 3100 3500 1950
Wire Wire Line
	3500 1950 4300 1950
Wire Wire Line
	2900 1850 4300 1850
Wire Wire Line
	2900 1850 2900 1500
Wire Wire Line
	2900 1500 2150 1500
Wire Wire Line
	2350 1600 2800 1600
Wire Wire Line
	2800 1600 2800 2050
Wire Wire Line
	2800 2050 4300 2050
Wire Wire Line
	1250 3300 1750 3300
Wire Wire Line
	1750 3300 1750 3000
Connection ~ 750  1200
Wire Wire Line
	1350 900  1850 900 
Wire Wire Line
	1650 900  1650 1000
Wire Wire Line
	1350 1400 1650 1400
Wire Wire Line
	1650 1300 1650 1800
Connection ~ 1650 1400
Wire Wire Line
	1850 900  1850 1800
Connection ~ 1650 900 
Wire Wire Line
	900  900  1050 900 
Wire Wire Line
	900  900  900  1400
Wire Wire Line
	900  1400 1050 1400
Wire Wire Line
	750  1200 900  1200
Connection ~ 900  1200
Wire Wire Line
	2650 2400 3100 2400
Wire Wire Line
	3100 800  3100 2650
Connection ~ 3100 2400
Wire Wire Line
	3100 2950 3100 3100
Connection ~ 3100 3100
Wire Wire Line
	1950 3850 2050 3850
Wire Wire Line
	2050 3850 2050 3600
Wire Wire Line
	1950 4050 3600 4050
Wire Wire Line
	3600 4050 3600 2350
Wire Wire Line
	3600 2350 4300 2350
Wire Wire Line
	4300 2450 3700 2450
Wire Wire Line
	3700 2450 3700 4150
Wire Wire Line
	3700 4150 3050 4150
Wire Wire Line
	3050 4150 3050 5600
Wire Wire Line
	3050 5600 2650 5600
Wire Wire Line
	2650 5500 2650 5850
Wire Wire Line
	3400 5500 3400 5850
Wire Wire Line
	3400 5200 3400 4900
Wire Wire Line
	3400 5600 3800 5600
Wire Wire Line
	3800 5600 3800 2550
Wire Wire Line
	3800 2550 4300 2550
Wire Wire Line
	4050 2750 4300 2750
Wire Wire Line
	4200 2950 4300 2950
Connection ~ 2650 5600
Connection ~ 3400 5600
Wire Wire Line
	3400 6600 3400 6350
Wire Wire Line
	10150 5450 10150 5350
Wire Wire Line
	10150 4400 10150 4300
Wire Wire Line
	10150 3350 10150 3250
Wire Wire Line
	10150 2300 10150 2200
$Comp
L GND #PWR016
U 1 1 58568EF6
P 7350 3950
F 0 "#PWR016" H 7350 3700 50  0001 C CNN
F 1 "GND" H 7350 3800 50  0000 C CNN
F 2 "" H 7350 3950 50  0000 C CNN
F 3 "" H 7350 3950 50  0000 C CNN
	1    7350 3950
	1    0    0    -1  
$EndComp
NoConn ~ 4300 2850
NoConn ~ 4300 2650
NoConn ~ 4300 2250
NoConn ~ 4300 2150
NoConn ~ 6200 2250
NoConn ~ 6200 2350
$Comp
L CONN_01X04 P1
U 1 1 58568FEC
P 5850 3950
F 0 "P1" H 5850 4200 50  0000 C CNN
F 1 "CONN_01X04" V 5950 3950 50  0000 C CNN
F 2 "" H 5850 3950 50  0000 C CNN
F 3 "" H 5850 3950 50  0000 C CNN
	1    5850 3950
	-1   0    0    1   
$EndComp
$Comp
L GND #PWR017
U 1 1 585691C5
P 4200 3150
F 0 "#PWR017" H 4200 2900 50  0001 C CNN
F 1 "GND" H 4200 3000 50  0000 C CNN
F 2 "" H 4200 3150 50  0000 C CNN
F 3 "" H 4200 3150 50  0000 C CNN
	1    4200 3150
	1    0    0    -1  
$EndComp
Wire Wire Line
	4200 2950 4200 3150
Wire Wire Line
	6300 2850 6300 3800
Wire Wire Line
	6300 3800 6050 3800
Wire Wire Line
	6350 2950 6350 3900
Wire Wire Line
	6350 3900 6050 3900
Wire Wire Line
	6050 4000 6400 4000
Wire Wire Line
	6050 4100 6200 4100
Wire Wire Line
	1450 2400 1200 2400
Wire Wire Line
	2650 5200 2650 4900
Wire Wire Line
	6200 4100 6200 4200
Wire Wire Line
	2650 6350 2650 6600
$EndSCHEMATC
