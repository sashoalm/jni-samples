# exit on error
set -e

# compile Sample1.java
javac Sample1.java

# compile Sample1.cpp
gcc -I/usr/lib/jvm/java-1.7.0-openjdk-i386/include -shared -o libSample1.so -fPIC Sample1.cpp

# run
LD_LIBRARY_PATH=$LD_LIBRARY_PATH:. java Sample1
