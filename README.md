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
