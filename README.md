Interpreter, that converts .gc files to linux executables. The German-C language is a C-based language, that uses german words and terms.
# Usage
Syntaxis: 
```
gc [-c c_filename_out] filename_in [filename_out]
```
The -c parameter instructs the program to output a C file (named c_filename_out), instead of an executable.
The filename_out is the name of the executable, that is to be created. If no name is provided, the executable carries the name of the .gc file.
This parameter is ignored if the -c option is provided.


# The GC language
The German-C functions just like normal C, but its syntax is in german. Essentially it gets interpreted to stadard C, and then compiled.

## Preprocessor Directives
| German-C directive  | C directive |
|--------------------|-------------|
|#beinhalte | #include |
|#definiere | #define |
|#defentf | #undef |
|#falls | #if |
|#fallsdef | #ifdef |
|#fallsndef | #ifndef |
|#sonst | #else |
|#sonstfalls | #elif |
|#endfalls | #endif |
|#Zeile | #line |
|#Fehler | #error |
|#pragma | #pragma |
|#Warnung | #warning |


## Keywords:
| German-C keyword  | C keyword |
| ------------- | ------------ |
| brechen  |  break |
| Fall  | case |
| Zeichen | char |
| fortfahren | continue |
| tu | do |
| Standart | default |
| konstant | const |
| Doppel | double |
| sonst | else |
| Aufzählung | enum |
| äußer | extern |
| für | for |
| falls | if |
| geh_zu | goto |
| Gleitkomma | float |
| Ganz | int |
| lang | long |
| gib_zurück | return |
| vorzeichenbehaftet | signed |
| statisch | static |
| Größevon | sizeof |
| kurz | short |
| Struktur | struct |
| Schalter | switch |
| Typdef | typedef |
| Vereinigung | union |
| Nichts | void | 
| während | while |
| flüchtig | volatile |
| nicht_vorzeichenbehaftet | unsigned |
