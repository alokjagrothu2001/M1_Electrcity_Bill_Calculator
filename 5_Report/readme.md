# Introduction
For most of us, the electricity bill is needed just to check the final amount and make the payment.In spite of understanding the bills, not many of us know how much we were spending per unit (or 1 kWh) of electricity. It is very important to know the per-unit cost of electricity as it helps us in understanding how much we are spending per appliance at our home. It is important to understand the monetary impact of any electricity efficiency measures we take. It is also important to understand various components of electricity bills and what is their contribution to the total electricity bill. In a bid to help people understand the same, I have created this electricity bill calculator that will help people understand how much they spend on various appliances every month and how they can save by doing various activities. Please make sure that you read about the calculator below before using it.
# Research
From different websites and articles I have read about data types , constanats , loopings , if-else ,switch-case , different types of operators and its significance.

<br> Reference Links
<br>https://tutorialsclass.com/exercise/c-program-to-calculate-electricity-bill/
<br>https://codeforwin.org/2015/05/c-program-to-calculate-electricity-bill.html

# SWOT Analysis :

# WHO : 
Consumers of different types will consume the electricity.

# When : 
It can be used everytime and everywhere and world is nothing without electrical power or electricity.

# Where :
It is used all over the world.

# How : 
From conventional energy sources or from renewable energy sources the energy is converted into useful form of electrical energy and it is generated, transmitted and distributed to consumers. And hence along with the units multiplied with rate of charge,the maintenance nothing but fixed and consumer charges are also added.  

# System Description
![Defining_System](https://user-images.githubusercontent.com/101423374/161422381-cac82942-681e-4557-9ba4-699d3afd4264.JPG)

# Design
# Behavioural Diagram
![flowgorithm](https://user-images.githubusercontent.com/101423374/161422298-8a584700-35c5-43f3-8681-fd96f1faa9e1.JPG)
# Use case Diagram
![usecase_digram](https://user-images.githubusercontent.com/101423374/161422320-a5604031-a91c-4a0b-8eb0-7c2d5fb52e18.JPG)
# Activity Diagram
![activity diagram](https://user-images.githubusercontent.com/101423374/161422355-bce28a5f-c894-44f5-94a9-34eed9b48d04.JPG)
# Class Diagram
![Class diagram](https://user-images.githubusercontent.com/101423374/161422362-cd0c4829-483e-46c4-8da2-1a9192f41ed5.JPG)

# Test Plan
<br>

## High Level Test Plan
<br>

| Units |  Calculation | Expected input | Expected output | Actual output | Type of Test | 
|--------|-------------------|-----------------|----------------|-----------|
|HP01| previous meter readings | current meter reading | Units | Enters to class | Pass Requirement | 
|HP02| Bill Amount | class | Bill amount will be calculated | Pass Requirement|

<br>
<br>
<br>


## Low Level Test Plan
<br>

|Units | Previous reading | Current reading | Expected output | Actual output | Type of test|
|-------|---------------------|---------------|-------------|----------------------|
|LP01| Previous reading and current reading is given | Integer 1| View the readings | pass | Requirement |
|LP02| Units will be calculated | Interger 2| View the units | Pass | Requirement |
|LP03| Selection of group to calculate the bill amount | Exit | Pass | requirement | 
|LP04| Three groups are available | Pass | Requirement|
|LP05| You can select group | char group| pass | Requirement|
|LP06| The rate of charge will be noted | Pass | Requirement |
|LP07| The energy charges will get | Pass | Requirement |
|LP08| The energy charges will be added to customer charges ,Duty charges,Fixed charges | Pass | Requirements |
|LP09| Bill amounts will get as output | Exits from loop | Pass | Requirement |

# Output
![terminal](https://user-images.githubusercontent.com/101423374/161423482-eaa3abfb-b387-45b0-b68f-2d2de0132862.JPG)
![output](https://user-images.githubusercontent.com/101423374/161423490-3549498f-9b73-49ff-a273-33ecb3ea27a8.JPG)

# Challenges Faced and How was it overcome?
<br>1.Issue while running Makefile - Make sure you have included all the files with .o extension and also include correct path for unity and test file
<br>2.Issue with workflows - Check you folder structure where all the unity and makefile is present and include the path correctly.

# To Run the make file use Following comands
<br>make
<br>make run






