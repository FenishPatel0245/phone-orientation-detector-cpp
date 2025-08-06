# phone-orientation-detector-cpp

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Name:Fenish/Date:2025-08-05 : I added main files to work on it.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Name:Fenish/Date:2025-08-05 :


define FileManager utility class for reading and writing gravity data

- Declares static readData(): reads gravity vectors with labels from a file
- Declares static writeOutputs(): saves predicted results to file
- Operates on vectors of GravityData defined in BaseClassifier.h
- Centralizes file I/O for training, test, and prediction data

  File: FileManager.h
  
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

 Name:Fenish/Date:2025-08-05 :

implement FileManager methods for file I/O

- readData(): reads lines from file, parses x, y, z, and orientation into GravityData
- Supports space/tab-separated values
- writeOutputs(): writes GravityData predictions to output file
- Outputs tab-separated columns with header: X, Y, Z, Orientation

  File: FileManager.cpp
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

 Name:Darshita/Date:2025-08-05 :

 d placeholder KNNModule class derived from Classifier

- Implements train() and predict() as stubs
- predict() returns fixed message: \"KNNModule not implemented yet!\"
- Allows compilation and testing of interface without logic"

  File: KNNModule.h
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

 Name:Darshita/Date:2025-08-05 :

 create KNNModule.cpp with base header include

- Includes KNNModule.h to ensure linkage and compilation
- Placeholder file for future k-Nearest Neighbour logic
- Keeps file structure consistent with other classifier modules

  File: KNNModule.cpp
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Name:Pratham/Date:2025-08-05 :

define abstract Classifier base class and GravityData struct

- GravityData: holds x, y, z accelerometer values and orientation label
- Classifier: abstract interface with pure virtual methods:
  - train(): to be implemented by concrete classifiers
  - predict(): returns predicted orientation
- Includes virtual destructor to allow safe polymorphic deletion

  File: BaseClassifier.h

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
