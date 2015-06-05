echo off
set path=%path%;c:\Program Files\Java\jdk1.8.0_45\bin
call "c:\Program Files\Microsoft Visual Studio 9.0\VC\vcvarsall.bat"
cl -I"C:\Program Files\Java\jdk1.8.0_45\include" -I"C:\Program Files\Java\jdk1.8.0_45\include\win32" -LD Sample1.cpp -FeSample1.dll
if %errorlevel% neq 0 exit /b %errorlevel%
javac Sample1.java
if %errorlevel% neq 0 exit /b %errorlevel%
java Sample1