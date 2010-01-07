 _____       ___   _          __  __   _  
|  _  \     /   | | |        / / |  \ | | 
| | | |    / /| | | |  __   / /  |   \| | 
| | | |   / / | | | | /  | / /   | |\   | 
| |_| |  / /  | | | |/   |/ /    | | \  | 
|_____/ /_/   |_| |___/|___/     |_|  \_| 

*uino - Embedded Developemt Enviroment

The idea is to create an Integrated Development Enviroment 
for Arduino developers and other *duino family members and
cousins, relatives, and make them all happy together ;-)

To achieve this, some stuff in this repsoitiry is replicated/pulled (still working on)
as there are no alternatives to the arduino/java/package download.

This realm instead wished to create the "core" and append all aditionals as requried.
Also wished is to create basic IDE widgets and tools than can be customised(skin) for eg
* a school elextronics club
* home flight simulator flight deck
* some mega corp 

The general structure of requirements has spanned out like this.. so far... (on linux)

/bin           - contains all the binary executables, shell scripts etc
/cppqt-ide     - the c++ enviroment GUI * placeholder
/dawnedeonline - google cloud and global distribution
/etc           - configuration
/examples      - examples of code snippets etc
/hardware      - all the hardware specs/hex etc
/help_docs     - the api documentation and tutorials
/installers    - scripts to mangle all this stuff into a package for destination platform
/libs          - all the header files, c+code, etc
/pyqt-ide      - A Qt front end in python ** Under active development **
