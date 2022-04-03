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

